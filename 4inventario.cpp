/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    // ejercicio 4 
    cout << "4. Crea un sistema de inventario simple con arrays\n";
    cout << "TIENDA Tiki\n";
    string productos[100];  
    int cantidades[100];    
    int total = 0;         
    int opcion;
    
    while(true) {
        cout << "\n=== INVENTARIO ===";
        cout << "\n1. Agregar producto";
        cout << "\n2. Ver todo";
        cout << "\n3. Salir";
        cout << "\nOpcion: ";
        cin >> opcion;
        
        if(opcion == 1) {
            // Agregar producto al invetario tienda Tiki
            cout << "Nombre: ";
            cin >> productos[total];
            cout << "Cantidad: ";
            cin >> cantidades[total];
            total++;
            cout << "Agregado!\n";
        }
        else if(opcion == 2) {
            // Mostrar array completo
            cout << "\nPRODUCTOS EN ARRAY:\n";
            for(int i = 0; i < total; i++) {
                cout << "Posicion " << i << ": " 
                     << productos[i] << " - " 
                     << cantidades[i] << " unidades\n";
            }
        }
        else if(opcion == 3) {
            break;
        }
        else {
            cout << "Opcion no valida\n";
        }
    }
    
    return 0;
}