#include<stdio.h>
int main(){
	int num,i,fact=1;
	printf("Enter the number?");
	scanf("%d",&num);
	for(i=num;i>=1;i--){
		fact=fact*i;
	}
	printf("Factorial is %d",fact);
	return 0;
}
/*i>=1 birsina vayena
*/
