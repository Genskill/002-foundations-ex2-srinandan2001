#include <stdio.h>
#include <cs50.h>
int main(void)
{
    float a;
    float b;
    float c;
    float k;
    float l;
    float m;
    float n;
    float o;
    a = get_float("side 1 ");
    b = get_float("side 2 ");
    c = get_float("side 3 ");
    if (a>b)
    {
        if (a>c)
        {
            k = a;
            l = b;
            m = c;
        }
        else
        {
            k = c;
            l = a;
            m = b;
        }
    }
    else
    {
        if (b>c)
        {
            k = b;
            l = a;
            m = c;
        }
        else
        {
            k = c;
            l = b;
            m = a;
        }
    }
    n = (l*l) + (m*m);
    o = (k*k);
    if (n==o)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
