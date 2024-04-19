#include <stdio.h> 

int main(int argc, char const *argv[])
{
    float nota1,nota2, nota3, nota4, nota5, promedio;
    printf("---------Bienvenido---------\n "); 
    printf("Escriba la nota 1:  "); 
    scanf("%f", &nota1); 

    printf("\nEscriba la nota 2:  "); 
    scanf("%f", &nota2); 

    printf("\nEscriba la nota 3:  "); 
    scanf("%f", &nota3); 

    printf("\nEscriba la nota 4:  "); 
    scanf("%f", &nota4); 

    printf("\nEscriba la nota 5:  "); 
    scanf("%f", &nota5); 

    promedio = (nota1+nota2+nota3+nota4+nota5)/5; 

    printf("El promedio del estudiante es: %.2f \n\n ", promedio);

    if (promedio>85)
    {
        printf("Felicidades!!!!");
    }else{
        printf("Animo! Sigue intentandolo");
    }
    
    return 0;
}
