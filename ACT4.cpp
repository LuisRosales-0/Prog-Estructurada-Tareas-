#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	system("color f1");
	int numero,tabla,multiplicacion,i;
	i=1;
	printf("Ingrese el digito de la tabla que quiere saber: ");
	scanf("%d",&numero);
	if(numero<11){
		printf("Te encuentras en un nivel principiante,tu tabla es: \n\n");
		do{
			tabla=1*i;
			multiplicacion=numero*tabla;
			printf("\nSi tienes %d personas y cada una tiene %d manzanas \n",numero,tabla);
			printf("¿Cuantas manzanas tendras en total?\n");
			system("pause");
			printf("%d x %d = %d \n",numero,tabla,multiplicacion);
			printf("Tienes %d manzanas en total\n",multiplicacion);
			system("pause");
			i++;
		}
		while(i<=10);
		getche();
	}
	else{
		if(numero<26){
		printf("Te encuentras en un nivel basico,tu tabla es: \n\n");
		do{
			tabla=1*i;
			multiplicacion=numero*tabla;
			printf("\nSi tienes %d salones y cada una tiene %d alumnos \n",tabla,numero);
			printf("¿Cuantas alumnos tendras en total?\n");
			system("pause");
			printf("%d x %d = %d \n",numero,tabla,multiplicacion);
			printf("Tienes %d alumnos en total\n",multiplicacion);
			system("pause");
			i++;
		}
		while(i<=10);
		getche();
	}
		else{
			if(numero<51){
		printf("Te encuentras en un nivel avanzado,tu tabla es: \n\n");
		do{
			tabla=1*i;
			multiplicacion=numero*tabla;
			printf("\nSi tienes %d empresas y cada una tiene %d trabajadores \n",tabla,numero);
			printf("¿Cuantos trabajadores tendras en total?\n");
			system("pause");
			printf("%d x %d = %d \n",numero,tabla,multiplicacion);
			printf("Tienes %d trabajadores en total\n",multiplicacion);
			system("pause");
			i++;
		}
		while(i<=10);
		getche();
	}
		else{
			if(numero<101){
		printf("Te encuentras en un nivel experto,tu tabla es: \n\n");
		do{
			tabla=1*i;
			multiplicacion=numero*tabla;
			printf("\nSi tienes %d municipios y cada uno tiene %d casas \n",tabla,numero);
			printf("¿Cuantas casas tendras en total?\n");
			system("pause");
			printf("%d x %d = %d \n",numero,tabla,multiplicacion);
			printf("Tienes %d casas en total\n",multiplicacion);
			system("pause");
			i++;
		}
		while(i<=10);
		getche();
	}
		if(numero<111){
		printf("Este es un nivel bonus,pues es imposible llegar aqui: \n\n");
		do{
			tabla=1*i;
			multiplicacion=numero*tabla;
			printf("\nSi tienes %d generales y cada uno tiene %d soldados \n",tabla,numero);
			printf("¿Cuantas soldados tendras en total?\n");
			system("pause");
			printf("%d x %d = %d \n",numero,tabla,multiplicacion);
			printf("Tienes %d soldados en total\n",multiplicacion);
			system("pause");
			i++;
		}
		while(i<=10);
		getche();
	}
		else{
			printf("No existe persona capas de aprenderse dicha tabla,porfavor intente de nuevo\n");
			system ("pause");
		}
		}
		}
	}
	getche();
}
