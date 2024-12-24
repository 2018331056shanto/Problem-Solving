#include<stdio.h>
int main()
{

    float x1,x2,x3,x4,y1,y2,y3,y4,a1,a2,b1,b2,c1,c2,x,y;
    while(~scanf("%f%f%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4))
    {

    if((x1==x2)&&(y1==y2))
    {
    a1=y1-y3;
    a2=y3-y4;
    b1=x1-x3;
    b2=x3-x4;
    c1=((x4*y1)-(y3*x4)-(y4*x1)+(y4*x3));
    c2=((x1*y3)-(x1*y4)-(y1*x3)+(y1*x4));
    x=((c1*b2)-(b1*c2))/((b1*a2)-(a1*b2));
    y=((c1*a2)-(a1*c2))/((b1*a2)-(a1*b2));
    printf("%.5f %.5f\n",x*(-1),y*(-1));
    }
     if((x2==x3)&&(y2==y3))
    {
        a1=y1-y2    ;
    a2=y2-y4;
    b1=x1-x2;
    b2=x2-x4;
    c1=((x4*y1)-(y2*x4)-(y4*x1)+(y4*x2));
    c2=((x1*y2)-(x1*y4)-(y1*x2)+(y1*x4));
    x=((c1*b2)-(b1*c2))/((b1*a2)-(a1*b2));
    y=((c1*a2)-(a1*c2))/((b1*a2)-(a1*b2));
    printf("%.5f %.5f\n",x*(-1),y*(-1));
    }
    if((x3==x4)&&(y3==y4))
    {
        a1=y1-y2    ;
    a2=y2-y4;
    b1=x1-x2;
    b2=x2-x4;
    c1=((x4*y1)-(y2*x4)-(y4*x1)+(y4*x2));
    c2=((x1*y2)-(x1*y4)-(y1*x2)+(y1*x4));
    x=((c1*b2)-(b1*c2))/((b1*a2)-(a1*b2));
    y=((c1*a2)-(a1*c2))/((b1*a2)-(a1*b2));
    printf("%.5f %.5f\n",x*(-1),y*(-1));
    }

    }
    return 0;
}
