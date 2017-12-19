#include <stdio.h>
#include <string.h>
int main(void)
{
   char str1[20],*ptr;

   int size;




scanf("%s",str1 );

size = strlen(str1);
for(int i=size;i>=0;i--)
{
printf("%c",str1[i]);
}
	return 0;
}
