



          #include <iostream>
         #include <cmath>
          #include <conio.h>

    using namespace std;

                   // Funciones para dibujar las formas



                        void dibujarCuadrado(int lado) {
                        for (int i = 0; i < lado; ++i) {
                        for (int j = 0; j < lado; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

void dibujarCirculo(int radio) {
    int centro = radio;
    for (int i = 0; i <= 2 * radio; ++i) {
        for (int j = 0; j <= 2 * radio; ++j) {
            if (sqrt(pow(i - centro, 2) + pow(j - centro, 2)) <= radio) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

               void dibujarTriangulo(int altura) {
                      for (int i = 0; i < altura; ++i) {
                          for (int j = 0; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

    int main() {
                    int opcion;
                    int tamano;
                    char tecla;





    do {
        cout << "Menú:" << endl;
        cout << "F1. Dibujar cuadrado" << endl;
        cout << "F2. Dibujar círculo" << endl;
        cout << "F3. Dibujar triángulo" << endl;
        cout << "F4. Salir" << endl;
        cout << "Elige una opción: ";

        tecla = getch();



                              switch(tecla) {
            case 59: // F1
                cout << "Ingrese el tamaño del lado del cuadrado: ";
                cin >> tamano;
                dibujarCuadrado(tamano);
                break;
            case 60: // F2
                cout << "Ingrese el radio del círculo: ";
                cin >> tamano;
                dibujarCirculo(tamano);
                break;
                   case 61: // F3
                cout << "Ingrese la altura del triángulo: ";
                cin >> tamano;
                dibujarTriangulo(tamano);
                break;

                   case 62: // F4
                cout << "Saliendo del programa...";
                break;
            default:
                cout << "Tecla no válida. Por favor, intenta de nuevo." << endl;
        }
    } while (tecla != 62);

    return 0;
}
