#include <stdio.h>
#include <string.h>
#include "funciones.h"
int main() {
    int numProductos = 0;
    int opcion;

    do {
        printf("\nSistema de Inventario\n");
        printf("1. Ingresar Producto\n");
        printf("2. Editar Producto\n");
        printf("3. Eliminar Producto\n");
        printf("4. Listar Productos\n");
        printf("5. Salir\n");
        printf("Ingrese su opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                ingresarProducto(&numProductos);
                break;
            case 2:
                editarProducto(numProductos);
                break;
            case 3:
                eliminarProducto(&numProductos);
                break;
            case 4:
                listarProductos(numProductos);
                break;
            case 0:
                printf("Gracias por usar el programa.\n");
                break;
            default:
                printf("Ingrese una opcion vàlida.\n");
        }
    } while (opcion != 5);

    return 0;
}