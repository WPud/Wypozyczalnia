#include <iostream>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <fstream>
#include <exception>

#include "Klient.h"
#include "Rezerwacja.h"
#include "Samochod.h"
#include "Kierowca.h"
#include "Pracownik_biura.h"
#include "Problem.h"

using namespace std;

class Klient;
class Rezerwacja;
class Samochod;
class Kierowca;
class Pracownik_biura;
class Problem;

int main()
{
	Klient k;
	Rezerwacja r;
	Samochod s;
	Kierowca kier;
	Pracownik_biura p;
	Problem prob;

	int opcja;

	cout << "WYPOZYCZALNIA SAMOCHODOW";
	cout << "\n\nWYBIERZ OPCJE";
	cout << "\n1. DOKONAJ REZERWACJI";
	cout << "\n2. ZGLOS PROBLEM\n";

	cin >> opcja;

		switch (opcja)
	{
	case 1:	
	{
		system("cls");
		cout << "REZERWACJA";
		k.Nowy_klient();
		r.Rozpoczecie_rezerwacji();
		s.wybierz_samochod();

		system("cls");
		
		cout << "\nCalkowita cena: " << r.dni_rezerwacji * s.cena << " zl\n\n";

		r.Potwierdzenie_rezerwacji();
		if (r.potwierdzenie_rez == 1)
		{
			system("cls");
			cout << "PRACOWNIK BIURA\n"; // przechodzimy do pracownika biura
			p.Aktywuj_rezerwacje();
			cout << "\n\nWybierz kierowce do rezerwacji o numerze id: "<<r.id_rezerwacji<< endl;
			kier.Dostepni_kierowcy();
			cout << endl;
			p.Wybierz_kierowce();

			system("cls");

			cout << "KIEROWCA\n";
			cout << "\nPotwierdz zlecenie o numerze id: " << r.id_rezerwacji <<" wybierajac 1 na klawiaturze: " <<endl;
			kier.Potwierdzenie();
			cout << "\n\nREZERWACJA AKTYWOWANA I POTWIERDZONA!" << endl;
		}
		else
			break; 

	
		break;
	}
	case 2:
	{
		system("cls");
		cout << "ZGLOSZENIE PROBLEMU";
		prob.Nowy_problem();
		if (prob.rodzaj == 1)
		{
			system("cls");
			s.wybierz_samochod();
			system("cls");
			cout << "PRACOWNIK BIURA\n";
			cout << "Wybierz kierowce na zastepstwo: " << endl;
			kier.Dostepni_kierowcy();
			cout << endl;
			p.Wybierz_kierowce();
			cout << endl << endl << "Problem rozwiazany - wymiana prawidlowa" << endl;
		}
		if (prob.rodzaj == 2)
		{
			system("cls");
			cout << "Wpisz liczbe dni na ile chcesz przezluzyc samochod: " << endl;
			cin >> r.dni_rezerwacji;
			s.wybierz_samochod();
			system("cls");
			cout << "\ncena dodatkowego najmu samochodu: " << r.dni_rezerwacji * s.cena << " zl\n\n";
			cout << endl << "Problem rozwiazany - przedluzenie najmu" << endl;

		}

		break;
	}

	default:
		cout << "Zly wybor. Nacisnij jakikolwiek przycisk aby kontynuowac";
		break;
	}

};