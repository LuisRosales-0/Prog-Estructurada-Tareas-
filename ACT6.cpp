#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main(){
	system ("color f1");
	int A[4][4],B[4][4],C[4][4],x,y;
	int sel,materia,mult,mulop;
	
	printf("Bienvenido,porfavir seleccione una opcion de nuestro menu");
	printf("\n\n1.- Alumno\n2.- Maestro\n");
	scanf("%d", &sel);
	if(sel == 1){
		printf("Porfavor ingresa tu clave de alumno: ");
		scanf("%d");
		printf("Hola alumno \1,porfavor selecciona la opcion que quieras realizar\n");
		printf("\n\nApoyo para la siguientes materias:\n1.-Algebra\n");
		scanf("%d", &materia);
		if (materia = 1){
			printf("\nSelecciono ''Algebra'',porfavor escoja una categoria: ");
			printf("\n\n1.-Multiplicacion de matrices\n");
			scanf("%d", &mult);
			system("cls");
			
			if(mult = 1){
				printf("Multiplicacion de matrices.\n\nSeleccione el tipo de multiplicacion que vaya a realizar");
				printf("\n1.- 2x2\n2.- 3x3\n3.- 1x2\n4.- 1x3\n5.- 2x1\n6.- 3x1\n7.- 3x2\n8.- 2x3	");
				scanf("%d", &mulop);
				system("cls");
				switch(mulop){
					case 1:
						printf("Ingrese su matriz [2x2]");
						for(x=1;x<=2;x++)
							for(y=1;y<=2;y++)
							{
								printf("\n Introduzca el valor de [%d][%d] : ",x,y);
								scanf("%d",&A[x][y]);
								
							}
							
							
							printf("Ingrese su matriz [2x2]");
						for(x=1;x<=2;x++)
							for(y=1;y<=2;y++)
							{
								printf("\n Introduzca el valor de [%d][%d] : ",x,y);
								scanf("%d",&B[x][y]);
							}
						for(x=1;x<=2;x++)
							for(y=1;y<=2;y++)
							C[x][y] = (A[x][1]*B[1][y])+(A[x][2]*B[2][y])+A[x][3]*B[3][y];
						for(x=1;x<=2;x++)
						{
							for(y=1;y<=2;y++)
							printf("%d",&C[x][y]);
							printf("\n");
						}
						system ("pause");
						break;
					case 2:
						printf("Ingrese su matriz [3x3]");
						for(x=1;x<=3;x++)
							for(y=1;y<=3;y++)
							{
								printf("\n Introduzca el valor de [%d][%d] : ",x,y);
								scanf("%d",&A[x][y]);
								
							}
							
							
							printf("Ingrese su matriz [3x3]");
						for(x=1;x<=3;x++)
							for(y=1;y<=3;y++)
							{
								printf("\n Introduzca el valor de [%d][%d] : ",x,y);
								scanf("%d",&B[x][y]);
							}
						for(x=1;x<=3;x++)
							for(y=1;y<=3;y++)
							C[x][y] = (A[x][1]*B[1][y])+(A[x][2]*B[2][y])+A[x][3]*B[3][y];
						for(x=1;x<=3;x++)
						{
							for(y=1;y<=3;y++)
							printf("%d",&C[x][y]);
							printf("\n");
						}
						system ("pause");
						break;
						
					case 3:
						printf("Ingrese su matriz [1x2]");
						for(x=1;x<=1;x++)
							for(y=1;y<=2;y++)
							{
								printf("\n Introduzca el valor de [%d][%d] : ",x,y);
								scanf("%d",&A[x][y]);
								
							}
							
							
							printf("Ingrese su matriz [1x2]");
						for(x=1;x<=1;x++)
							for(y=1;y<=2;y++)
							{
								printf("\n Introduzca el valor de [%d][%d] : ",x,y);
								scanf("%d",&B[x][y]);
							}
						for(x=1;x<=1;x++)
							for(y=1;y<=2;y++)
							C[x][y] = (A[x][1]*B[1][y])+(A[x][2]*B[2][y])+A[x][3]*B[3][y];
						for(x=1;x<=1;x++)
						{
							for(y=1;y<=2;y++)
							printf("%d",&C[x][y]);
							printf("\n");
						}
						system ("pause");
						break;
					case 4:
						printf("Ingrese su matriz [1x3]");
						for(x=1;x<=1;x++)
							for(y=1;y<=3;y++)
							{
								printf("\n Introduzca el valor de [%d][%d] : ",x,y);
								scanf("%d",&A[x][y]);
								
							}
							
							
							printf("Ingrese su matriz [1x3]");
						for(x=1;x<=1;x++)
							for(y=1;y<=3;y++)
							{
								printf("\n Introduzca el valor de [%d][%d] : ",x,y);
								scanf("%d",&B[x][y]);
							}
						for(x=1;x<=1;x++)
							for(y=1;y<=3;y++)
							C[x][y] = (A[x][1]*B[1][y])+(A[x][2]*B[2][y])+A[x][3]*B[3][y];
						for(x=1;x<=1;x++)
						{
							for(y=1;y<=3;y++)
							printf("%d",&C[x][y]);
							printf("\n");
						}
						system ("pause");
						break;
					case 5:
						printf("Ingrese su matriz [2x1]");
						for(x=1;x<=2;x++)
							for(y=1;y<=1;y++)
							{
								printf("\n Introduzca el valor de [%d][%d] : ",x,y);
								scanf("%d",&A[x][y]);
								
							}
							
							
							printf("Ingrese su matriz [2x1]");
						for(x=1;x<=2;x++)
							for(y=1;y<=1;y++)
							{
								printf("\n Introduzca el valor de [%d][%d] : ",x,y);
								scanf("%d",&B[x][y]);
							}
						for(x=1;x<=2;x++)
							for(y=1;y<=1;y++)
							C[x][y] = (A[x][1]*B[1][y])+(A[x][2]*B[2][y])+A[x][3]*B[3][y];
						for(x=1;x<=2;x++)
						{
							for(y=1;y<=1;y++)
							printf("%d",&C[x][y]);
							printf("\n");
						}
						system ("pause");
						break;
					case 6:
						printf("Ingrese su matriz [3x1]");
						for(x=1;x<=3;x++)
							for(y=1;y<=1;y++)
							{
								printf("\n Introduzca el valor de [%d][%d] : ",x,y);
								scanf("%d",&A[x][y]);
								
							}
							
							
							printf("Ingrese su matriz [3x1]");
						for(x=1;x<=3;x++)
							for(y=1;y<=1;y++)
							{
								printf("\n Introduzca el valor de [%d][%d] : ",x,y);
								scanf("%d",&B[x][y]);
							}
						for(x=1;x<=3;x++)
							for(y=1;y<=1;y++)
							C[x][y] = (A[x][1]*B[1][y])+(A[x][2]*B[2][y])+A[x][3]*B[3][y];
						for(x=1;x<=3;x++)
						{
							for(y=1;y<=1;y++)
							printf("%d",&C[x][y]);
							printf("\n");
						}
						system ("pause");
						break;
					case 7:
						printf("Ingrese su matriz [3x2]");
						for(x=1;x<=3;x++)
							for(y=1;y<=2;y++)
							{
								printf("\n Introduzca el valor de [%d][%d] : ",x,y);
								scanf("%d",&A[x][y]);
								
							}
							
							
							printf("Ingrese su matriz [2x2]");
						for(x=1;x<=3;x++)
							for(y=1;y<=2;y++)
							{
								printf("\n Introduzca el valor de [%d][%d] : ",x,y);
								scanf("%d",&B[x][y]);
							}
						for(x=1;x<=3;x++)
							for(y=1;y<=2;y++)
							C[x][y] = (A[x][1]*B[1][y])+(A[x][2]*B[2][y])+A[x][3]*B[3][y];
						for(x=1;x<=3;x++)
						{
							for(y=1;y<=2;y++)
							printf("%d",&C[x][y]);
							printf("\n");
						}
						system ("pause");
					case 8:
							printf("Ingrese su matriz [2x3]");
						for(x=1;x<=2;x++)
							for(y=1;y<=3;y++)
							{
								printf("\n Introduzca el valor de [%d][%d] : ",x,y);
								scanf("%d",&A[x][y]);
								
							}
							
							
							printf("Ingrese su matriz [2x3]");
						for(x=1;x<=2;x++)
							for(y=1;y<=3;y++)
							{
								printf("\n Introduzca el valor de [%d][%d] : ",x,y);
								scanf("%d",&B[x][y]);
							}
						for(x=1;x<=2;x++)
							for(y=1;y<=2;y++)
							C[x][y] = (A[x][1]*B[1][y])+(A[x][2]*B[2][y])+A[x][3]*B[3][y];
						for(x=1;x<=2;x++)
						{
							for(y=1;y<=3;y++)
							printf("%d",&C[x][y]);
							printf("\n");
						}
						system ("pause");	
						break;
						}
}

}

						}else {
	printf("Porfavor ingrese su clave de docente: ");
		scanf("%d");
	printf("Hola maestro,usted no tiene ningun pendiente \1\n\n");
				}
}



