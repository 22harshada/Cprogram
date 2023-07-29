#include<stdio.h>
#include<limits.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int max = INT_MIN, smax = INT_MIN, tmax = INT_MIN;

    if (a > max) 
    {
        tmax = smax;
        smax = max;
        max = a;
    }
    else if (a > smax)
     {
        tmax = smax;
        smax = a;
    }
    else if (a > tmax)
     {
        tmax = a;
    }

    if (b > max) 
    {
        tmax = smax;
        smax = max;
        max = b;
    }
    else if (b > smax)
     {
        tmax = smax;
        smax = b;
    }
    else if (b > tmax)
     {
        tmax = b;
    }

    if (c > max) 
    {
        tmax = smax;
        smax = max;
        max = c;
    }
    else if (c > smax)
     {
        tmax = smax;
        smax = c;
    }
    else if (c > tmax) 
    {
        tmax = c;
    }

    if (d > max) 
    {
        tmax = smax;
        smax = max;
        max = d;
    }
    else if (d > smax) 
    {
        tmax = smax;
        smax = d;
    }
    else if (d > tmax) 
    {
        tmax = d;
    }

    printf("The Third Max Among the 4 Numbers is: %d\n", tmax);
    return 0;
}

