#include <stdio.h>

int main() {
    int a,b,z;
    printf(" enter first number :\n ");
    scanf("%d",& a);
    printf(" enter second number :\n");
    scanf("%d",& b);
    z=a;
    a=b;
    b=z;
    printf("After swping :\n ");
    printf("first number :%d\n",a);
    printf(" second number :%d\n",b);


    return 0;
}
