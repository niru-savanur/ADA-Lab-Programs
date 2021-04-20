#include <stdio.h>
gcd(int a, int b)
{
    if(a==0 || b==0)
        return 0;
    int m = (a-b > 0)? b : a;
    int i;
    for(i = m; i>=0; i--){
        if(a%i==0 && b%i==0)
            return i;
    }
}

void main()
{
    int a, b;
    while (1)
    {
        printf("Enter numbers to find their gcd. Enter ^C to quit.\n");
        scanf("%d %d", &a, &b);
        printf("gcd is %d\n", gcd(a, b));
    }
}