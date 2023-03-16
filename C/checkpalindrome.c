/* 
Plalindrome number is a number which is equal to its reverse. 
*/

#include<stdio.h>
int main(){
	int n,f,rev=0,temp;
	printf("Enter the number: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		f=n%10;
		rev=rev*10+f;
		n=n/10;
		}
	printf(temp==rev?"Palindrome number":"Not a palindrome number");
return 0;
}

