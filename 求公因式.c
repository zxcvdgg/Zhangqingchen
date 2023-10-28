#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	scanf("%d %d",&a,&b);
	while(b){
		c=a%b;
		a=b;
		b=c;
	
	}
	printf("%d",a);
}
