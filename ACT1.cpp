#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	system("color f1");
	int dia,diasincompletos,camionetas,faltantes;
		printf("\n Hola encargado,porfavor presione el dia en que se encuentra,del 1 al 7: ",dia);
		scanf("%d",&dia);
			switch(dia){
			case 1 :
				printf("Lunes,usted debe llenar los camiones con comida que no expire \n");
				printf("\n Seleccione la camioneta para saber el peso que deben llevar: ");
	            scanf("%d",&camionetas);
	            switch(camionetas){
	            	case 1 :
	            		printf("La camioneta 1 debe llevar 1 tonelada");
	            		break;
	            	case 2 :
	            		printf("La camioneta 2 debe llevar media tonelada");
	            		break;
	            	case 3 :
	            		printf("El carro acompañante debe llevar almenos 3 personas");
	            		break;
	            	default :
	            		printf("Revise bien el numero de la camioneta");
	            		break;
	            		
				}
				break;
			case 2 :
				printf("Martes,debe hacer los pedidos a los restaurantes\n");
				break;
			case 3 :
				printf("Miercoles,ir con su ayudante a entregar los pedidos grandes");
				break;
			case 4 :
				printf("Jueves,entregar los pedidos a HEB");
				printf("\n Recuerde que este dia es solo para HEB,si tiene mas trabajo marque 1-3 para ver las opciones: ");
				scanf("%d",&faltantes);
				switch(faltantes){
					case 1 :
						printf("Dejar al ayudante para realizar esos pedidos");
						break;
					case 2 :
							printf("Quedarse horas extra");
							break;
					case 3 :
					        printf("Ingrese el dia 7 al abrir el programa y siga indicaciones");
					     	break;
				    case 4 :
				    	    printf("No existen mas opciones");
				    	    break;
				}
				break;
			case 5 :
				printf("Viernes,entregar los pedidos finales");
				break;
			case 6 :
				printf("Sabado,completar los pedidos del viernes");
				printf("\n Recuerde que su salida es al medio dia");
				break;
			case 7 :
				printf("Domingo,usted no viene pero escriba el dia que le falto un pedido: ");
				scanf("%d",&diasincompletos);
				switch(diasincompletos){
					case 1 :
						printf("Los lunes no entrega,revise el dia");
						break;
					case 2 :
						printf("Martes,entregara esos pedidos el dia jueves");
						break;
					case 3 :
						printf("Miercoles,entregara esos pedidos el dia viernes");
						break;
					case 4 :
						printf("Jueves,entregara esos pedidos el dia sabado");
						break;
					case 5 :
						printf("Viernes,los pedidos los entregara el sabado,aunque sea hora extra");
						break;
					case 6 :
						printf("Sabado,ese mismo dia debe completarlos aunque sea hora extra");
						break;
					case 7 :
						printf("Domingo,usted no realiza pedidos ese dia");
						break;
					default :
						printf("Tecle bien el dia");
					    break;	
				}
				break;
			default :
				printf("Tecle un dia de la semana real");
				break;
					}		
		getche();
		
	}
