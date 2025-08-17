#include<stdio.h>
int main() {
double radius, diameter, circumference, area;
const double PI = 3.141592653589793;
printf("radius:");
scanf("%lf",& radius);
diameter = 2 * radius;
circumference = 2 * PI * radius;
area = PI * radius * radius;
printf("the diameter : %.6lf\n",diameter );
printf("the circumference : %.6lf\n",circumference);
printf("the area : %.6lf\n",area);
return 0;
}
