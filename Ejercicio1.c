#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Indique el primer numero: \n");
    scanf("%i", &num1);
    printf("Indique el segundo valor: \n");
    scanf("%i", &num2);

    if(num1 > num2)
    {
        printf("%d es mayor que %d\n", num1, num2);
        printf("%d es menor que %d\n", num2, num1);
    }
    else if(num2 > num1)
    {
        printf("%d es mayor que %d\n", num2, num1);
        printf("%d es menor que %d\n", num1, num2);
    }
    return 0;
}
