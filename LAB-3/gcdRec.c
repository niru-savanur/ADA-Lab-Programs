#include<stdio.h>
#include <stdlib.h>
gcd(int a, int b){
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    return gcd(b % a, a);
}

void main(){
    int a, b;
    while(1){
        printf("Enter numbers to find their gcd. Enter ^C to quit.\n");
        scanf("%d %d",&a, &b);
        printf("gcd is %d\n",gcd(a, b));
    }
}