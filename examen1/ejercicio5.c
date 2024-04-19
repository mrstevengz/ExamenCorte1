#include <stdio.h>

float calcularTotalAPagar(float precio) {
    float impuesto = 0.15;  // 15% de impuesto de valor agregado
    float descuento = 0.05; // 5% de descuento si el precio excede U$ 25,000
    float total;

    total = precio + (precio * impuesto); // Agregar impuesto

    if (precio > 25000) {
        total -= precio * descuento; // Aplicar descuento si el precio excede  U$25,000
    }

    return total;
}

int main() {
    float precio, total;

    printf("Ingrese el precio del auto: U$ ");
    scanf("%f", &precio);

    total = calcularTotalAPagar(precio);

    printf("El total a pagar es: U$ %.2f\n", total);

    return 0;
}