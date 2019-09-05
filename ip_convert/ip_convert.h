/**
Author: xionghailong
Date: 2019-09-06
Description: 将IPV4地址转换为32位整数
**/

#ifndef IP_CONVERT_H
#define IP_CONVERT_H

/**
Functiddon: ipConvert
* @brief convert IPV4 to unsigned int
* @param ip IPV4 adress
* @return 将ip地址转成整形数据，int可能出现越界，使用unsigned int.
*         正常返回值一定是大于1，返回-1标识有异常，并打印异常提示信息.
**/

unsigned int ipConvert(string ip);

#endif
