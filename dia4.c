// Día 4 de Aprendiendo C en 21 días: Enunciados, expresiones y operadores

/*
Cuestionario
1.- ¿Cómo se le llama al siguiente enunciado en C y cuál es su significado? x = 5 + 8;
        Enunciado/Instrucción: asigne el valor de 5+8 a x.        
2.- ¿Que es un expresión?
        Cualquier cosa que evalúa un valor.
3.- En una expresión que contiene varios operadores, ¿qué es lo que determina el orden en el que 
    se ejecutan las operaciones?
        La precedencia (jerarquía) de operadores.
4.- Si la variable x tiene el valor de 10, ¿cuáles son los valores después de cada uno de los 
    siguientes enunciados se ejecute por separado?
    a = x++; a = ++x;
        10 y 11.
5.- ¿Cuál es el resultado de la expresión 10 % 3?
        1
6.- ¿Cuál es el resultado de la expresión 5 + 3 * 8 / 2?
        5 + ((3 * 8) / 2) = 17
7.- Reescriba la expresión de la pregunta 6 añadiendo paréntesis de tal forma que de como
    resultado 16
        (5 + 3) * 8 / (2 + 2)
8.- Si una expresión evalúa a falso, ¿qué valor tiene la expresión?
        0
9.- ¿Cuál tiene mayor precedencia?
    a) == o <  
    b) * o +
    c) != o ==
    d) >= o >
        <, *, igual, igual
10.- ¿Qué son los operadores de asignación compuesta y para qué son útiles?
        Combinan una operación matemática con una de asignación y son : /=, *=, -=, += y %=.
*/

// Programas referentes al Día 3 de aprender a programar en C en 21 Días
// Copie y pegue en prueba.c para probarlos

//Programa que muestra la diferencia entre los modos prefijo y sufijo de los operadores unarios.
/*
#include <stdio.h>
 
 int a,b;
 int main()
 {
    a = b = 5;

    //Imprime a y b decrementándolos, modo prefijo para b y modo posfijo para a
    printf("\n%d    %d", a--, --b);
    printf("\n%d    %d", a--, --b);
    printf("\n%d    %d", a--, --b);
    printf("\n%d    %d", a--, --b);
    printf("\n%d    %d\n", a--, --b);
    printf("\n\tEl modo posfijo (x--,x++) incrementa/decrementa despues de que el porando es usado.\n\
    El modo prefijo (--x,++x) incrementa/decrementa antes de que el operandose usado.");
    return 0;
 }
 */

// Programa que recibe un número referente a segundos y lo convierte a horas, minutos y segundos; Uso del operador módulo
/*
#include <stdio.h>

#define SEGUNDOS_X_MINUTO 60
#define SEGUNDOS_X_HORA 3600
unsigned int segundos, minutos, horas, segundos_sobrantes, minutos_sobrantes;

int main()
{
    printf("Ingrese el numero de segundos:");
    scanf("%d\n", &segundos); //10 000

    horas = segundos / SEGUNDOS_X_HORA; // 2
    minutos = segundos / SEGUNDOS_X_MINUTO;//166
    minutos_sobrantes = minutos % SEGUNDOS_X_MINUTO;//46
    segundos_sobrantes = segundos % SEGUNDOS_X_MINUTO;//40

    printf("%d segundos equivalen a ", segundos);
    printf("%d horas, %d minutos, y %d segundos", horas, minutos_sobrantes, segundos_sobrantes );
    return 0;
}
*/

//Programa que muestra el uso del enunciado if
/*
#include <stdio.h>

int x, y;

int main()
{
    printf("Ingresa un valor entero para x: ");
    scanf("%d", &x);
    printf("Ingresa un valor entero para y: ");
    scanf("%d", &y);

    if(x == y)
    printf("\nx es igual a y");
    else if(x > y)
    printf("\nx es mayor que y");
    else
    printf("\nx es menor que y");
    return 0;
}
*/

// Programa que demuestra la evaluación de expresiones relacionales
/*
#include <stdio.h>

int main()
{
    int a;

    a = (5 == 5); // a = 1
    printf("\na = (5 == 5)\na = %d", a);
    a = (5 != 5); //a = 0
    printf("\na = (5 =! 5)\na = %d", a);
    a= (12 == 12) + (5 != 1); // a = 1 + 1
    printf("\na = (12 == 12) + (5 != 1)\na = %d", a);
    return 0;
}
*/

// Programa que demuestra la precedencia de operadores lógicos
/*
#include <stdio.h>

int a = 5, b = 6, c = 5, d = 1;
int x;

int main()
{
    //Nota: el operador '&&' tiene mayor precedencia que '||'
    x  = a < b || a < c && c < d; // 5 < 6 || 5 < 5 && 5 < 1 =  1 || (0 && 0) = 1 || 0 = 1
    printf("\nSin parentesis la expresion es evaluada como %d", x);
    x  = (a < b || a < c) && c < d; // (5 < 6 || 5 < 5) && 5 < 1 = (1 || 0) && 0 = 1 && 0 = 0 
    printf("\nCon parentesis la expresion es evaluada como %d", x);
    return 0;
}
*/

// Ejercicio 1, 2
// Corrige y reescribe de forma correcta el programa
/*  
#include <stdio.h>

int main()
{
    int x , y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("\n%d is bigger",(x > y) ? x : y);
    return 0;
}
*/

// Ejercicio 3
// Modificar el programa(4.1 modos sufijo/posfijo) para que cuente hacia arriba
/*
#include <stdio.h>
 
 int a,b;
 int main()
 {
    a = b = 5;

    //Imprime a y b incrementándolos, modo prefijo para b y modo posfijo para a
    printf("\n%d    %d", a++, ++b);
    printf("\n%d    %d", a++, ++b);
    printf("\n%d    %d", a++, ++b);
    printf("\n%d    %d", a++, ++b);
    printf("\n%d    %d\n", a++, ++b);
    printf("\n\tEl modo posfijo (x--,x++) incrementa/decrementa despues de que el porando es usado.\n\
    El modo prefijo (--x,++x) incrementa/decrementa antes de que el operandose usado.");
    return 0;
 }
 */

// Ejercicio 4
// Programa que asigna el valor de x a la varible si x se encuentra entre 1 y 20
/*
#include <stdio.h>
int main()
{
        unsigned short int x = 0, variable = 0;
        printf("Introduce un valor entero para x: ");
        scanf("%d", &x);
        if ((x >= 1) && (x <= 20))
        {
                variable += x;
                printf("%d se encuentra dentro del rango 1 - 20", variable);
        }
        else
        {
                printf("%d No se encuentra dentro del rango 1 - 20", x);
        }
        return 0;
}
*/

// Ejercicio 5
// Programa que utiliza el operador condicional para realizar la misma tarea que el ejercicio 4
/*
#include <stdio.h>

int main()
{
        unsigned short int x = 0, variable = 0;
        printf("Introduce un valor entero para x: ");
        scanf("%d", &x);
        variable = ((x >= 1) && (x <= 20)) ? x : variable;
        printf("Si x =! 0 entonces x in range = 1 - 20\nValor de x: %d", variable);
        return 0;
}
*/

// Ejercicio 10
// Corregir programa con errores
/*
#include <stdio.h>

int main()
{
        int x = 1;
        if(x == 1)
                printf("x equals 1");
        else
                printf("x doesn't equal 1");
        return 0;  
}
*/