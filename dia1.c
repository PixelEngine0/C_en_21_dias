// Día 1 de Aprendiendo C en 21 días: Comienzo

/*
Cuestionario
1.- Dé tres razones por las cuales el C es la mejor selección del lenguaje de programación.
        1) Extensa documentación
        2) Potente y portable
        3) Popular y multipropósito
2.- ¿Qué hace el compilador?
        Transforma el código fuente a código máquina y crea un archivo objeto
3.- ¿Cuales son los pasos en en el ciclo de desarrollo en el programa?
        1) Definir el problema
        2) Desarrollar el algoritmo(solución)
        3) Implementar en código
        4) Ejecutar el código y comprobar su funcionalidad
4.- ¿Qué comando se necesita teclear para compilar un programa llamado PROGRAM1.c en su compilador?
        En mi caso al usar gcc sería "gcc program1.c" y para ejecutarlo sería "a.exe".
5. ¿Su compilador ejecuta el enlazado y la compilaciòn  con un solo comando o se tienen que dar comandos    especiales?
        gcc compila y en laza con un solo comando, con el DevC es posible compilar,enlazar y ejecutar con un solo comando.
6.- ¿Que extensión se debe usar para los archivos fuente del C?
        La extensión propia del C, .c (filename.c).
7.- ¿Es FILENAME.TXT un nombre válido para un archivo fuente del C?
        No, .txt no es una extensión que reconozca un compilador de C.
8.- Si se ejecuta un programa que se ha compilado y no funciona como se esperaba, ¿qué se debe hacer?
        Verificar el código fuente en el editor de texto.
9.- ¿Qué es el lenguaje máquina?
        Es el lenguaje de bajo nivel y compuesto por códigos mnemónicos que es directamente interpretado por el microprocesador de la computadora, es decir el único lenguaje del que la computadora entiende.
10.- ¿Que hace el enlazador?
        Enlaza los archivos de la biblioteca de funciones del C con el código objeto que arroja el compilador.
*/


// Programas referentes al Día 1 de aprender a programar en C en 21 Días
// Copie y pegue en prueba.c para probarlos

// Hello.c
/*
#include <stdio.h>

int main()
{
    printf("Hello, World!");
}
*/

// Ejercicio 2
// Programa  que despliega el  área de un círculo en base a un parámetro radio
/*
#include <stdio.h>

int radius,area;
int main()
{
    printf("Enter radius (i.e. 10): ");
    scanf("%d", &radius);
    area = 3.149 * radius *radius;
    printf("\n\nArea = %d", area);
    return 0;
}
*/

// Ejercicio 3
// Imprime una matriz de 10x10 con el elemento 'X'
/*
#include <stdio.h>

int x,y;
int main()
{
    for (x = 0; x < 10; x++, printf("\n"))
        for (y = 0; y < 10; y++)
            printf("X");
    return 0;
}
*/

// Ejercicio 4
// Búsqueda de errores, corrige el programa, [error en línea 6]
/*
#include <stdio.h>

int main()
{
    printf("Kepp looking!");
    printf("\nYou'll find it!"); //printf("You\'ll find it!"); [error]
    return 0;
}
*/

//Ejercicio 5
// Búsqueda de errores, corrige el programa,[error en línea 6]
/*
#include <stdio.h>

int main()
{
    printf ("This is a program with a ");
    printf("problem!"); //do_it("problem!"); [error]
    return 0;
}
*/

// Ejercicio 6
// Imprime una matriz de 10x10 con el elemento '[?]' [Ejercicio 3 modificado, línea 9]
/*
#include <stdio.h>

int x,y;
int main()
{
    for (x = 0; x < 10; x++, printf("\n"))
        for (y = 0; y < 10; y++) 
            printf("%c", 1); //printf("X");
    return 0;
}
*/

// Ejercicio 7: PRINT_IT.C
// Este programa tiene errores de sintaxis en el libro

/*
// Este programa imprime un listado con números de línea
#include <stdio.h>
#include <stdlib.h>

void do_heading(char *filename);
int line, page;

int main(int argv, char *argc[])
{
    char buffer[256];
    FILE *fp;

    if (argv < 2)
    {
        fprintf(stderr,"\nProper Usage is: ");
        fprintf(stderr, "\n\nPRINT_IT filename.ext\n");
        exit(1);
    }

    if (( fp = fopen(argc[1], "r")) == NULL)
    {
        fprintf(stderr, "Error opening file, %s!", argc[1]);
        exit(1);
    }

    page = 0;
    line = 1;
    do_heading(argc[1]);

    while (fgets (buffer, 256, fp) != NULL)
    {
        if (line % 55 == 0)
        {
            do_heading(argc[1]);
        }
        fprintf(stderr, "%4d:\t%s", line++, buffer);
    }

    fprintf(stderr, "\f");
    fclose(fp);
    return 0;
}

void do_heading(char *filename)
{
    page++;

    if (page > 1)
    {
        fprintf(stderr, "\f");
    }
    fprintf(stderr, "Page: %d, s\n\n", page, filename);

}
*/