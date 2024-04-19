#include <stdio.h>
#include <math.h>

// Función para calcular la raíz cuadrada de un número dentro del rango 80-200
double calcularRaizCuadrada(int numero) {
    double resultado;

    // Verificar si el número está dentro del rango especificado
    if (numero >= 80 && numero <= 200) {
        resultado = sqrt(numero); // Calcular la raíz cuadrada
    } else {
        resultado = -1; // Valor de retorno para indicar que el número está fuera del rango
    }

    return resultado;
}

int main() {
    int numero;
    double raiz;

    printf("Ingrese un número entre 80 y 200: ");
    scanf("%d", &numero);

    raiz = calcularRaizCuadrada(numero);

    if (raiz != -1) {
        printf("La raíz cuadrada de %d es: %.2f\n", numero, raiz);
    } else {
        printf("El número ingresado está fuera del rango especificado.\n");
    }

    return 0;
}