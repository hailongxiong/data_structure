/**
Author: xionghailong
Date: 2019-09-06
Description: 将IPV4地址转换为32位整数
**/

#ifndef IP_CONVERT_H
#define IP_CONVERT_H

#include <string>

using namespace std;

/**
Functiddon: ipConvert
* @brief convert IPV4 to unsigned int
* @param ip IPV4 adress
* @return 将ip地址转成整形数据，返回值使用unsigned int.
* @throw  ip有异常时，抛出异常并打印异常提示信息.
**/

unsigned int ipConvert(string ip);

#endif
