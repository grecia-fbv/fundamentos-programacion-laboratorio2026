#include <stdio.h>

int main() {
char nombreCliente[50];
int cantidadProductos;
int precioProducto = 8;
int total;

printf("Ingrese nombre del cliente: ");
fgets(nombreCliente, sizeof(nombreCliente), stdin);

printf("Ingrese cantidad de productos comprados: ");
scanf("%d", &cantidadProductos);

total = precioProducto * cantidadProductos;

printf("\nCliente: %s", nombreCliente);
printf("Total a pagar: %d Bs\n", total);

return 0;
}
