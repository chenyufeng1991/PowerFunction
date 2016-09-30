//
//  main.cpp
//  PowerFunction
//
//  Created by chenyufeng on 9/30/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>

using namespace std;

/**
 *  实现power函数
 *
 double power(double x ,int n);
 *
 */

double power1(double x ,int n);
double power2(double x ,int n);

int main(int argc, const char * argv[])
{
    cout << power1(2.0, -2) << endl;
    cout << power2(2.0, -3) << endl;

    return 0;
}

// 最简单的方式，复杂度为n
double power1(double x ,int n)
{
    double result = 1.0;
    int absN = abs(n);
    for (int i = 0; i < absN; i++)
    {
        result *= x;
    }

    return n >= 0 ? result : 1/result;
}

// 递归实现
double power2(double x ,int n)
{
    int times = n / 2;
    int remain = n % 2;

    if (n == 0)
    {
        return 1.0;
    }
    if (n == 1)
    {
        return x;
    }
    if (n == -1)
    {
        return 1 / x;
    }

    if (remain == 0)
    {
        return power2(x, times) * power2(x, times);
    }
    else
    {
        return n > 0 ? power2(x, times) * power2(x, times) * x : power2(x, times) * power2(x, times) * (1 / x);
    }
}
