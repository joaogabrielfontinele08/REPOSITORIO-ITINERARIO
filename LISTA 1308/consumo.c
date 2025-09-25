#include <stdio.h>

int main() {
    double distancia, combustivel, consumoMedio;
    scanf("%lf", &distancia);
    scanf("%lf", &combustivel);
    consumoMedio = distancia / combustivel;
    printf("Consumo medio = %.3lf km/l\n", consumoMedio);
    return 0;
}
