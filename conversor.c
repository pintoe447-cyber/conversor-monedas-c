#include <stdio.h>

int main() {
    int opcion;
    float cantidad, resultado;

    printf("=== CONVERSOR DE MONEDAS ===\n");
    printf("1. Quetzales a Dolares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dolares a Quetzales\n");
    printf("4. Euros a Quetzales\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            resultado = cantidad / 7.8;
            printf("Resultado: %.2f dolares\n", resultado);
            break;
        case 2:
            resultado = cantidad / 8.5;
            printf("Resultado: %.2f euros\n", resultado);
            break;
        case 3:
            resultado = cantidad * 7.8;
            printf("Resultado: %.2f quetzales\n", resultado);
            break;
        case 4:
            resultado = cantidad * 8.5;
            printf("Resultado: %.2f quetzales\n", resultado);
            break;
        default:
            printf("Opcion no valida\n");
    }

    return 0;
}