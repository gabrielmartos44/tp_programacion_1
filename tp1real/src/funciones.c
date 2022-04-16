/*
 * funciones.c
 *
 *  Created on: 15 abr. 2022
 *      Author: Gabriel
 */
#include "funciones.h"

/**
 * funcion que muestra el menu principal y retorna la opcion que elija
 *
 *
 * @param kilometros
 * @param precioAerolineas
 * @param precioLatam
 * @return
 */
int menu(float kilometros,float precioAerolineas,float precioLatam){
    int opcion;

        printf(" *** Menu de Opciones *** \n\n");

        printf("1- ingresar kilometos km=%.2f \n",kilometros);
        printf("2- ingresar precio de vuelos (Aerolíneas=%.2f, Latam=%.2f)\n",precioAerolineas,precioLatam);
        printf("3- calcular de costos \n");
        printf("4- informar resultados \n");
        printf("5- carga forzada de datos \n\n");
        printf("6- salir \n");
        fflush(stdin);
        scanf("%d", &opcion);

        return opcion;
    }

/**
 * funcion que para ingresar kilometos
 * @brief
 *
 * @return
 */
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
       return km;
   }
   //--------------------------------------------------------------------menu y pedir aerolineas
   /**
    * funcion que te da el sub menu de aerolineas para elegir que aerolinea  elegir primero
    * @brief
    *
    * @return
    */
   int subMenuAereolineas()
   {
	   int opcionAerolineas;

	   system("pause");
	   printf(" *** Sub menu de Opciones *** \n\n");
	   printf("1- ingresar aerolineas latam \n");
	   printf("2- ingresar aereolineas argentinas \n");
	   scanf("%d", &opcionAerolineas);

	   while(opcionAerolineas !=1 && opcionAerolineas !=2){

		   printf("por favor ingrese la opcion correcta 1-latam o 2-aerolineas argentinas");
		   fflush(stdin);
		   scanf("%d", &opcionAerolineas);
	   }
	   return opcionAerolineas;
   }
/**
 * funcion que pide el monto de las aerolineas
 * @brief
 *
 * @param puntprecioLatam
 * @param precioAerolineas
 * @param opcion
 */
   void pedirAerolineas(float*puntprecioLatam, float*precioAerolineas, int opcion)
   {
	   if(opcion == 1){
		   printf("ingrese el precio de la aereolinea latam \n");
		   scanf("%f", puntprecioLatam);
		   	   while(*puntprecioLatam<0)
		          {
		   		   	  fflush(stdin);
		              printf("ERROR.. precio invalido... ingrese un precio correctos \n");
		              scanf("%f", puntprecioLatam);
		          }
		   	printf("ingrese el precio de la aereolinea argentina \n");
		    scanf("%f", precioAerolineas);
		       while(*precioAerolineas < 0)
		   		  {
		    	      fflush(stdin);
		    	      printf("ERROR.. precio invalido... ingrese un precio correctos \n");
				 	  scanf("%f", precioAerolineas);
		   	      }
	   }
	   else
	   {
		   printf("ingrese el precio de la aereolinea argentina \n");
		   scanf("%f", precioAerolineas);
			   while(*precioAerolineas < 0)
				  {
				     fflush(stdin);
					 printf("ERROR.. precio invalido... ingrese un precio correctos \n");
					 scanf("%f", precioAerolineas);
				  }
		   printf("ingrese el precio de la aereolinea latam \n");
		   scanf("%f", puntprecioLatam);
			   while(*puntprecioLatam<0)
				  {
				      fflush(stdin);
					  printf("ERROR.. precio invalido... ingrese un precio correctos \n");
					  scanf("%f", puntprecioLatam);
				  }
	   }
   }
 //---------------------------------------------------------descuentos 10%
   /**
    * funcion que calcula el descuento de 10%
    * @brief
    *
    * @param precioSindesc
    * @return
    */
   float calculadorDescuento(float precioSindesc)
       {
           float precioDebit;

           precioDebit = precioSindesc -(precioSindesc * 10)/100;

           return precioDebit;
       }
   //--------------------------------------------------------aumento 25%

/**
 * funcion que calcula el aumento del 25%
 * @brief
 *
 * @param precioSinAum
 * @return
 */
   float calculadorAumento(float precioSinAum){
	   float precioCredit;

	   precioCredit = precioSinAum + (precioSinAum * 0.25);

	   return precioCredit;
   }
//-------------------------------------------------------------bitcoin
   /**
    * funcion que calcula el precio segun el bitcoin
    * @brief
    *
    * @param precioNoBitcoin
    * @return
    */
   float calculadorBitcoin(float precioNoBitcoin){
	   float precioConBitcoin;

	   precioConBitcoin = precioNoBitcoin / 4606954.55;

	   return precioConBitcoin;
   }
   //----------------------------------------------------------------precio unitario km
   /**
    * funcion que calcula el precio por kilometo recorrido
    * @brief
    *
    * @param precioBase
    * @param km
    * @return
    */
   float calculadorPrecioxKm(float precioBase, float km){
	   float precioxkm;

	   precioxkm = precioBase / km;

	   return precioxkm;
   }
   //--------------------------------------------------------------- diferencia latam - aerolineas
   /**
    * funcion que calcula la diferencia de precio de las aerolineas
    * @brief
    *
    * @param precioLatam
    * @param precioAerolineas
    * @return
    */
   float diferenciadePrecio(float precioLatam ,float precioAerolineas){
	   float diferenciaDePrecio;

	   diferenciaDePrecio = precioLatam - precioAerolineas;

	   return diferenciaDePrecio;
   }


//----------------------------------------------------------------- mostrar resultados
   /**
    * funcion que se encarga de mostrar los resultados
    * @brief
    *
    * @param kilometros
    * @param precioLatam
    * @param precioAerolineas
    * @param TarjetaDebitoLatam
    * @param tarjetaDebitoArg
    * @param tarjetaCreditolatam
    * @param tarjetaCreditoArg
    * @param bitcoinLatam
    * @param bitcoinArg
    * @param precioxkmLatam
    * @param precioxkmArg
    * @param diferenciaDePrecio
    */
   void mostrarResultados(float kilometros,float precioLatam,float precioAerolineas,float TarjetaDebitoLatam,
		      	  	  	  float tarjetaDebitoArg,float tarjetaCreditolatam,float tarjetaCreditoArg,float bitcoinLatam,
						  float bitcoinArg,float precioxkmLatam,float precioxkmArg,float diferenciaDePrecio)
   {
	    printf("KMs Ingresados: %.2f km \n\n", kilometros);

	   	printf("Precio Aerolineas Argentinas: $%.2f \n", precioAerolineas);
	   	printf("a) Precio con tarjeta de debito: $%.2f \n", tarjetaDebitoArg);
	   	printf("b) Precio con tarjeta de credito: $%.2f \n", tarjetaCreditoArg);
	   	printf("c) Precio pagando con bitcoins: %.5f BTC \n", bitcoinArg);
	   	printf("d) Precio Unitario: $%.2f \n\n", precioxkmArg);

	   	printf("Precio Latam: $%.2f \n", precioLatam);
	   	printf("a) Precio con tarjeta de debito: $%.2f \n", TarjetaDebitoLatam);
	   	printf("b) Precio con tarjeta de credito: $%.2f \n", tarjetaCreditolatam);
	   	printf("c) Precio pagando con bitcoins: %.5f BTC \n", bitcoinLatam);
	   	printf("d) Precio Unitario: $%.2f \n\n", precioxkmLatam);

	   	printf("La diferencia de precio es: $%.2f \n\n", diferenciaDePrecio);

   }
