#include "linked_circular_list.h"

// Función para imprimir int
void print_int(int value) {
    printf("%d", value);
}

int main() {
    // Crear lista circular de enteros
    List_int* nums = list_int_create();
    list_int_append(nums, 10);
    list_int_append(nums, 20);
    list_int_append(nums, 30);

    // Imprimir lista circular
    printf("Lista circular: ");
    list_int_print(nums, print_int);

    // Eliminar un elemento (en la posición 1)
    list_int_remove_at(nums, 1);
    printf("Lista circular después de eliminar un elemento: ");
    list_int_print(nums, print_int);

    // Destruir la lista
    list_int_destroy(nums);
    return 0;
}
