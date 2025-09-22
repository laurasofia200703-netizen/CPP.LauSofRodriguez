/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std; 

int main(){
     // ejercicio 3 
    cout << "3. Desarrolla un programa que calcule la transpuesta de una matriz\n";
    int numeros [3][3];
    
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digita un numero["<<i<<"]["<<j<<"]";
            cin>>numeros[i][j];
        }
    }
    cout<<"Matriz original\n";
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<numeros[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Matriz traspuesta \n";
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
             cout<<numeros[j][i]<<" ";
        }
        cout<<"\n";
        
        //ejercicio 4
    cout << "4. Crea un sistema de inventario simple con arrays\n";
            
    
    }
        
    
    }
    return 0;
}