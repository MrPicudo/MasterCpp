/* Programa maestro de 1er semestre */

#include <stdio.h>
// Hacemos la conexión de las funciones externas a través de la librería que contiene sus prototipos.
#include "myFunctions.h"

int main(int argc, const char * argv[]) {
    // Variables
    int option = 0;
    
    // Autor
    printf("*** Curso completo de C *** \n \t * Miguel Torres * \n\n");
    
    // Mensaje
    printf("Seleccione el programa que desea ejecutar: \n"
           "\t 1) ¡Hola mundo desde C! \n"
           "\t 2) Calculadora basica \n"
           "\t 3) Estructuras selectivas if-else \n"
           "\t 4) Salir del programa");
    
    // Selección de opción:
    while(option!=4) {
        printf("\n\nOpción: ");
        do {
            scanf("%d", &option);
            if(option<1 || option>4) {
                printf("Opcion invalida, ingrese nuevamente: ");
            }
        } while(option<1 || option>4);
        
        // Estructura selectiva para la opción ingresada
        switch(option) {
            case 1: program001(); break;
            case 2: program002(); break;
            case 3: program003(); break;
            default: printf("Fin del programa. \n\n");
        }
    }
    
    // Retorno
    return 0;
}
