#include "pch.h"
#include <iostream>

void showfield();
void setfield();
void showdata();
void deletefield();

const int Breite = 5;
const int Hoehe = 5;

struct S_feld_info {

	bool besetzt = 0;
	char Name[30];
};

S_feld_info feld[Breite][Hoehe];

int main()
{
	int Auswahl = 0;


	std::cout << "---------------" << std::endl;
	std::cout << "---Spielfeld---" << std::endl;
	std::cout << "---------------" << std::endl;
	do {
		std::cout << "1 - Spielfeld anzeigen" << std::endl;
		std::cout << "2 - Feld besetzen" << std::endl;
		std::cout << "3 - Felddaten anzeigen" << std::endl;
		std::cout << "4 - Spielfeld loeschen" << std::endl;
		std::cout << "5 - Spiel beenden" << std::endl;

		std::cin >> Auswahl;


		switch (Auswahl) {

		case (1): {
			showfield();
		}break;
		case(2): {
			setfield();
		}break;
		case(3): {
			showdata();
		}break;
		case(4): {
			deletefield();
		}break;
		case(5): {
			std::cout << "Spiel beenden" << std::endl;
		}break;
		default:
			std::cout << "falsche Eingabe!" << std::endl;
			break;

		}
	} while (Auswahl != 5);

	return 0;
}

void showfield() {

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

void setfield() {

	int x, y;
	std::cout << "X-Position (1-5): " << std::endl;
	std::cin >> x;

	std::cout << "Y-Position (1-5): " << std::endl;
	std::cin >> y;

	std::cout << "Name: " << std::endl;
	std::cin.ignore();
	std::cin.get(feld[x - 1][y - 1].Name, 29);
	feld[x - 1][y - 1].besetzt = true;
}

void showdata() {

	int x = 0;
	int y = 0;
	do {
		std::cout << "X-Position (1-5): " << std::endl;
		std::cin >> x;
	} while (x < 1 || x > Breite);

	do {
		std::cout << "Y-Position (1-5): " << std::endl;
		std::cin >> y;
	} while (y < 1 || y > Breite);



	feld[x - 1][y - 1].besetzt = true;

	if (feld[x - 1][y - 1].besetzt == false) {
		std::cout << "Dieses Feld ist noch nicht besetzt" << std::endl;
	}
	else {
		std::cout << "Feld ist besetzt mit: " << feld[x - 1][y - 1].Name << std::endl;
	
	}
}

void deletefield() {
	
	for (int y = 0; y < Hoehe; y++) {
		for (int x = 0; x < Breite; x++) {
			feld[x][y].besetzt = false;
		}
	}

}