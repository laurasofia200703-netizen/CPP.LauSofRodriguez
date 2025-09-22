/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main(){
    //ejercicio 6
    cout << "6. Desarrolla un programa que encuentre elementos duplicados\n";
    int numbers[10];
    int numero;
    int contador = 0;
    
    cout << "Ingresa 10 numeros enteros: " << endl;
    for(int indice = 0; indice < 10; indice++) {
        cin >> numbers[indice];  
    }
    
    cout << "Ingresa el numero que se debe buscar: " << endl;
    cin >> numero;
   
    for(int indice = 0; indice < 10; indice++) {
        if(numbers[indice] == numero) {
            cout << "El numero " << numero << " se encuentra en la posicion " << indice << endl;
            contador++;
        }
    }
    
    if (contador > 0) {
        cout << "Se encontraron " << contador << " coincidencias" << endl;
    }
    else {
        cout << "El numero " << numero << " no se encontró en el array" << endl; 
    }

    return 0;
}
