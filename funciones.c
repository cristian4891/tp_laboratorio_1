#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>

/**
*\ brief  Recibe 2 n�meros y calcula la suma de ambos
*\ param  "x" es el primer n�mero ingresado e "y" el segundo
*\ return El resultado de la suma
*/
    float suma(float x , float y)
    {float auxSuma;
        auxSuma=x+y;
        return auxSuma;
    }


/**
*\ brief  Calcula la resta de 2 n�meros
*\ param  "x" es el primer n�mero ingresado e "y" el segundo
*\ return El resultado de la resta
*/
    float resta (float x , float y)
    {
        float auxResta;
        auxResta=x-y;
        return auxResta;
    }


/**
*\ brief  Calcula la division entre 2 n�meros, si el divisor es 0 se vuelve
          a solicitar el ingreso de un nuevo n�mero sino realiza la divisi�n
          normalmente.
*\ param  "x" es el primer n�mero ingresado e "y" el segundo
*\ return El resultado de la divisi�n
*/
    float division( float x , float  y)
    {
        float auxDivision;
        if(y==0)
            {
                printf("Error, el divisor no puede ser 0, ingrese otro n�mero: ");
                scanf("%f",&y);
                auxDivision=x/y;
            }
        else
            {
                auxDivision=x/y;
            }
        return auxDivision;
    }


/**
*\ brief  Calcula la multiplicaci�n de los n�meros ingresados
*\ param  "x" es el primer n�mero ingresado e "y" el segundo
*\ return El resultado de la multiplicaci�n
*/
   float multiplicacion (float x , float y)
        {
            float auxMultiplicacion;
            auxMultiplicacion=x*y;
            return auxMultiplicacion;
        }


/**
*\ brief  Multiplica la parte entera de un numero por los anteriores
*\ param  "x" es el primer n�mero ingresado
*\ return El factorial
*/

int factorial(int x)
{
    int auxFactorial=1;
    int i;

    if(x==0)
        {
            auxFactorial=1;
        }
    else
        {
            for(i=1;i<=x;i++)
                {
                    auxFactorial=auxFactorial*i;
                }
        }
     return auxFactorial;
}






#endif // FUNCIONES_H_INCLUDED
