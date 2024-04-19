#include <stdio.h>

int main() {
    char nombre[100];
    float precioCompra, precioVenta;
    int existencia;
    float ganancia, gananciaTotal;

    // Solicitar al usuario que ingrese los datos del producto
    printf("Ingrese el nombre del producto: ");
    scanf("%s", nombre);
    printf("Ingrese el precio de compra del producto: $");
    scanf("%f", &precioCompra);
    printf("Ingrese el precio de venta del producto: $");
    scanf("%f", &precioVenta);
    printf("Ingrese la existencia del producto: ");
    scanf("%d", &existencia);

    // Calcular la ganancia del producto
    ganancia = precioVenta - precioCompra;
    
    // Calcular la ganancia total
    gananciaTotal = ganancia * existencia;

    // Imprimir los datos del producto y la ganancia
    printf("Producto: %s\n", nombre);
    printf("Precio Compra: $%.2f\n", precioCompra);
    printf("Precio Venta: $%.2f\n", precioVenta);
    printf("Existencia: %d\n", existencia);
    printf("Ganancia por unidad: $%.2f\n", ganancia);
    printf("Ganancia total: $%.2f\n", gananciaTotal);

    return 0;
}
