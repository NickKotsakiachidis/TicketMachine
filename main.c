#include <stdio.h>
#include <stdlib.h>

int main()
{
int euro2,euro1,euro05,euro02,euro01,euro005;
float m,p,x;                          /* m for money you have to pay and x for the number of tickets*/
scanf("%f %f", &x, &p);
m=0.75*x;
p-=m;                               /* p becomes the changes,that machine has to give back*/
euro2=p/2;
if (euro2!=0)
{
  printf("%d", euro2);
p-=euro2*2;
}
euro1=p/1;
if (euro1!=0)
{
  printf("%d", euro1);
p-=euro1*1;
}
euro05=p/0.5;
if (euro05!=0)
{
  printf("%d", euro05);
  p-=euro05*0.5;
}
euro02=p/0.2;
if (euro02!=0)
{
printf("%d", euro02);
p-=euro02*0.2;
}
euro01=p/0.1;
if (euro01!=0)
{
  printf("%d", euro01);
p-=euro01*0.1;
}
euro005=p/0.05;
if (euro005!=0)
{
printf("%d", euro005);
p-=euro005*0.05;
}
}
