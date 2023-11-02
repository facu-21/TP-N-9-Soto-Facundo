#include <stdio.h>

int cmp(int m1[12][12],int m2[12][12]){
	int i,j,c=0;
	for(i=0;i<=11;i++){
		for(j=0;j<=11;j++){
			if(i==j){
				if(m2[i][i]!=m1[i][i]){
					c++;
				}
			}
		}
	}
	return c;
}

int main() {
	int m[12][12]={0},n[12][12]={0},i,j,c=0;
	printf("Ingrese la primera matriz cuadrada de 12x12\n\n");
	for(i=0;i<=11;i++){
		printf("Fila numero %d:\n",i+1);
		for(j=0;j<=11;j++){
			printf("Ingrese elemento para la columna numero %d: ",j+1);
			scanf("%d",&m[i][j]);
		}
		printf("\n");
	}
	printf("\nIngrese la segunda matriz cuadrada de 12x12\n\n");
	for(i=0;i<=11;i++){
		printf("Fila numero %d:\n",i+1);
		for(j=0;j<=11;j++){
			printf("Ingrese elemento para la columna numero %d: ",j+1);
			scanf("%d",&n[i][j]);
		}
		printf("\n");
	}
	c=cmp(m,n);
	if(c!=0){
		printf("\nLas diagonales principales de ambas matrices no son equivalentes\n");
	}
	else{
		printf("\nLas diagonales principales de ambas matrices son equivalentes\n");
	}
	return 0;
}
