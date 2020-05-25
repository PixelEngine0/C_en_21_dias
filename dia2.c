// Día 2 de Aprendiendo C en 21 días: Los componentes de un programa en C

/*
Cuestionario
1.- ¿Cómo se llama un grupo de 2 o más enunciados del C encerrados entre llaves?
        Bloques.
2.- ¿Cuál es el único componente obligatorio de todo programa en C?
        La función main().
3.- ¿Cómo se añaden comentarios al programa y cómo se utilizan?
        Con slash y asterisco, se usan para documentar el funcionamiento del programa.
4.- ¿Qué es  una función?
        Un procedimiento que puede recibir parámetros y realizar una tarea específica al ser llamada.
5.- El C proporciona dos tipos de funciones ¿Cuáles son y cómo se diferencian?
        de biblioteca y definidas por el usuario, las primeras se incluyen en las bibliotecas del C y 
        terminan en .h, las segundas las crea un usuario y llevan una definición y un prototipo.
6.- ¿Para que se usa la directiva #include?
        Para incluir librerías de funciones del C.
7.- ¿Se pueden anidar los comentarios?
        Sólo en algunos tipos de compiladores por lo que anidarlos como práctica restaría portabilidad al 
        programa.
8.- ¿Los comentarios pueden ser más grandes que una línea?
        Sí.
9.- ¿Que otro nombre se les da a los archivos de inclusión?
        Archivos de encabezado
10.- ¿Qué es un archivo de inclusión?
        Es un archivo de disco separado que contiene información necesaria para el compilador.
*/


// Programas referentes al Día 2 de aprender a programar en C en 21 Días
// Copie y pegue en prueba.c para probarlos

//Multiplicy.c
//Programa para calcular el producto de dos números
/*
#include <stdio.h>
int a,b,c;
int product(int x, int y);
int main()
{
    //Pide el primer número
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &a);

    //Pide el segundo número
    printf("Enter another number between 1 and 100: ");
    scanf("%d", &b);

    //Calcula y despliega el producto
    c = product(a,b);
    printf("\n%d x %d = %d", a, b, c);
}
//Función que retorna el producto de sus dos argumentos
int product(int x, int y)
{
    return(x * y);
}
*/

//LIST_IT.C
//Programa que despliega en pantalla listados de programas en C guardados.[Tiene errores]
/*
#include <stdio.h>
#include <stdlib.h>

void display_usage(void);
int line;

int main(int argv, char *argc[])
{
    char buffer[256];
    FILE *fp;

    if (argv < 2)
    {
        display_usage();
        exit(1);
    }

    if (( fp = fopen(argc[1], "r")) == NULL)
    {
        fprintf(stderr, "Error opening file, %s!", argc[1]);
        exit(1);
    }

    line = 1;

    while (fgets (buffer, 256, fp) != NULL)
    {
        fprintf(stdout, "%4d:\t%s", line++, buffer);
    }

    fclose(fp);
    return 0;
}

void display_usage(void)
{
    fprintf(stderr,"\nProper Usage is: ");
    fprintf(stderr, "\n\nLIST_IT filename.ext\n");
}
*/


// Ejercicio 2
// Imprime una oración entre dos lineas de asteriscos
/*
#include <stdio.h>

void display_line(void);
int main()
{
    display_line();
    printf("\n Teach yourself C in 21 Days!\n");
    display_line();

    return 0;
}
//función que imprime una linea de asteriscos
void display_line(void)
{
    int counter;
    for (counter = 0; counter < 21; counter++)
    {
        printf("* ");
    }
}
*/

// Ejercicio 4
// Imprime el abecedario
/*
#include <stdio.h>

int main()
{
    int ctr;
    for(ctr = 65; ctr < 91; ctr++)
    {
        printf("%c ", ctr);
    }
    return 0;
}
*/

// Ejercicio 5
//Programa que mide la longitud de una cadena
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[256];
    printf("Enter you name and press <Enter>:\n");
    gets(buffer);

    printf("\nYour name has %d characters and spaces!", strlen(buffer));
    return 0;
}
*/