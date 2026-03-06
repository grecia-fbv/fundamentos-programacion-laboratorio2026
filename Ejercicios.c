#include <stdio.h>

int main() {
char nombre[50];
int edad;
char carrera[50];
int semestre;

printf("Ingrese nombre del estudiante: ");
fgets(nombre, sizeof(nombre), stdin);

printf("Ingrese edad: ");
scanf("%d", &edad);
getchar(); // Limpiar el buffer

printf("Ingrese carrera: ");
fgets(carrera, sizeof(carrera), stdin);

printf("Ingrese semestre: ");
scanf("%d", &semestre);

printf("\nDatos del estudiante:\n");
printf("Nombre: %s", nombre);
printf("Edad: %d\n", edad);
printf("Carrera: %s", carrera);
printf("Semestre: %d\n", semestre);

return 0;
}
