#include <iostream>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include<fstream>

#include "Pracownik_biura.h"
#include "Kierowca.h"
#include "Rezerwacja.h"

using namespace std;

void Pracownik_biura::Aktywuj_rezerwacje()
{
	int x;
	cout << "Aby aktywowac rezerwacje nacisnij 1: ";
	cin >> x;
	if (x == 1) cout << "\nRezerwacja aktywowana!";

}

void Pracownik_biura::Wybierz_kierowce()
{
	int opcja;
	cin >> opcja;
	switch (opcja)
	{
	case 1:
		cout << "\nWybrany kierowca do rezerwacji:\n\nid: 1\nimie: Adam\nnazwisko: Kowalski\nnr.telefonu: 100100100";
		break;

	case 2:
		cout << "\nWybrany kierowca do rezerwacji:\n\nid: 2\nimie:Mateusz\nnazwisko: Lis\nnr.telefonu: 200200200";
		break;

	default:
		cout << "zly wybor";
		break;
	}
}
