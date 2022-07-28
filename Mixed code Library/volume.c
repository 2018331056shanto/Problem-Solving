#include<stdio.h>
#include<conio.h>
int main()
{
    double d1,d2;
    scanf("%lf%lf",&d1,&d2);
    double r1=d1/2;
    double r2=d2/2;
    double area=3.1416*(r1*r1-r2*r2);
    double volume=area*(r1-r2);
    printf("area = %lf\n",area);
    printf("volume = %lf\n",volume);

}