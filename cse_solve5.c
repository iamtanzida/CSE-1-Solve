#include<stdio.h>
int main(){
int x;
printf("enter the value:");
scanf("%d",&x);
int years= x/365;
int y=x%365;
int months=y/30;
int days=y%30;
printf("%d years\n%d months \n%d days", years , months , days);
return 0;
}
