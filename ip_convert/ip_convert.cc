/**
Author: xionghailong
Date: 2019-09-06
Description: 将IPV4地址转换为32位整数
**/

#include "ip_convert.h"

/**
Functiddon: ipConvert
* @brief convert IPV4 to unsigned int
* @param ip IPV4 adress
* @return 将ip地址转成整形数据，返回值使用unsigned int.
* @throw  ip有异常时，抛出异常并打印异常提示信息.
**/
unsigned int ipConvert(string ip)
{
    unsigned int result = 0;
    int tmp = 0;
    int ipSize = ip.size();
    bool numBegin = false; // 标识是否开始转换数字，开始转换设置为true
    bool noNum = false; // 标识是否可以出现数字，当数字中出现空格设置为true
    int count = 0; //统计

    for (int i = 0; i < ipSize; i++) {
       if(ip[i] == ' ') {
           // 已有数字开始，出现空格，标识为true
           if(numBegin) {
               noNum = true;
            }
        } else if (ip[i] >= '0' && ip[i] <= '9') {
            // 数字中间有空格
            if (noNum) {
                throw "ERROR: Int data has spase.";
            }
            tmp = tmp * 10 + ip[i] - '0';
            numBegin = true;
        } else if (ip[i] == '.') {
            // ip 单个数值大于255为非法ip值
            if (tmp > 255) {
                throw "ERROR: Int data larger than 255.";
            }
            result = result * 256 + tmp;
            tmp = 0;
            numBegin = false;
            noNum = false;
            count++;
        } else {
            // ip address 有非法字符
            throw "ERROR: Ip address has invalid string.";
        }

        // ip遍历到最后计算结果
        if (i == ipSize - 1) {
            result = result * 256 + tmp;
            count++;
        }
    }

    // 是非法的ip地址
    if(count != 4) {
        throw "ERROR: the count is not equal 4.";
    }
    return result;
}
