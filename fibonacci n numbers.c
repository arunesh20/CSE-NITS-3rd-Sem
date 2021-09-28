#include <stdio.h>

int fib(int x);

int main()
{
    int n;
    printf("Enter which fibonacci term do u want: ");
    scanf("%d",&n);
    
    printf("%d",fib(n));

    return 0;
}

int fib(int x)
{
    if (x==1)
    {
        return 0;
    }
    else if (x==2)
    {
        return 1;
    }
    else
    {
        return fib(x-2) + fib(x-1);
    }
}