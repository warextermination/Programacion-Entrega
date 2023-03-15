// 2023_03_15_002_HolaMundo_Variables__885_Milko_Mtz.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Milko Sahy Martinez Arvizu
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";//comunicarnos con el usuario
    //con cout me comunico al usuario
    //con \n y con std::endl doy un salto de linea
    std::cout << "Hola \nsoy homelo chino" << std::endl;
    //Tipos de variables bool, int, float, char, straing
    //Sintaxis para nombrar variables
    //Tipo de variable - Nombre de la variable - Inicialización
    bool continuar = true;
    int Vida = 100;
    float ataque = 18.5;
    char nombre[15] = "Milko";
    std::string namertag = "Toysabroso";
    //<< es concatenar o sumar textos
    std::cout << "hola " << nombre << " Bienvenido al mundo de " << namertag << std::endl;
    std::cout << std::endl;
    Vida = Vida - ataque;
    std::cout << "Tu vida restamte es: " << Vida << std::endl;
    float Vida_Aux = 0;
    Vida_Aux = Vida - ataque;
    std::cout << "Tu vida_Aux restante es: " << Vida_Aux << std::endl;

    //operadores aritmeticos
    //+ - * / ^2 raiz

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
