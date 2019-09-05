/**
Author: xionghailong
Date: 2019-09-06
Description: 对ip_convert函数进行单元测试
g++ version: g++ (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0
编译命令：g++ ip_convert.cc ip_convert_test.cc -o ip_convert
**/

#include <string>
#include <iostream>
#include "ip_convert.h"

using namespace std;

void testValidIp()
{
    cout << "=========test valid ip ========" << endl;
    unsigned int result = 0;
    string testIp = "0.0.0.0";
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
}

void testSpase()
{
    cout << "=========test spase ip ========" << endl;
    unsigned int result = 0;
    string testIp = "   192. 168 .0.1";
    cout<< "Test: spase valid ip " << testIp << endl;
    try {
        result = ipConvert(testIp);
        cout << "The result is " << result << "\n" << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    testIp = "192.16 8.1.1";
    cout<< "Test: spase invalid ip " << testIp << endl;
    try {
        result = ipConvert(testIp);
        cout << "The result is " << result << "\n" << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }
}

void testUnexpectChar()
{
    cout << "=========test unexcept char ip ========" << endl;
    unsigned int result = 0;
    string testIp = "1bb.44.1.5";
    cout<< "Test: unexcept char ip " << testIp << endl;
    try {
        result = ipConvert(testIp);
        cout << "The result is " << result << "\n" << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    testIp = "192.168 .1.-1";
    cout<< "Test: unexcept char ip " << testIp << endl;
    try {
        result = ipConvert(testIp);
        cout << "The result is " << result << "\n" << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }
}


void testBiggerInteger()
{
    cout << "=========test bigger integer ========" << endl;
    unsigned int result = 0;
    string testIp = "25.980.14.1";
    cout<< "Test: bigger integer ip " << testIp << endl;
    try {
        result = ipConvert(testIp);
        cout << "The result is " << result << "\n" << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    testIp = "256.98.14.1";
    cout<< "Test: bigger integer ip " << testIp << endl;
    try {
        result = ipConvert(testIp);
        cout << "The result is " << result << "\n" << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }
}

void testCount()
{
    cout << "=========test count ========" << endl;
    unsigned int result = 0;
    string testIp = "125.80.14";
    cout<< "Test: count invild ip " << testIp << endl;
    try {
        result = ipConvert(testIp);
        cout << "The result is " << result << "\n" << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    testIp = "251.98.14.1.3";
    cout<< "Test: count invild ip " << testIp << endl;
    try {
        result = ipConvert(testIp);
        cout << "The result is " << result << "\n" << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }
}

int main()
{
    // test vaild ip
    testValidIp();

    // test spase ip
    testSpase();

    // test unexcept char ip
    testUnexpectChar();

    // test int data is larger than 255
    testBiggerInteger();

    // test count is not equal 4
    testCount();

    return 0;
}
