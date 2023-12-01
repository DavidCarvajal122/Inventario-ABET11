#include <stdio.h>
#include "funciones.h"
#include "lecturas.h"

#define MAX_PRODUCTOS 100
#define MAX_NOMBRE 50

char nombres[MAX_PRODUCTOS][MAX_NOMBRE];
int cantidades[MAX_PRODUCTOS];
float precios[MAX_PRODUCTOS];

void ingresarProducto(int *numProductos) {
    if (*numProductos < MAX_PRODUCTOS) {
        leerNombre(nombres[*numProductos]);
        printf("Ingrese la cantidad del producto: \n ");
        cantidades[*numProductos] = leerEntero();
        printf("Ingrese el precio del producto:\n ");
        precios[*numProductos] = leerFlotante();

        (*numProductos)++;

        printf("Producto ingresado exitosamente.\n");
    } else {
        printf("Error: Se alcanzó el límite máximo de productos.\n");
    }
}

void editarProducto(int numProductos) {
    int indice;

    if (numProductos > 0) {
        printf("Ingrese el índice del producto que desea editar (0-%d): \n", numProductos - 1);
        indice = leerEntero();

        if (indice >= 0 && indice < numProductos) {
            leerNombre(nombres[indice]);
            printf("Ingrese la nueva cantidad del producto: \n");
            cantidades[indice] = leerEntero();
            printf("Ingrese el nuevo precio del producto: \n");
            precios[indice] = leerFlotante();

            printf("El producto se editò.\n");
        } else {
            printf("Error.\n");
        }
    } else {
        printf("No hay productos para editar.\n");
    }
}

void eliminarProducto(int *numProductos) {
    int indice;

    if (*numProductos > 0) {
        printf("Ingrese el índice del producto que desea eliminar (0-%d): ", *numProductos - 1);
        indice = leerEntero();

        if (indice >= 0 && indice < *numProductos) {
            for (int i = indice; i < *numProductos - 1; i++) {
                strcpy(nombres[i], nombres[i + 1]);
                cantidades[i] = cantidades[i + 1];
                precios[i] = precios[i + 1];
            }

            (*numProductos)--;

            printf("Producto eliminado exitosamente.\n");
        } else {
            printf("Error: Índice no válido.\n");
        }
    } else {
        printf("Error: No hay productos para eliminar.\n");
    }
}

void listarProductos(int numProductos) {
    if (numProductos > 0) {
        printf("Inventario:\n");
        printf("%-20s %-10s %-10s\n", "Nombre", "Cantidad", "Precio");
        for (int i = 0; i < numProductos; i++) {
            printf("%-20s %-10d %-10.2f\n", nombres[i], cantidades[i], precios[i]);
        }
    } else {
        printf("El inventario está vacío.\n");
    }
}