#include<stdio.h>
#include<math.h>
int decimal(int n);
int main()
{

    unsigned long long int n,d;
    scanf("%d",&n);
    d=decimal(n);
    printf("%llu\n",d);
    return 0;

}
 int decimal(int s)
{

    int base=1;
    unsigned long long int dc_val=0;
    int la_val;


    while(s)
    {
      la_val=s%10;
      s=s/10;
      dc_val+=la_val*base;
      base=base*2;

    }
    return dc_val;
}

