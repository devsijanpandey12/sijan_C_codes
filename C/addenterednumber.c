/*
WAP to split the number and find the user given number sum;

 */

#include<stdio.h>
int main(){
	int n,f,rev=0,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n!=0){
		f=n%10;
		sum=sum+f;
		n/=10;
	}
	printf("The sum is %d",sum);
return 0;
}
//  COMMENT ADDED
