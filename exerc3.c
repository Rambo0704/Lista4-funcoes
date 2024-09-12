#include <stdio.h>
#include <math.h>

int potencia(int base,int expo){
	return pow(base,expo);
}

int main(){
	
	int base,expoente;
	printf("Digite a base e o expoente (nessa ordem):\n");
	scanf("%d %d",&base,&expoente);
	printf("%d elevado a %d = %d",base,expoente,potencia(base,expoente));
	return 0;
}
