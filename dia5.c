// Día  de Aprendiendo C en 21 días: Funciones: lo básico

/*
Cuestionario
1.- ¿Va a usar programación estructurada cuando escriba sus programas en C?
        Sí.
2.- ¿Cómo funciona la programación estructurada?
        Toma un problema complejo de la programación y las divide en tareas
        más pequeñas y fáciles de llevar acabo.
3.- ¿Dónde entran las funciones del C en la programación estructurada?
        Después de haber dividido el programa en tareas más simples, se escri-
        be una función para cada una.
4.- ¿Cuál debe ser la primera línea de una definición de función y que información contiene?
        El encabezado de función, contiene el tipo de valor que regresa, el 
        nombre de la función y nombre y tipo de sus parámetros.
5.- ¿Que tántos valores puede regresar una función?
        Puede regresar uno, ninguno o varios valores.
6.- Si una función no regresa un valor, ¿con que tipo debe ser declarada?
        Void.
7.- ¿Cuál es la diferencia entre una definición de función y un prototipo de función?
        Elm prototipo le informa al compilador sobre la función mientras que la
        definición es la función en si misma.
8.- ¿Que es una variable local?
        Una variable que se declara dentro de una función.
9.- ¿En qué son especiales las varibles locales?
        Son independientes de otras funciones del programa.
*/


// Programas referentes al Día  de aprender a programar en C en 21 Días
// Copie y pegue en prueba.c para probarlos

// Programa que usa una función para calcular el cubo de un número
/*
#include <stdio.h>

long cube(long x);
long input, answer;

int main()
{
    printf("Enter an integer value: ");
    scanf("%d", &input);
    answer = cube(input);

    printf("The cube of %ld is %ld.", input, answer);
}

long cube(long x)
{
    long x_cubed;

    x_cubed = x * x * x ;
    return x_cubed;
}
*/

// Programa que muestra la diferencia entre argumentos y parámetros
/*
#include <stdio.h>

float half_of(float k);
float x = 3.5, y = 65.11, z;

int main()
{
    // x es el argumento que se pasa a la función 
    z = half_of(x);
    printf("The value of z  = %f\n", z);
    // y es el argumento que se pasa a la función 
    z = half_of(y);
    printf("The value of z  = %f\n", z);
    return 0;
}

float half_of(float k)
{
    // k es el parámetro que recibe el argumento para la función 
    return(k /= 2);
}
*/

// Programa que muestra las variables locales
/*
#include <stdio.h>

int x = 1, y = 2;
void demo(void);

int main()
{
    printf("Antes de llamar a demo() en main(), x = %d y y = %d.", x, y);
    demo();
    printf("\nDespues de llamar a demo() en main(), x = %d y y = %d.", x, y);
}

void demo(void)
{
    int x = 88, y = 99;
    printf("\nDentro de demo(), x = %d y y = %d.", x, y);
}
*/

// Programa que demuestra el uso de varios enunciados return en una función
/*
#include <stdio.h>

int x, y, z;
int larger_of(int a, int b);

int main()
{
    puts("Enter two different integer values: ");
    scanf("%d%d", &x, &y);
    z= larger_of(x,y);
    printf("\nThe larger value is %d", z);
    return 0;
}

int larger_of(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
*/

// Programa que usa un función recursiva para calcular factoriales
/*
#include <stdio.h>

unsigned int f, x;
unsigned int factorial (unsigned int a);

int main()
{
    puts ("Enter an integer value between 1 and 8: ");
    scanf("%d", &x);

    if (x < 1 || x > 8)
        printf("Only values from 1 to 8 are acceptable");
    else 
    {
        f = factorial(x);
        printf("%u factorial equals %u", x, f);
    }
    return 0;
}

unsigned int factorial(unsigned int a)
{
    if (a == 1)
        return 1;
    else
    {
        a *= factorial(a-1);
        return a;
    }
    
}
*/

// Ejercicicio 4 Búsqueda de errores
/*
#include <stdio.h>
void print_msg();
int main()
{
    print_msg();
    return 0;
}
int _print_msg(char cad1)
{
    puts("This is a message to print");
}
*/

//Ejercicio 6 Reescribir programa para que solo necesite un enunciado return
/*
#include <stdio.h>

int x, y, z;
int larger_of(int a, int b);

int main()
{
    puts("Enter two different integer values: ");
    scanf("%d%d", &x, &y);
    z= larger_of(x,y);
    printf("\nThe larger value is %d", z);
    return 0;
}

int larger_of(int a, int b)
{
    int variable = 0;
    variable = (a > b) ? a : b;
    return variable;
}
*/

// Ejercicio 10 Programa que usa una función para encontrar promedio de 5 valores float introducidos por usuario
/*
#include <stdio.h>
float prom(float num1, float num2, float num3, float num4, float num5);

int main()
{
    float promedio, a, b, c, d, e;
    printf("introduce 5 numeros separados por espacios:\n");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    promedio = prom(a, b, c, d, e);
    printf("\nEl promedio es: %f", promedio);
    return 0;
}
float prom(float num1, float num2, float num3, float num4, float num5)
{
    return((num1 + num2 + num3 + num4 + num5)/5);
}
*/

// Ejercicio 11 Escriba una función recursiva que calcule el valor de 3 a la potencia de otro numero.
/*
#include <stdio.h>
int tres_elevado(int potencia);

int main()
{
	int a = 4;
	int b = 9;
	
	printf("3 elevado a la potencia %d es %d", a,  tres_elevado(a));
	printf("\n3 elevado a la potencia %d es %d", b,  tres_elevado(b));
	return 0;
}
int tres_elevado(int potencia)
{
	if(potencia < 1)
		return(1);
	else
		return(3 * tres_elevado(potencia - 1));
}
*/


