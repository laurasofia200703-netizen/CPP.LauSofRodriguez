/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    //ejercicio 5
    cout << "5. Implementa el algoritmo de ordenamiento por selección\n";
    int Num[] = {8, 15, 6, 27, 3}; 
    int i, j, aux, minimo;
    
    cout << "Array original: ";
    for(i = 0; i < 5; i++) {
        cout << Num[i] << " ";
    }
    cout << endl << endl;
    
    for(i = 0; i < 5; i++) {
        minimo = i;
        for(j = i + 1; j < 5; j++) {  
            if(Num[j] < Num[minimo]) {
               minimo = j; 
            }
        }
        aux = Num[i];
        Num[i] = Num[minimo];
        Num[minimo] = aux;
        
        // Mostrar estado actual
        cout << "Paso " << i + 1 << ": ";
        for(int k = 0; k < 5; k++) {  
            cout << Num[k] << " ";
        }
        cout << endl;
    }
    
    cout << "\nOrden ascendente final: ";
    for(i = 0; i < 5; i++) {
        cout << Num[i] << " ";
    }
    cout << endl;

    return 0;  
}