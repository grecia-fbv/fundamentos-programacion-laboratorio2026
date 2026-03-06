#include <stdio.h>

int main() {
float base, altura, area;

printf("Ingrese la base del triángulo: ");
scanf("%f", &base);

printf("Ingrese la altura del triángulo: ");
scanf("%f", &altura);

area = (base * altura) / 2;

printf("El área del triángulo es: %.2f\n", area);

return 0;
}
