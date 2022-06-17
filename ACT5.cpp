#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(){
	system("color f1");
	int e,i,p,g,tot,seleccion,selgastos,selempleados,dinero,acc,report,deuda;
	int dias[5] ;
	int empleados[6] ;
	int semana[4] ;
	
	printf("Hola usuario,ingrese su nombre: \n");
	scanf("%c");
	printf("Ahora ingrese el numero de seguirdad:\n");
	scanf("%c");
	
	getche();
	
	printf("\n\nHola gerente,desea ver las estadisticas de la semana?");
	printf("\nPresione cualquier tecla si asi lo desea\n");
	system ("pause");
	printf("Escoja una seccion del menu para llevar a cabo las estadisticas");
	printf("\n1.- Entradas\n2.- Ventas snack\n3.- Gastos\n4.-Empleados\n5.- Pago a los nuevos equipos ");
	scanf("%d", &seleccion); 
	switch(seleccion){
		case 1:
			for(i = 0; i < 5;i++){
				printf("Ingrese la cantidad de entradas vendidas el dia %d:  ",i+1);
				scanf("%d",&dias[i]);
				tot += dias[i];
				printf("\n");
			}
			printf("El total de entradas es: %d", tot - 1);
			dinero = (tot - 1)* 20;
			printf("\nEl dinero recaudado es: %d\n\n", dinero);
			printf("Anote este resultado antes de cerrarlo");
			return 0;
		case 2:
			for(i = 0; i < 5;i++){
				printf("Ingrese la cantidad de ventas del snack el dia %d:  ",i+1);
				scanf("%d",&dias[i]);
				tot += dias[i];
				printf("\n");
			}
			printf("El total de ventas es: %d", tot - 1);
			printf("Anote este resultado antes de cerrarlo\n");
			system ("pause");
			return 0;
		case 3:
			printf("Seleccione una de las siguientes opciones\n");
			printf("\n1.- Atracciones\n2.- Gastos snack\n3.- Gastos baño\n ");
			scanf("%d", &selgastos);
			switch(selgastos){
				case 1:
					for(i = 0; i < 5;i++){
				printf("Ingrese el dinero perdido el dia %d:  ",i+1);
				scanf("%d",&dias[i]);
				tot += dias[i];
				printf("\n");
			}
			printf("El total de dinero gastado fue: %d", tot - 1);
			printf("Anote este resultado antes de cerrarlo");
			system ("pause");
			return 0;
				case 2:
					for(i = 0; i < 5;i++){
				printf("Ingrese el dinero gastado el dia %d:  ",i+1);
				scanf("%d",&dias[i]);
				tot += dias[i];
				printf("\n");
			}
			printf("El total de dinero gastado fue: %d", tot - 1);
			printf("Anote este resultado antes de cerrarlo");
			return 0;
				case 3:
					for(i = 0; i < 5;i++){
				printf("Ingrese la cantidad de entradas vendidas el dia %d:  ",i+1);
				scanf("%d",&dias[i]);
				tot += dias[i];
				printf("\n");
			}
			printf("El total de dinero gastado fue: %d", tot - 1);
			printf("Anote este resultado antes de cerrarlo");
			return 0;
			}
		case 4:
			printf("Seleccione una de las siguientes opciones\n");
			printf("\n1.- Empleados accidentados\n2.- Paga a empleados\n3.- Reporte de empleados\n ");
			scanf("%d", &selempleados);
			switch(selempleados){
				case 1:
					printf("Ingrese la clave del empleado accidentado");
					scanf("%d", &acc);
					printf("\nMarque al departamento de emergencias y de la clave del empleado\n");
					printf("Proceda a llenar el reporte:\n");
					return 0;
				case 2:
					printf("El dia 6 es para horas extras\n");
					for(i = 0; i < 6;i++){
				printf("Ingrese las horas trabajadas de los empleados en total por dia %d:  ",i+1);
				scanf("%d",&empleados[i]);
				tot += empleados[i];
				printf("\n");
			}
			printf("El total de horas trabajadas fueron: %d", tot - 1);
			dinero = (tot - 1)* 27;
			printf("\nEl dinero recaudado es: %d\n\n", dinero);
			printf("Anote este resultado antes de cerrarlo");
			return 0;
				case 3:
					printf("No hubo ningun reporte esta semana");
					return 0;
				
				
		
			}
		case 5:
		for(i = 0; i < 4;i++){
				printf("Pagos a los nuevos equipos\n");
				printf("Ingrese la cantidad pagada por semana %d:  ",i+1);
				scanf("%d",&semana[i]);
				tot += semana[i];
				printf("\n");
			}
			printf("El total de dinero pagado es: %d", tot - 1);
			deuda = tot - 3600;
			printf("\nUsted sigue debiendo: %d", deuda);
			printf("\nAnote este resultado antes de cerrarlo");
			system ("pause");
			return 0;	
	}
	
	
	
	
	
printf("\nGracias por usar nuestro sistema");
printf("\nCualquier duda o problema marque al 08100010101");
system ("pause");	
}
