#include <stdio.h>

float nota(float a ,float b,float c,char media){
	if(media == 'A'){
		return (a+b+c)/3;
	}else if(media=='P'){
		return (a*5+b*3+c*2)/5+3+2;
	}else if (media=='H'){
		return 3 / (1 / a) + (1 / b) + (1 / c);
	}
}

int main(){
	float n1,n2,n3,resultado;
	char media;
	printf("Digite a primeira nota:\n");
	scanf("%f",&n1);
	printf("Digite a segunda nota:\n");
	scanf("%f",&n2);
	printf("Digite a terceira nota:\n");
	scanf("%f",&n3);
	printf("Qual a media desejada?(A=Media Aritmetica P=Media Ponderada H=Media Harmonica)\n");
    scanf(" %c",&media);
	printf("Media = %f",nota(n1,n2,n3,media));
	
	return 0;
}
