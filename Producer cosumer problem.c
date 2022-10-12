#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
int n,in=0,out=0,v[10]={0},s,w=1,i;
int main()
{
printf("\n producer &consumer process");
printf("\n enter size of the buffer:");
scanf("%d",&n);
while(w)
{
printf("\n\n the chocies are\n\t1.producer\n\t2.consumer\n\t3.exit");
printf("\n enter your choice:");
scanf("%d",&s);
switch(s)
{
case 1:
if((v[in]==0))

{
printf("\n producer value:");
scanf("%d",&v[in]);
printf("\n buffer contains:\t");
for(i=0;i<n;i++)
{

printf("%d\t",v[i]);

}
in=(in+1)%n;
}
else
{
printf("\n the buffer is full");
}
break;
case 2:
if(v[out]==0)
{
printf("\n the buffer is empty");
}
else
{
printf("\n consumer value:%d",v[out]);
v[out]=0;
printf("\n buffer contains:\t");
for(i=0;i<n;i++)
{
printf("%d\t",v[i]);
}
out=(out+1)%n;
}
break;
case 3:
w=0;
break;
default:


printf("wrong choice\n");

break;
}
}
}
