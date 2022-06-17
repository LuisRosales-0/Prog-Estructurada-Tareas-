//Las listas vienen con los numero de alumnos que se encuentran registrados en cada grupo
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	system ("color f1");
	int opcion,suma=0,calificacion,promedio=0;
	printf("Hola maestro-maestra,por favor seleccione una opcion del menu\n\n");
	printf("1.-Listas de primer grado\n");
	printf("2.-Listas de segundo grado\n");
	printf("3.-Listas de tercer grado\n");
	printf("4.-Taller de automotriz y diesel\n");
	printf("5.-Taller de computo\n");
	printf("6.-Salon de alumnos irregulares\n");
	printf("Ingrese aqui la opcion: ");
	scanf("%d",&opcion);
	
	switch(opcion){
		case 1:
			printf("\nUsted selecciono primer grado\n");
			for (int i=1;i<29;i++){
				printf("Ingrese las calificaciones(Una a la vez): ");
				scanf("%d",&calificacion);
				suma=suma+calificacion;
				printf("La suma es: %d\n",suma);	
			}
		promedio=suma/28;	
		printf("El promedio del grupo es: %d\n",promedio);
		break;
		
		case 2:
			printf("\nUsted selecciono segundo grado\n");
			for (int i=1;i<26;i++){
				printf("Ingrese las calificaciones(Una a la vez): ");
				scanf("%d",&calificacion);
				suma=suma+calificacion;
				printf("La suma es: %d\n",suma);
			}
		promedio=suma/25;	
		printf("El promedio del grupo es: %d\n",promedio);	
		break;
		
		case 3:
			printf("\nUsted selecciono tercer grado\n");
			for (int i=1;i<31;i++){
				printf("Ingrese las calificaciones(Una a la vez): ");
				scanf("%d",&calificacion);
				suma=suma+calificacion;
				printf("La suma es: %d\n",suma);	
			}
		promedio=suma/30;	
		printf("El promedio del grupo es: %d\n",promedio);
		break;
		
		case 4:
			printf("\nUsted selecciono taller de automotriz y diesel\n");
			for (int i=1;i<13;i++){
				printf("Ingrese las calificaciones(Una a la vez): ");
				scanf("%d",&calificacion);
				suma=suma+calificacion;
				printf("La suma es: %d\n",suma);	
			}
		promedio=suma/12;	
		printf("El promedio del grupo es: %d\n",promedio);
		break;
		
		case 5:
			printf("\nUsted selecciono taller de computo\n");
			for (int i=1;i<10;i++){
				printf("Ingrese las calificaciones(Una a la vez): ");
				scanf("%d",&calificacion);
				suma=suma+calificacion;
				printf("La suma es: %d\n",suma);	
			}
		promedio=suma/9;	
		printf("El promedio del grupo es: %d\n",promedio);
		break;
		
		case 6:
			printf("\nUsted selecciono alumnos irregulares\n");
			for (int i=1;i<15;i++){
				printf("Ingrese las calificaciones(Una a la vez): ");
				scanf("%d",&calificacion);
				suma=suma+calificacion;
				printf("La suma es: %d\n",suma);	
			}
		promedio=suma/14;	
		printf("El promedio del grupo es: %d\n",promedio);
		break;
		default :
			printf("Porfavor seleccione una opcion del menu");
}
printf("\nRegistre los datos necesarios y presione enter para finalzar\n\n0");
getche();
}
