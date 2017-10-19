#include <stdio.h>
#include <stdlib.h>

int main()
{
int x,euro2,euro1,euro05,euro02,euro01,euro005;
float m,p,c;
scanf("%d", x);
m=0,75*x;
scanf("%f", p);
c=p-m;
printf("%d \n", c);

euro2=c/2;
printf("%d", euro2);
c=c-euro2*2;

euro1=c/1;
printf("%d", euro1);
c=c-euro1*1;

euro05=c/0.5;
printf("%d", euro05);
c=c-euro05*0.5;

euro02=c/0.2;
printf("%d", euro02);
c=c-euro02*0.2;

euro01=c/0.1;
printf("%d", euro01);
c=c-euro01*0.1;

euro005=c/0.05;
printf("%d", euro005);
c=c-euro005*0.05;

}
