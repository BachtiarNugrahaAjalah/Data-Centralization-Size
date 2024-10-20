#include <iostream>
#ifndef __MEAN
#define __MEAN
using namespace std;

double long Mean(double long data[], int n)
{
    double long sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += data[i];
    }
    return sum/n;
}
#endif