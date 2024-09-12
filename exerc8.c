#include <stdio.h>
int verificacao(a){
	if (a>0){
		return 1;
	}else if (a<0){
		return -1;
	}else{
		return 0;
	}
}
int main(){
	
	int num;
	
	printf("Digite um numero inteiro:\n");
	scanf("%d",&num);
	printf("%d",verificacao(num));
	
	return 0;
}
