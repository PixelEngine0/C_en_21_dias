// Día 2 de Aprendiendo C en 21 días: Variables y constantes numéricas

/*
Cuestionario
1.- ¿Cuál es la diferencia entre una variable entera y una de punto flotante?
        La variable entera ocupa mas espacio de almacenamiento, además de que se usa
        para almacenar un número entero mientras que la segunda se usa para almacenar 
        números reales.
2.- Dé 2 razones para usar una variable de punto flotante de doble precisión (double)
    en vez de una variable de precisión sencilla (float).
        1) El número la variable requiere de una mayor precisión.
        2) El código es más escalable.
3.- ¿Cuáles son las 5 reglas que indica el estándar ANSI que siempre serán ciertas 
    cuando se ubica espacio para las variables?
        1) El tamaño de char es de 1 byte.
        2) El tamaño de short es igual o menor que el de int.
        2) El tamaño de long es mayor o igual al del int.
        3) El tamaño del unsigned es igual a su correspondiete signed.
        4) El tamaño de un float es menor o igual que el un double.
4.- ¿Cuáles son las 2 ventajas de usar una constante simbólica en lugar de una literal?
        1) El código es más claro al darle un nombre a una constante.
        2) Para modificar su valor, sólo se tendrá que ir a su declaración y hacer la modificación.
5.- Muestre dos métodos para definir una constante simbólica llamada MAXIMUM con un valor de 100.
        1) #define MAXIMUM 100
        2) const int MAXIMUM = 100;
6.- ¿Qué caracteres son permitido en los nombres de variables del C?
        Letras [A-Z,a-z], números [0-9] y guión bajo [_].
7.- ¿Qué reglas hay que seguir para la creación de variables y constantes?
        Para variables:
        1) Solo caracteres permitidos.
        2) El primer caracter no puede ser un número y de preferencia tampoco un guión bajo.
        3) Longitud de 32 caracteres.
        4) Nombres en minúsculas por buenas prácticas.
        5) Nombres descriptivos por buenas prácticas.
        Para constantes:
        1) Nombres en mayúsculas por buenas prácticas.
        2) Nombres descriptivos por buenas prácticas.
8.- ¿Cuál es la diferencia entre una constante simbólica y una literal?
        Las constantes simbólicas son símbolos que representan constantes literales.
9.- ¿Cuál es el valor mínimo que puede contener una variable de tipo int?
        Depende de su tamaño y tipo que a su vez depende del sistema en dónde se use:
        int 2 bytes          -> -32,768
        int 4 bytes          -> -2,147,483,648‬
        unsigned int n bytes -> 0
*/


// Programas referentes al Día 3 de aprender a programar en C en 21 Días
// Copie y pegue en prueba.c para probarlos

//Programa que despliega el tamaño de los tipos de variables en C
/*
#include <stdio.h>
int main()
{
    printf("\nA char    is %d bytes", sizeof(char));
    printf("\nAn int    is %d bytes", sizeof(int));
    printf("\nA short   is %d bytes", sizeof(short));
    printf("\nA long    is %d bytes", sizeof(long));
    printf("\nAn unsigned char   is %d bytes", sizeof(unsigned char));
    printf("\nAn unsigned int    is %d bytes", sizeof(unsigned int));
    printf("\nAn unsigned short  is %d bytes", sizeof(unsigned short));
    printf("\nAn unsigned long   is %d bytes", sizeof(unsigned long));
    printf("\nA float   is %d bytes", sizeof(float));
    printf("\nA double  is %d bytes", sizeof(double));
    return 0;
}
*/

// Programa que hace uso de la notación cientifica y typedef además de escribir constantes en 3 notaciones diferentes
/*
#include <stdio.h>
typedef int entero;
typedef float ptoflotante;
entero first = 1.23e2;        //123
ptoflotante second = 0.85E-4; //0.000085
entero cdecimal = 15, coctal = 017, chexadecimal = 0xF; //Notaciones decimal,octal y hexadecimal
int main()
{
    printf("Constante1: %d\nConstante2: %f", first, second);
    printf("\n\nConstante Decimal: %d\nConstante Octal: %d\nConstante Hexadecimal: %d", cdecimal, coctal, chexadecimal);
    return 0;
}
*/

// #define vs const ; La diferencia tiene que ver con los apuntadores y el alcance de la variable
/*
#include <stdio.h>
#define RON 116
const int RADIO = 0xF5;
int main()
{
    printf("With #define:\nConstante_int: %i\nConstante_char: %c", RON,RON ); //integer = 116 character = t  
    printf("\n\nWith const:\nConstante_int: %i\nConstante_unsigned_char: %c", RADIO, RADIO); //integer = 245 unsigned character = 245 ascii code
    return 0;
}
*/

// Listado 3.2. Programa que muestra el uso de las variables y constantes
/*
#include <stdio.h>

#define GRAMOS_POR_LIBRA 454
const int SIGUIENTE_SIGLO = 2020;
long peso_en_gramos, peso_en_libras;
int anio_nacimiento, edad_en_2020;
int ene = 164;

int main()
{
    //entrada de datos
    printf("Ingresa tu peso en libras: ");
    scanf("%li", &peso_en_libras);
    printf("Ingresa tu a%co de nacimiento: ", ene);
    scanf("%d", &anio_nacimiento);

    //conversiones
    peso_en_gramos = peso_en_libras * GRAMOS_POR_LIBRA;
    edad_en_2020 = SIGUIENTE_SIGLO - anio_nacimiento;

    //salida de datos
    printf("\nTu peso en gramos = %ld",peso_en_gramos);
    printf("\nTu edad en 2020: %d a%cos",edad_en_2020 ,ene);
    return 0;
}
*/

//Los ejercicios fueron teoría

