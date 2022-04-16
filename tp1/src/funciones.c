/*
 * funciones.c
 *
 *  Created on: 15 abr. 2022
 *      Author: Gabriel
 */
#include "funciones.h"

//----------------------------------------------------------------------------------
int menu(){
    int opcion;
    int cant;
        printf(" *** Menu de Opciones *** \n\n");
        printf("1- ingresar kilometos \n");
        printf("2- ingresar precio de vuelos \n");
        printf("3- calcular de costos \n");
        printf("4- informar resultados \n");
        printf("5- carga forzada de datos \n\n");
        printf("6- salir \n");
        fflush(stdin);
        cant =  scanf("%d", &opcion);
        if(cant == 0){
            opcion = 5;
        }
        return opcion;
    }

//1 para ingresar km
   float pedirkm(){
      float km;

       printf("Ingrese los kilometos a viajar \n");
       scanf("%f", &km);
       while(km<1)
       {
           printf("ERROR.. cantidad de kilometros erroneos... ingrese km correctos \n");
           fflush(stdin);
           scanf("%f", &km);
       }
       printf("kilomero vale %f\n\n",km);
       return km;
   }
   //2 aereolineas -----------------------------------------

    /*float aereolineasLatam(){
       float precioLatam;

       printf("ingrese el precio de la aereolinea latam \n");
       fflush(stdin);
       scanf("%f", &precioLatam);
       while(precioLatam<0)
       {
           printf("ERROR.. precio invalido... ingrese un precio correctos \n");
           fflush(stdin);
           scanf("%f", &precioLatam);
       }

       return precioLatam;
    }

    float aereolineasArg(){
       float precioArg;

       printf("ingrese el precio dela aereolinea argentinas \n");
       fflush(stdin);
       scanf("%f", &precioArg);
       while(precioArg<0)
       {
           printf("ERROR.. precio invalido... ingrese un precio correctos \n");
           fflush(stdin);
           scanf("%f", &precioArg);
       }
       return precioArg;
    }*/
   //--------------------------------------------------------------------menu y pedir aerolineas
   int subMenuAereolineas()
   {
	   int opcionAerolineas;

	   system("pause");
	   printf(" *** Sub menu de Opciones *** \n\n");
	   printf("1- ingresar aerolineas latam \n");
	   printf("2- ingresar aereolineas argentinas \n");
	   scanf("%d", &opcionAerolineas);

	   while(opcionAerolineas !=1 && opcionAerolineas!=2 ){
		   fflush(stdin);
		   printf(" *** Sub menu de Opciones *** \n\n");
		   scanf("%d", &opcionAerolineas);
	   }
	   return opcionAerolineas;
   }

   void pedirAerolineas(float*puntprecioLatam, float*precioAerolineas, int opcion)
   {
	   if(opcion == 1){
		   printf("ingrese el precio de la aereolinea latam \n");
		   scanf("%f", puntprecioLatam);
		   	   while(*puntprecioLatam<0)
		          {
		              printf("ERROR.. precio invalido... ingrese un precio correctos \n");
		              fflush(stdin);
		              scanf("%f", puntprecioLatam);
		          }
		   	printf("ingrese el precio de la aereolinea argentina \n");
		    scanf("%f", precioAerolineas);
		       while(*precioAerolineas < 0)
		   		  {
		    	      printf("ERROR.. precio invalido... ingrese un precio correctos \n");
					  fflush(stdin);
				 	  scanf("%f", precioAerolineas);
		   	      }
	   }
	   else
	   {
		   printf("ingrese el precio de la aereolinea argentina \n");
		   scanf("%f", precioAerolineas);
			   while(*precioAerolineas < 0)
				  {
					 printf("ERROR.. precio invalido... ingrese un precio correctos \n");
					 fflush(stdin);
					 scanf("%f", precioAerolineas);
				  }
		   printf("ingrese el precio de la aereolinea latam \n");
		   scanf("%f", puntprecioLatam);
			   while(*puntprecioLatam<0)
				  {
					  printf("ERROR.. precio invalido... ingrese un precio correctos \n");
					  fflush(stdin);
					  scanf("%f", puntprecioLatam);
				  }
	   }
   }
 //---------------------------------------------------------descuentos 10%

   float calculadorDescuento(float precioSindesc)
       {
           float precioDebit;

           precioDebit = precioSindesc -(precioSindesc * 10)/100;
           printf("kilomero vale %f\n\n",precioDebit);

           return precioDebit;
       }
   //--------------------------------------------------------aumento 25%

   float calculadorAumento(float precioSinAum){
	   float precioCredit;

	   precioCredit = precioSinAum + (precioSinAum * 0.25);

	   return precioCredit;
   }
//-------------------------------------------------------------bitcoin
   float calculadorBitcoin(float precioNoBitcoin){
	   float precioConBitcoin;

	   precioConBitcoin = precioNoBitcoin / 4606954.55;

	   return precioConBitcoin;
   }
   //----------------------------------------------------------------precio unitario km
   float calculadorPrecioxKm(float precioBase, float km){
	   float precioxkm;

	   precioxkm = precioBase / km;

	   return precioxkm;
   }
   //--------------------------------------------------------------- diferencia latam - aerolineas
   float diferenciadePrecio(float precioLatam ,float precioAerolineas){
	   float diferenciaDePrecio;

	   diferenciaDePrecio = precioLatam - precioAerolineas;

	   return diferenciaDePrecio;
   }


