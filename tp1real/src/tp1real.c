#include "funciones.h"

int main()
{
	setbuf(stdout, NULL);

	int flagkm = 0;
	int flagAerolineas = 0;
	int flagCalculos = 0;
	int auxenuPrecio;

	float kilometros = 0;                  //kilometros
    float precioLatam = 0;                       //latam
    float precioAerolineas = 0;                  //aerolineas argentinas

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
        switch(menu(kilometros,precioAerolineas,precioLatam))
        {
        case 1:
            kilometros = pedirkm();
            flagkm = 1;
            break;
        case 2:
        	auxenuPrecio = subMenuAereolineas();
        	pedirAerolineas(&precioLatam, &precioAerolineas, auxenuPrecio);
        	flagAerolineas = 1;
            break;
        case 3:
        	if(flagkm == 1 && flagAerolineas == 1)
        	{
        		TarjetaDebitoLatam = calculadorDescuento(precioLatam);
				tarjetaDebitoArg = calculadorDescuento(precioAerolineas);

				tarjetaCreditolatam = calculadorAumento(precioLatam);
				tarjetaCreditoArg = calculadorAumento(precioAerolineas);

				bitcoinLatam = calculadorBitcoin(precioLatam);
				bitcoinArg = calculadorBitcoin(precioAerolineas);

				precioxkmLatam = calculadorPrecioxKm(precioLatam,kilometros);
				precioxkmArg = calculadorPrecioxKm(precioAerolineas,kilometros);

				diferenciaDePrecio = diferenciadePrecio(precioLatam,precioAerolineas);

				flagCalculos = 1;

				printf("Los calculos se han hecho correctamente :D !!!\n");
        	}
        	else {
        		printf("Para poder realizar los calculos es necesario ingresar tanto los kilometros como los precios de las aerolineas\n\n");
        	}
        	break;
        case 4:
        	if(flagkm == 1 && flagAerolineas == 1 && flagCalculos == 1){
        	mostrarResultados(kilometros, precioLatam, precioAerolineas, TarjetaDebitoLatam,
        			      	  tarjetaDebitoArg, tarjetaCreditolatam, tarjetaCreditoArg, bitcoinLatam,
							  bitcoinArg, precioxkmLatam, precioxkmArg, diferenciaDePrecio);
        	}
        	else{
        		printf("Para poder mostrar los resultados es necesario ingresar tanto los kilometros como los precios de las aerolineas y calcularlos previamente \n\n");
        	}
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

        	mostrarResultados(7090, 159339, 162965, TarjetaDebitoLatam,
        	        		  tarjetaDebitoArg, tarjetaCreditolatam, tarjetaCreditoArg, bitcoinLatam,
        					  bitcoinArg, precioxkmLatam, precioxkmArg, diferenciaDePrecio);

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
