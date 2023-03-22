#include <stdio.h>
#include <stdlib.h>



//e) Declare un puntero en el procedimiento principal que apunte a una
//variable de algún tipo y muestre por pantalla lo siguiente:
//1) El contenido del puntero
//2) La dirección de memoria almacenada por el puntero.
//3) la dirección de memoria de la variable.
//4) la dirección de memoria del puntero.
//5) el tamaño de memoria utilizado por esa variable usando la
//función sizeof()

int main()
{
    int Numero=15;
    int *puntero = &Numero;


printf("El Contenido almacenado en el puntero es: %d\n", *puntero);
printf("La direccion de memoria almacenada por el puntero es: %p\n", puntero);
printf("La direccion de memoria de la variable numero es: %p\n", &Numero);
printf("La direccion de memoria del puntero es: %p\n", &puntero);
printf("El Tamaño de memoria utilizado por la variable: %ld bytes\n", sizeof(Numero));



}