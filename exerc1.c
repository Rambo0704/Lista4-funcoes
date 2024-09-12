#include <stdio.h>

int main(){
	int num1,num2;
	printf("Digite um numero:\n");
	scanf("%d",&num1);
	printf("Digite outro numero:\n");
	scanf("%d",&num2);
	
	if(num1>num2){
		printf("%d",num2);
	}else if(num2>num1){
		printf("%d",num1);
	}else {
		printf("OS NUMEROS SAO IGUAIS");
	}
	return 0;
}
