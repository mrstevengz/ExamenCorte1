#include <stdio.h>
#include <math.h>

/*Cree una función para calcular la raíz cuadra de un numero entre 80 y 200.*/

float raizcuadrada(float number);

int main(int argc, char const *argv[])
{
    float numero, raiz;
    printf("Ingrese un numero entre 80 y 200: ");
    scanf("%f", &numero);
    raiz = raizcuadrada(numero);
    if (numero >= 80 && numero <= 200)
       printf("La raiz cuadrada de su numero es: %.2f\n", raiz); 
        else printf("Escoga un numero valido");
    return 0;
}

float raizcuadrada(float number){
    return sqrt(number);
}
