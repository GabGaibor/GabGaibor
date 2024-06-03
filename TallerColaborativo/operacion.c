#include <stdio.h>
#include <string.h>
#include "operacion.h"
#include "lectura.h"


void ingresarProducto(int* cantidadProductos, Producto inventario[]) {
    if (*cantidadProductos >= PRODUCTOS) {
        printf("Inventario lleno. No se pueden agregar más productos.\n");
        return;
    }

    printf("Ingrese el nombre del producto: ");
    scanf("%s", inventario[*cantidadProductos].nombre);
    inventario[*cantidadProductos].cantidad = leerEntero("Ingrese la cantidad del producto: ");
    inventario[*cantidadProductos].precio = leerFlotantePositivo("Ingrese el precio del producto: ");
    (*cantidadProductos)++;
    printf("Producto ingresado exitosamente.\n");
}

void editarProducto(int* cantidadProductos, Producto inventario[], char* nombreProducto) {
    for (int i = 0; i < *cantidadProductos; i++) {
        if (strcmp(inventario[i].nombre, nombreProducto) == 0) {
            printf("Producto encontrado. Ingrese los nuevos datos.\n");
            printf("Nuevo nombre: ");
            scanf("%s", inventario[i].nombre);
            printf("Nueva cantidad: ");
            inventario[i].cantidad = leerEntero("Ingrese la nueva cantidad del producto: ");
            printf("Nuevo precio: ");
            inventario[i].precio = leerFlotantePositivo("Ingrese el nuevo precio del producto: ");
            printf("Producto editado exitosamente.\n");
            return;
        }
    }
    printf("Producto no encontrado.\n");
}

void eliminarProducto(int* cantidadProductos, Producto inventario[], char* nombreProducto) {
    for (int i = 0; i < *cantidadProductos; i++) {
        if (strcmp(inventario[i].nombre, nombreProducto) == 0) {
            for (int j = i; j < *cantidadProductos - 1; j++) {
                inventario[j] = inventario[j + 1];
            }
            (*cantidadProductos)--;
            printf("Producto eliminado exitosamente.\n");
            return;
        }
    }
    printf("Producto no encontrado.\n");
}

void listarProductos(int* cantidadProductos, Producto inventario[]) {
    if (*cantidadProductos == 0) {
        printf("No hay productos en el inventario.\n");
        return;
    }

    printf("Lista de productos:\n");
    for (int i = 0; i < *cantidadProductos; i++) {
        printf("Nombre: %s, Cantidad: %d, Precio: %.2f\n", inventario[i].nombre, inventario[i].cantidad, inventario[i].precio);
    }
}