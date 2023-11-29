/*
Alexis Maldonado y Alexis Cuevas
Fecha: 29/Noviembre/2023
Representen el número 50.625
Exámen Tercer Parcial: Usando aritmética de punto fijo, representen el número 50.625
*/
#include <iostream>
#include <cmath>
using namespace std;
// Función para representar un número en punto fijo formato Q8.8
int punto_fijo_q8_8(double numero) {
    // Convertir a representación de punto fijo Q8.8
    return static_cast<int>(numero * pow(2, 8));
}

int main() {
    // Primer número original: 50.625
    double numero_original1 = 50.625;

    // Representación en punto fijo Q8.8 del primer número
    int numero_punto_fijo1 = punto_fijo_q8_8(numero_original1);

    // Segundo número original: 26.50390625
    double numero_original2 = 26.50390625;

    // Representación en punto fijo Q8.8 del segundo número
    int numero_punto_fijo2 = punto_fijo_q8_8(numero_original2);

    // Sumar los dos números en punto fijo Q8.8
    int suma_punto_fijo = numero_punto_fijo1 + numero_punto_fijo2;

    std::cout << "Número original 1: " << numero_original1 << std::endl;
    std::cout << "Número en punto fijo Q8.8 1: " << static_cast<double>(numero_punto_fijo1) / pow(2, 8) << std::endl;

    std::cout << "Número original 2: " << numero_original2 << std::endl;
    std::cout << "Número en punto fijo Q8.8 2: " << static_cast<double>(numero_punto_fijo2) / pow(2, 8) << std::endl;

    std::cout << "Suma en punto fijo Q8.8: " << static_cast<double>(suma_punto_fijo) / pow(2, 8) << std::endl;

    return 0;
}
