#include <stdio.h>
#include <math.h>
 char verificacao(int a){
 	
 	if (a<0){
  printf("Valor invalido\n");
	 }
 }
 
 int somadivisores(int a){
 	int soma = 0,i;
 	
 	for (i=1;i<a;i++){
 		if(a % i == 0){
 			soma+=i;
		 }
	 }
 	return soma;
 }
 int main(){

    int num1,num2,num3,num4,num5;

    printf("Digite 5 valores :\n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
     printf("%c\n",verificacao(num1));
    printf("A soma dos divisores = %d\n", somadivisores(num1));
    printf("%c\n",verificacao(num1));
    printf("A soma dos divisores = %d\n", somadivisores(num2));
    printf("%c\n",verificacao(num2));
    printf("A soma dos divisores = %d\n", somadivisores(num3));
    printf("%c\n",verificacao(num3));
    printf("A soma dos divisores = %d\n", somadivisores(num4));
    printf("%c\n",verificacao(num4));
    printf("A soma dos divisores = %d\n", somadivisores(num5));
    printf("%c\n",verificacao(num5));

    return 0;


}
