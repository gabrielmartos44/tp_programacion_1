#include "funciones.h"
/*
1 hacer un menu para los kilometos para que ingresen

2 hacer un print tanto para las dos aerolineas (argentinas y latam)

3 calcular los costos:
//a) Tarjeta de débito (descuento 10%)
//b) Tarjeta de crédito (interés 25%)
//c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos) precio total ///dividido 4606954.55
//d) Mostrar precio por km (precio unitario) cuanto cuesta cada kilometro
//e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)

4. Informar Resultados
“Latam:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
Aerolíneas:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
La diferencia de precio es : r “

*/


int main()
{
	setbuf(stdout, NULL);

	int auxenuPrecio;
	float kilometros;                  //kilometros
    float precioLatam;                       //latam
    float precioAerolineas;                  //aerolineas argentinas

    float TarjetaDebitoLatam;
    float tarjetaDebitoArg;

    float tarjetaCreditolatam;
	float tarjetaCreditoArg;

    float bitcoinLatam;
    float bitcoinArg;

    float precioxkmLatam;
    float precioxkmArg;

    float diferenciaDePrecio;



    char salir = 'n';


    do
    {
        switch(menu())
        {
        case 1:
            kilometros = pedirkm();
            printf("kilomero vale %f\n",kilometros);
            break;
        case 2:
        	auxenuPrecio = subMenuAereolineas();
        	pedirAerolineas(&precioLatam, &precioAerolineas, auxenuPrecio);

        	printf("aereolineas latam %f arg %f\n\n",precioLatam,precioAerolineas);

            break;
        case 3:
        	TarjetaDebitoLatam = calculadorDescuento(precioLatam);
        	tarjetaDebitoArg = calculadorDescuento(precioAerolineas);

        	tarjetaCreditolatam = calculadorAumento(precioLatam);
        	tarjetaCreditoArg = calculadorAumento(precioAerolineas);

        	bitcoinLatam = calculadorBitcoin(precioLatam);
        	bitcoinArg = calculadorBitcoin(precioAerolineas);

        	precioxkmLatam = calculadorPrecioxKm(precioLatam,kilometros);
        	precioxkmArg = calculadorPrecioxKm(precioAerolineas,kilometros);

        	diferenciaDePrecio = diferenciadePrecio(precioLatam,precioAerolineas);
        	break;
        case 4:

        	break;
        case 5:
        	TarjetaDebitoLatam = calculadorDescuento(159339);
        	tarjetaDebitoArg = calculadorDescuento(162965);

        	tarjetaCreditolatam = calculadorAumento(159339);
        	tarjetaCreditoArg = calculadorAumento(162965);

        	bitcoinLatam = calculadorBitcoin(159339);
        	bitcoinArg = calculadorBitcoin(162965);

        	precioxkmLatam = calculadorPrecioxKm(159339,7090);
        	precioxkmArg = calculadorPrecioxKm(162965,7090);

        	diferenciaDePrecio = diferenciadePrecio(159339,162965);

        	break;
        case 6:
        	salir = 's';
        	break;
        default:
            printf("Opcion Invalida!!!\n");
            break;
        }
        system("pause");
    }while(salir != 's');

    return 0;
}
