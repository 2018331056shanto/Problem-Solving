#include<stdio.h>

int main()
{  printf("INTERSECTING LINES OUTPUT\n");
    int i,n,x1,x2,x3,x4,y1,y2,y3,y4,a1,a2,b1,b2,c1,c2,m1,m2,k;

     scanf("%d",&n);

    for(i=0;i<n;i++)
    {

        scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        c1=(x1*y2)-(y1*x2);
        c2=(x3*y4)-(y3*x4);
        a1=(y1-y2);
        a2=(y3-y4);
        b1=(x1-x2);
        b2=(x3-x4);
        m1=-(a1/b1);
        m2=-(a2/b2);
        k = (a1*1.0)/(a2*1.0);

        if(a2*k==a1 && b2*k==a1 && c2*k==c1)
            printf("NONE\n");
        else if(m1==m2)
            printf("LINE\n");
        else
            printf("intersect\n");


    }
    return 0;



}
