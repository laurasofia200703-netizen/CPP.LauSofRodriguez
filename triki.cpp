/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    char tablero[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    int fila, columna;
    char jugador = 'X';
    int turnos = 0;
    
    cout << "TIC TAC TOE - triki cpp\n";
    
    while(true) {
        // tablero
        cout << "\n";
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                cout << tablero[i][j];
                if(j < 2) cout << "|";
            }
            cout << "\n";
            if(i < 2) cout << "-----\n";
        }
        
        // Pedir movimiento
        cout << "Jugador " << jugador << ": ";
        cin >> fila >> columna;
        
        // Verifica y haz movimientos xd
        if(fila >= 1 && fila <= 3 && columna >= 1 && columna <= 3 && 
           tablero[fila-1][columna-1] == ' ') {
            tablero[fila-1][columna-1] = jugador;
            turnos++;
        } else {
            cout << "Movimiento no valido!\n";
            continue;
        }
        
        // Verifica ganado
        bool ganador = false;
        // Filas
        for(int i = 0; i < 3; i++) {
            if(tablero[i][0] == jugador && tablero[i][1] == jugador && tablero[i][2] == jugador)
                ganador = true;
        }
        // Columnas
        for(int j = 0; j < 3; j++) {
            if(tablero[0][j] == jugador && tablero[1][j] == jugador && tablero[2][j] == jugador)
                ganador = true;
        }
        // Diagonales
        if(tablero[0][0] == jugador && tablero[1][1] == jugador && tablero[2][2] == jugador)
            ganador = true;
        if(tablero[0][2] == jugador && tablero[1][1] == jugador && tablero[2][0] == jugador)
            ganador = true;
        
        if(ganador) {
            cout << "\n¡Felicidades jugador " << jugador << " ganaste una empanada!\n";
            break;
        }
        
        // Verificar empate
        if(turnos == 9) {
            cout << "\n¡Empate!\n";
            break;
        }
        
        // Cambiar jugador
        jugador = (jugador == 'X') ? 'O' : 'X';
    } // <-- Esta llave cierra el while
    
    // Mostrar tablero final
    cout << "\nTablero final:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << tablero[i][j];
            if(j < 2) cout << "|";
        }
        cout << "\n";
        if(i < 2) cout << "-----\n";
    }
    
    return 0;
} 