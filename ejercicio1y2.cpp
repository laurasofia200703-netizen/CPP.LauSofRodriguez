/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    cout << "=== EJERCICIOS PARA PRACTICAR ===\n";
     //ejercicio 1
    cout << "1. Crea un programa que encuentre la mediana de un array\n";
    
    int n;
    int aux;
    cout << "Ingresa el número de elementos: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Error: El número de elementos debe ser mayor a 0" << endl;
        return 1;
    }
    
    int array[n];
    
    for (int i= 0; i<n; i++)
    {
        cout<<"ingresa el elemento para el array:["<<i<<"]: ";
        cin>>array[i];
    }
    // metodo de la burbuja
    for (int i =0; i<n; i++)
    {
        for(int j =0; j<n-1; j++)
        {
            if (array[j]>array[j+1]) 
            {
                aux = array[j]; 
                array[j]=array[j+1]; 
                array[j+1]=aux; 
            } 
    }
}
    cout<<"\n Arreglo ordenadado de forma ascendente"<<endl;
    for (int i =0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
    
    cout<<"\n La mediana es: ";
    
    if (n%2 != 0) //impar
        cout<<array[n/2]<<endl;
        
    else { // par
       cout<<(array[n/2] + array[(n/2) - 1]) *1.0/2<<endl;
       
    }
    //ejercicio 2
    cout << "2. Implementa la búsqueda binaria en un array ordenado\n";
    int numeros[] = {1, 2, 3, 4, 5}; 
    int inferior, superior, mitad, num;
    char bandera = 'F';
    num = 3;
    inferior = 0;
    superior = 4;

   while(inferior <= superior){
        mitad = (inferior + superior) / 2;
        
        if(numeros[mitad] == num){
            bandera = 'V';
            break;  
        }
        if(numeros[mitad] > num){
            superior = mitad - 1;
        }
        if(numeros[mitad] < num){
            inferior = mitad + 1;
        }
    }

    if (bandera == 'V'){
        cout << "Numero " << num << " encontrado en posicion " << mitad << endl;
} else {
    cout << "Numero " << num << " no encontrado" << endl;
}
    

    return 0;

}




