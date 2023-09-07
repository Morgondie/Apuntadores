// Apuntadores.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

void PruebaArgumentos(int argc, char** argv)
{
    //si le metimos argumentos al programa
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            std::cout << argv[i] << "\t\n";
            //toda cadena termina con un carater diagonal 0 
            int j = 0;
            int value = 0;
            std::cout << " ";
            do
            {
                value = (int)argv[i][j];
                std::cout << argv[i][j] << "= " << value << "0x" << std::hex << value << " \n";
                j++;
            } while (argv[i][j] != 0);


            std::cout << "\n";
        }
    }
    else
    {
        std::cout << "No se dieron argumentos. Cerrado \n";
    }
}

void Promedio(int argc, char** argv)
{
    // el ejercico 2 de apuntadores
    //forma C de asignar memoria
    //int* x = (int*)malloc(sizeof(int));//el * indica que este valor va guardar en la memoria un entrero
    //(void * es un apuntador simple)


   // *x = 99;
    //std::cout << "sizeof int " << sizeof(int) << "\n";
    //std::cout << "x " << *x << " en " << x << "\n";



    //la forma c++ de asignar memoria es la siguiente

    //*x = 'k';
    //std::cout << "sizeof int " << sizeof(int) << "\n";
   // std::cout << "x " << *x << " en " << x << "\n";

    //*(x + 1) = 18;
    //std::cout << "x " << *(x + 1) << " en " << x + 1 << "\n";

    
    // 
    //int* y = new int[214748369];
    //char continua;
    //bool continuar = true;
   // memset(y, 0, sizeof(int));
    //genera una lista de 100 enteros aleatorios

    /**/
    int* acumulador = new int;
    *acumulador = 0;
    char* continuar = new char;
    *continuar = 64;
    float* division = new float;
    *division = 0.0;

    int* y = new int[100];
    memset(y, 64, 100 * sizeof(int));
    /*
        for (int i = 0; i < 214748369; i++)
        {
            if (continuar)
            {
                division += 1;
                std::cout << "dame los valores para sacar promedio  : \n";
                std::cin >> y[i];
                std::cout << "y[" << i << "] = " << y[i] << "\n";
                *acumulador += y[i];
            }
            if (continuar || continuar == false)
            {
                std::cout << "continuar? si/no  : \n";
                std::cin >> continua;
            }
            if (continua == 's')
            {
                continuar = true;
                continua;
            }
            else
                continuar = false;
            i -= 1;

        }
        float promedio = *acumulador / division;
        std::cout << " promedio = " << promedio;

    }*/

    for (int i = 0; i < 100; i++)
    {
        std::cout << "Escribe un numero\n" << std::endl;
        std::cin >> y[i];

        if (y[i] > 0)
        {
            std::cout << " y[" << i << "] = " << *(y + i) << "\n";
            *division += 1.0;
            *acumulador += y[i];

            std::cout << "quieres continuar?\n";
            std::cin >> *continuar;

            if (*continuar == 121)
            {

            }
            else if(*continuar == 110)
            {
                std::cout << "Aqui esta el promedio: \n";
                break;
            }
        }
    }
    float promedio = *acumulador / *division;
    std::cout << " promedio = " << promedio << "\n";
}

    int main(int argc, char** argv) // argument count conteo de argumentos
    {
        //apuntador a funcion
        void (*proceso)(int, char**) = nullptr;

        //preguntar al usuario la funcion deseada
        std::cout << "Funciones disponibles: \n";
        std::cout << "  1. Prueba de argumentos \n";
        std::cout << "  2. Promedio: \n";
        std::cout << "Ingresa el numero de la funcion que quieres \n";

        int seleccion;
        std::cin >> seleccion;
        std::cout << seleccion << "mem: " << &seleccion << "\n";
        if (seleccion == 1)
            proceso = &PruebaArgumentos;
        else if (seleccion == 2)
            proceso = &Promedio;
        else
        {
            std::cout << "Opcion no valida\n";
            main(argc, argv);
        }

        (*proceso)(argc, argv);


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
