#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int a, b, r,acum, ut=107, mayor=0, cttl, dis,disaux;;
	char placa[10], aux[10];
	float vel, multa, porc,vp;
	 
	printf("\t\t\t***MULTAS DE AUTOS***");
	
	cttl=0; a=0; acum=0; b=0;
	do{
		
		printf("\n\nVelocidad (Km/h): \t\t");
		scanf("%f",&vel);
		
		printf("Distancia de Frenado (m): \t");
		scanf("%d",&dis);
		
		printf("Ingrese la Placa del Auto: \t");
		fflush(stdin);
		gets(placa);
		
		if(dis>30){
			acum=acum+vel;
			a++;
		}
		
		multa=vel*ut;
		if(vel > 100){
			
			printf("\nLa Velocidad Excede los 100 Km/h");
			printf("\nPlaca %s Se Debe Pagar una Multa de: %.2f$\t",placa, multa);
		}else{
			printf("\nVelocidad Normal \nPuede Continuar su Viaje...");
			b++;
		}
	
		if(vel>mayor){
			mayor = vel;
			strcpy(aux,placa);
			disaux=dis;
			
		}	
		cttl++;
			
		
		printf("\n\nHay Otro Auto? S/N: \t");
		r=tolower(getch());
	}while(r=='s');

		porc=(b*100)/cttl;	
		vp=acum/a;
		printf("\nLa Cantidad de Autos en el Registro es: %d", cttl);
		
		printf("\n\nVelocidad Promedio de los Autos con Distancia de Frenado Mayor a 30m es: %.1f",vp);
	
		printf("\nMayor Velocidad Registrada fue: %d de la Placa: %s con Frenado: %d",mayor,aux,disaux);
		
		printf("\nEl Porcentaje de Autos que no Fueron Multados fue: %.1f",porc);
		
	return 0;
}
