// Apuntadores.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main(int argc, char** argv) // argument count conteo de argumentos
{
    //si le metimos argumentos al programa
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++ )
        {
            std::cout << argv[i] << "\t\n";
            //toda cadena termina con un carater diagonal 0 
            int j = 0;
            int value = 0;
            std::cout << " ";
            do 
            {
                value = (int)argv[i][j];
                std::cout << argv[i][j] << "= " << value << "0x" << std::hex << value  << " \n";
                j++;
            } while (argv[i][j] != 0);
            
            
            std::cout << "\n";
        }
    }
    else
    {
        std::cout << "No se dieron argumentos. Cerrado \n";
    }
    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln