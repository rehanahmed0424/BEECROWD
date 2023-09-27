#include<stdio.h>

int main()
{
    int a,b,c,high,mid,low;
    scanf("%d %d %d", &a,&b,&c);

    if(a<=b && a<=c)
    {
        low = a;

        if(b<=c)
        {
            mid = b;
            high = c;
        }
        else
        {
            mid = c;
            high = b;
        }
    }
    else if(b<=a && b<=c)
    {
        low = b;

        if(a<=c)
        {
            mid = a;
            high = c;

        }
        else
        {
            mid = c;
            high = a;
        }
    }
    else
    {
        low = c;
        if(a<=b)
        {
            mid = a;
            high = b;
        }
        else
        {
            mid = b;
            high = a;
        }
    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", low,mid,high,high,mid,low);


    return 0;
}
