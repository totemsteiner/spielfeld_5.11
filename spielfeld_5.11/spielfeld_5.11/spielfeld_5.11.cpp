#include "pch.h"
#include <iostream>

void showfield();
int setfield();
void showdata();

const int Breite = 5;
const int Hoehe = 5;

struct S_feld_info {

	bool besetzt = 0;
	char Name[30];
};

int main(void)
{
	int Auswahl = 0;

	

	

	std::cout << "---------------" << std::endl;
	std::cout << "---Spielfeld---" << std::endl;
	std::cout << "---------------" << std::endl;
	
	std::cout << "1 - Spielfeld anzeigen" << std::endl;
	std::cout << "2 - Feld besetzen" << std::endl;
	std::cout << "3 - Felddaten anzeigen" << std::endl;
	std::cout << "4 - Spielfeld loeschen" << std::endl;
	std::cout << "5 - Spiel beenden" << std::endl;

	std::cin >> Auswahl;

	do {
		switch (Auswahl) {

		case (1):
			showfield();
			break;
		case(2):
			std::cout << "Feld besetzen" << std::endl;
			break;
		case(3):
			std::cout << "Felddaten anzeigen" << std::endl;
			break;
		case(4):
			std::cout << "Spielfeld loeschen" << std::endl;
			break;
		case(5):
			std::cout << "Spiel beenden" << std::endl;
			break;
		default:
			std::cout << "falsche Eingabe!" << std::endl;
			break;

		}
	} while (Auswahl = !5);

	return 0;
}

void showfield() {

	S_feld_info feld[Breite][Hoehe];
	int x, y;
	int zaehler = 0;

	for (y = 0; y < Hoehe; y++) {
		for (x = 0; x < Breite; x++) {
			if (feld[x][y].besetzt == true) {
				std::cout << "x";
			}
			else {
				std::cout << ".";
			}
			
		}
		std::cout << std::endl;
	}
}


