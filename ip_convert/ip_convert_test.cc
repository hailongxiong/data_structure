/**
Author: xionghailong
Date: 2019-09-06
Description: 对ip_convert函数进行单元测试
**/

#include <string>
#include <iostream>
#include "ip_convert.h"

using namespace std;

int main()
{
    unsigned int result = 0;
    string testIp = "0.0.0.0";
    // vaild ip
    cout << "=========test valid ip ========" << endl;
    cout << "Test: valid ip: " << testIp << endl;
    try {
        result = ipConvert(testIp);
        cout << "The result is " << result << "\n" << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    testIp = "255.255.255.255";
    cout << "Test: valid ip: " << testIp << endl;
    try {
        result = ipConvert(testIp);
        cout << "The result is " << result << "\n" << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    testIp = "172.168.5.1";
    cout << "Test: valid ip: " << testIp << endl;
    try {
        result = ipConvert(testIp);
        cout << "The result is " << result << "\n" << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    testIp = "0.0.1.1";
    cout << "Test: valid ip: " << testIp << endl;
    try {
        result = ipConvert(testIp);
        cout << "The result is " << result << "\n" << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    // the spase valid ip
    testIp = "   192. 168 .0.1";
    cout << "=========test spase valid ip ========" << endl;
    cout<< "Test: spase valid ip " << testIp << endl;
    try {
        result = ipConvert(testIp);
        cout << "The result is " << result << "\n" << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    // the invalid spase ip
    testIp = "192.16 8.1.1";
    cout << "=========test spase invalid ip ========" << endl;
    cout<< "Test: spase invalid ip " << testIp << endl;
    try {
        result = ipConvert(testIp);
        cout << "The result is " << result << "\n" << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    // the int data is larger than 255
    testIp = "256.168.14.1";
    cout << "=========test int data larger than 255 ip ========" << endl;
    cout<< "Test: int data is larger than 255,the ip " << testIp << endl;
    try {
        result = ipConvert(testIp);
        cout << "The result is " << result << "\n" << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    testIp = "25.980.14.1";
    cout<< "Test: int data is larger than 255 and the ip " << testIp << endl;
    try {
        result = ipConvert(testIp);
        cout << "The result is " << result << "\n" << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    // the count smaller than 4
    testIp = "25.44.1";
    cout << "=========test count smaller than 4 ========" << endl;
    cout<< "Test: the count smaller than 4 and the ip " << testIp << endl;
    try {
        result = ipConvert(testIp);
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    // unexcept char into ip address
    testIp = "1bb.44.1.5";
    cout << "=========test unexcept char into ip ========" << endl;
    cout<< "Test: unexcept char into ip address and the ip " << testIp << endl;
    try {
        result = ipConvert(testIp);
        cout << "The result is " << result << "\n" << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    testIp = "11.44.1.-5";
    cout<< "Test: unexcept char into ip address and the ip " << testIp << endl;
    try {
        result = ipConvert(testIp);
        cout << "The result is " << result << "\n" << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    return 0;
}
