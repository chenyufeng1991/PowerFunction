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

int main(int argc, const char * argv[])
{
    cout << power1(2.0, -2) << endl;

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
