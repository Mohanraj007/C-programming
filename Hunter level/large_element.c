#include <stdio.h>

int main(void) {
int a[10],b[10],s1,s2,i,j;
scanf("%d",&s1);
for(i=0;i<s1;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&s2);
for(i=0;i<s2;i++)
{
scanf("%d",&b[i]);
}
j=0;
for(i=s1;i<s1+s2-1;i++)
{

a[i]=b[j];
j++;
}
for(i=0;i<s1+s2-1;i++)
printf("%d",a[i]);
}
