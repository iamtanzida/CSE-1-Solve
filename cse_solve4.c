#include<stdio.h>
int main() {
float cm,m,km;
printf("enter the cm value:");
scanf("%f",&cm);
m = cm / 100;
km =m / 1000;
printf("meter: %.2f\n", m);
printf("KM: %.2f\n", km);
return 0;
}
