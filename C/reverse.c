#include<stdio.h>
int main(){
	int n,f,rev=0;
	printf("Enter the number");
	scanf("%d",&n);
	while(n!=0){
		f=n%10;
		rev=rev*10+f;
		n=n/10;
	}
	printf("The reverse is %d\n",rev);
return 0;
}



