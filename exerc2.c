#include <stdio.h>
#include <math.h>
float distancia (float a,float b,float c,float d){
	return sqrt(pow(b-a,2)+pow(d-c,2));
}
int main(){
	float x1,x2,y1,y2;
	
	printf("Digite a cordenados do ponto x1:\n");
	scanf("%f",&x1);
	printf("Digite a cordenados do ponto y1:\n");
	scanf("%f",&y1);
	printf("Digite a cordenados do ponto x2:\n");
	scanf("%f",&x2);
    printf("Digite a cordenados do ponto y2:\n");
	scanf("%f",&y2);
	printf("A distancia euclediana: %.2f",distancia(x1,x2,y1,y2));
	return 0;
}
