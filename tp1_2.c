// a) Haga una función que devuelva el cuadrado de un número
// b) Haga la función anterior, pero devolviendo un tipo void
// c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
// d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
// void Invertir(a,b)
// e) Dado dos parámetros de entrada, deberá devolverlos de forma
// ordenada, en el primer parámetro el menor y en el segundo el mayor.
// void orden(a,b)
// f) Utilice las funciones anteriores para leer pares de valores e imprimirlos
// por pantalla.

#include <stdio.h>
#include <stdio.h>

int cuadrado(int num1);
void VoidAlCuadrado(int num);
void Mostrar_Cont_dir(int variable);
void Invertir(int a, int b);
void Orden(int a, int b);

int main()
{

    int num1, variableP, a, b;

    printf("Apartado A\n");
    printf("Ingrese un numero:\n");
    scanf("%d", &num1);
    cuadrado(num1);
    printf("El cuadrado de %d es %d\n", num1, cuadrado(num1));
    //-----------------------------------------------------------------------//

    printf("Apartado B\n");
    printf("Ingrese un numero:\n");
    scanf("%d", &num1);
    VoidAlCuadrado(num1);

    //-----------------------------------------------------------------------//

    printf("Apartado C\n");
    printf("Ingrese un numero:\n");
    scanf("%d", &variableP);
    Mostrar_Cont_dir(variableP);

    //-----------------------------------------------------------------------//

    printf("Apartado D\n");
    printf("Ingrese 2 numeros:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("El valor de a y b antes de invertir los numeros son  %d y %d\n", a, b);
    Invertir(a, b);

    //-----------------------------------------------------------------------//
    printf("Apartado E\n");
    printf("Ingrese 2 numeros:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("El valor de los numeros a y b son  %d y %d\n", a, b);
    Orden(a, b);

    return 0;
}

int cuadrado(int num1)
{
    return num1 * num1;
}

void VoidAlCuadrado(int num1)
{

    printf("El cuadrado de %d es %d\n", num1, num1 * num1);
}

void Mostrar_Cont_dir(int variableP)
{

    printf("La dirección de la variable es %p\n", &variableP);
    printf("El contenido de la variable es %d\n", variableP);
}

void Invertir(int a, int b)
{

    int temp = a;
    a = b;
    b = temp;
    printf("El valor de a y b luego de invertir los numeros son  %d y %d\n", a, b);
}

void Orden(int a, int b)
{

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
        printf("Los valores Ordenados de Menor a Mayor son a=%d y b=%d\n", a, b);
    }
    else
    {
        if (b > a)
        {

            printf("Los valores Ordenados de Menor a Mayor son a=%d y b=%d\n", a, b);
        }
    }
}