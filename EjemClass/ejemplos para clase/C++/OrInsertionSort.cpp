// algoritmo insertion short | ordenamiento por seccion
#include <iostream>
#include <vector>

// # REGION

/*  numeros: Arreglo = {2, 1, 7, 4, 5, 6, 10, 11, 75};
// https://www.youtube.com/watch?v=6GU6AGEWYJY&list=PLfBtpqIBIz7oigjkp6SIKYbz2AkAEqFIE&index=2

<summary>Explicación</summary>
el video anterior a este explico los fundamentos basicos de un algoritmo, es decir, el input, process and output
digamos que seria como la cocina, los ingredientes son el input, el proceso puede ser vatir el huevo, cocinar, etc
y el output seria el bizcochuelo de salida.

un ejemplo real seria una calculadora, ingresas 5 y 5, el algoritmo le agrega el +,-,*,/ y el output se en una suma
seria 5+5=10, a low level, compuertas logicas en la unidad aritmetica logica
*/

#include <iostream>
#include <vector>

void imprimirVector(const std::vector<int>& vec) {
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> Numeros = {2, 1, 7, 4, 5, 6, 10, 11, 75};

    int longitud = Numeros.size();
    
    // Bucle para recorrer el vector, comenzando desde el segundo elemento (índice 1).
    for (int i = 1; i < longitud; i++) {
        // Almacenamos el valor actual (el que vamos a insertar) en la variable 'key'.
        int key = Numeros[i];
        
        // 'j' es el índice del último elemento de la sublista ordenada.
        int j = i - 1;
        
        // Bucle para desplazar los elementos mayores que 'key' a la derecha.
        // La condición es "mientras j sea un índice válido Y el elemento en j sea mayor que key".
        while (j >= 0 && Numeros[j] > key) {
            // Desplazamos el elemento actual una posición a la derecha.
            Numeros[j + 1] = Numeros[j];
            // Movemos 'j' a la izquierda para seguir comparando.
            j = j - 1;
        }
        
        // Insertamos el valor de 'key' en su posición correcta.
        // El bucle anterior se detiene cuando 'j' es -1 o cuando se encuentra un elemento menor o igual.
        // La posición de inserción es siempre 'j + 1'.
        Numeros[j + 1] = key;
        
        std::cout << "Vector despues de la iteracion " << i << ": ";
        imprimirVector(Numeros);
    }
    
    std::cout << "Vector final ordenado: ";
    imprimirVector(Numeros);

    return 0;
}
