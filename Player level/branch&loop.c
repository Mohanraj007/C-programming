#include <stdio.h>

int main(void) {

	int a,aa,aaa,aaaa;
	scanf("%d",&a);
	aa=a*10+a;
	aaa=aa*10+a;
            aaaa=aaa*10+a;
	int res;
	res=a+aa+aaa+aaaa;
	printf("%d",res);
	return 0;
}
