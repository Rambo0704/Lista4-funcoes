#include <stdio.h>
#include <math.h>
int absoluto(int a){
	if (a<0){
		return -a;
	}else{
		return +a;
	}
}
int main(){
	
	int val1,val2,val3,val4,val5;
	printf("Digite um numero para saber o valor absoluto:\n");
    scanf("%d",&val1);
    printf("O valor absoluto: %d\n",absoluto(val1));
	printf("Digite um numero para saber o valor absoluto:\n");
    scanf("%d",&val2);
    printf("O valor absoluto: %d\n",absoluto(val2));
	printf("Digite um numero para saber o valor absoluto:\n");
    scanf("%d",&val3);
    printf("O valor absoluto: %d\n",absoluto(val3));
	printf("Digite um numero para saber o valor absoluto:\n");
    scanf("%d",&val4);
    printf("O valor absoluto: %d\b",absoluto(val4));
	printf("Digite um numero para saber o valor absoluto:\n");
    scanf("%d",&val5);
	printf("O valor absoluto: %d\n",absoluto(val5));

	return 0;
}
