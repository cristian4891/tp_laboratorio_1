#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"

int main()
{
    char    seguir='s';
    int     opcion=0;
    float   numero1=0;
    float   numero2=0;
    float   sumando;
    float   restando;
    float   dividiendo;
    float   multiplicando;
    int     factoriando=0;

     while(seguir=='s')
    {
        printf("        ----------CALCULADORA----------\n\n");

        printf("1- Ingresar 1er operando A=                %.2f\n",numero1);
        printf("2- Ingresar 2do operando B=                %.2f\n",numero2);
        printf("3- Calcular la suma (%.2f+%.2f)=           %.2f\n",numero1,numero2,sumando);
        printf("4- Calcular la resta (%.2f-%.2f)=          %.2f\n",numero1,numero2,restando);
        printf("5- Calcular la division (%.2f/%.2f)=       %.2f\n",numero1,numero2,dividiendo);
        printf("6- Calcular la multiplicacion (%.2f*%.2f)= %.2f\n",numero1,numero2,multiplicando);
        printf("7- Calcular el factorial (%d!)=             %d\n",(int)numero1,factoriando);
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n\n");


        printf("Elija una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese un numero: ");
                scanf("%f",&numero1);
                system("cls");
                break;

            case 2:
                printf("Ingrese un numero: ");
                scanf("%f",&numero2);
                system("cls");
                break;

            case 3:
                sumando=suma(numero1,numero2);
                printf("La suma es de: %.2f\n",sumando);
                system("pause");
                system("cls");
                break;


            case 4:
                 restando=resta(numero1,numero2);
                 printf("La resta es de: %.2f\n",restando);
                 system("pause");
                 system("cls");
                 break;

            case 5:
                dividiendo=division(numero1,numero2);
                printf("La division es: %.2f\n",dividiendo);
                system("pause");
                system("cls");
                break;

            case 6:
                multiplicando=multiplicacion(numero1,numero2);
                printf("La multiplicacion es de: %.2f\n",multiplicando);
                system("pause");
                system("cls");
                break;

            case 7:
                factoriando=factorial(numero1);
                printf("El factorial es: %d\n",factoriando);
                system("pause");
                system("cls");
                break;

            case 8:
                sumando=suma(numero1,numero2);
                printf("La suma es de:           %.2f\n",sumando);

                restando=resta(numero1,numero2);
                printf("La resta es de:          %.2f\n",restando);

                dividiendo=division(numero1,numero2);
                printf("La division es:          %.2f\n",dividiendo);

                multiplicando=multiplicacion(numero1,numero2);
                printf("La multiplicacion es de: %.2f\n",multiplicando);

                factoriando=factorial(numero1);
                printf("El factorial es:         %d\n",factoriando);

                system("pause");
                system("cls");
                break;

            case 9:
                seguir = 'n';
                break;
        }

    }
        return 0;
}
