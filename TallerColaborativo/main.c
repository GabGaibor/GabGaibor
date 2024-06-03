#include <stdio.h>
#include "operacion.h"

#define PRODUCTOS 100
#define NOMBRE 50

int main() {
    int opcion;
    Producto inventario[PRODUCTOS];
    int cantidadProductos = 0; 
    char nombreProducto[NOMBRE];

    do {
        printf("\nSistema de Inventarios\n");
        printf("1. Ingresar producto\n");
        printf("2. Editar producto\n");
        printf("3. Eliminar producto\n");
        printf("4. Listar productos\n");
        printf("5. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                ingresarProducto(&cantidadProductos, inventario);
                break;
            case 2:
                printf("Ingrese el nombre del producto a editar: ");
                scanf("%s", nombreProducto);
                editarProducto(&cantidadProductos, inventario, nombreProducto);
                break;
            case 3:
                printf("Ingrese el nombre del producto a eliminar: ");
                scanf("%s", nombreProducto);
                eliminarProducto(&cantidadProductos, inventario, nombreProducto);
                break;
            case 4:
                listarProductos(&cantidadProductos, inventario);
                break;
            case 5:
                printf("Saliendo del sistema de inventarios.\n");
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }
    } while (opcion!= 5);

    return 0;
}