#include <stdio.h>
int main(){
	int a;
	printf("Enter a num");
	scanf("%d",&a);
	if (a%5==0 && a%11==0){
		printf("Yes");
	}
	else{
		printf("No");
	}
}
