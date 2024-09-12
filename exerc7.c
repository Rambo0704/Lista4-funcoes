#include <stdio.h>

int verifica(a){
	if(a % 2==0){
	return 1;
	}else {
		return 0;
	}
}

int main(){
	int num;
	printf("Digite um nuemero para saber se e impar ou par:(1-par 0-impar)\n");
	scanf("%d",&num);
	printf("%d\n",verifica(num));
	return 0;
}
