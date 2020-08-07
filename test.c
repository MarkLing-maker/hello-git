/*
    二分法求2的平方根精确值
*/
#include <stdio.h>

#define  EP 0.0000000001

double func()
{
    double low = 1.4;
    double high = 1.5;
    double mid = (low +high)/2;

    while (high - low > EP)
    {
        if (mid * mid > 2)
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
        mid = (high + low)/2;
        
        
    }
    return mid;
 
}

int main()
{
    printf("%f",func());

}
