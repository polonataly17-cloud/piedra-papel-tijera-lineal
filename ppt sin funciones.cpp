#include <iostream>

using namespace std;

int main() {
	int jugador1, jugador2;
	
	cout << "=== PIEDRA, PAPEL O TIJERA ===" << endl;
	cout << "1. Piedra" << endl;
	cout << "2. Papel" << endl;
	cout << "3. Tijera" << endl;
	
	cout << "\nJugador 1, elige una opcion (1-3): ";
	cin >> jugador1;
	
	cout << "Jugador 2, elige una opcion (1-3): ";
	cin >> jugador2;
	
	if (jugador1 == jugador2) {
		cout << "Empate" << endl;
	}
	else if ((jugador1 == 1 && jugador2 == 3) ||
		(jugador1 == 2 && jugador2 == 1) ||
		(jugador1 == 3 && jugador2 == 2)) {
		cout << "Gana el Jugador 1" << endl;
	}
	else if ((jugador2 == 1 && jugador1 == 3) ||
		(jugador2 == 2 && jugador1 == 1) ||
		(jugador2 == 3 && jugador1 == 2)) {
		cout << "Gana el Jugador 2" << endl;
		}
	else {
			cout << "Opcion invalida" << endl;
		}
		
		return 0;
}
