#include <stdio.h> 

void Mes(int number) 
{
    if (number == 1) {
    printf("Enero \n");
    } else if (number == 2) {
    printf("Febrero\n");
    } else if (number == 3) {
    printf("Marzo\n");
    } else if (number == 4) {
    printf("Abril\n");
    } else if (number == 5) {
    printf("Mayo \n");
    } else if (number == 6) {
    printf("Junio \n");
    } else if (number == 7) {
    printf("Julio\n");
    } else if (number == 8) {
    printf("Agosto\n");
    } else if (number == 9) {
    printf("Septiembre \n");
    } else if (number == 10) {
    printf("Octubre\n");
    } else if (number == 11) {
    printf("Noviembre\n");
    } else if (number == 12) {
    printf("Diciembre\n");
    } else {
    printf("Intentelo de nuevo, numero invalido \n");
    }
}

int main() {
    int numero;
    printf("Ingresa el numero del mes: ");
    scanf("%d", &numero);
    Mes(numero);
return 0;
}