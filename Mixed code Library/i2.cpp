#include<stdio.h>
#include<math.h>
#define pi acos(-1)

int main()
{

    double b=pi/3;
    double a;
    double totalA,stR,DR,RR;
    while(~scanf("%lf",&a))
    {
       totalA=a*a;
       stR=totalA*(1-sqrt(3)+b);
       DR=totalA*(2*sqrt(3)-4+b);
       RR=totalA*(4-sqrt(3)-2*b);

       printf("%.3f %.3f %.3f\n",stR,DR,RR);
    }
    return 0;
}