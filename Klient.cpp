#include <iostream>
#include <time.h>

#include "Rezerwacja.h"
#include "Klient.h"

using namespace std;

void Klient::Nowy_klient()
{
	cout << "\n\nPodaj dane\n" << endl;
	cout << "Podaj imie: ";
	cin >> imie;
	cout << "\nPodaj nazwisko: ";
	cin >> nazwisko;
	cout << "\nPodaj e-mail: ";
	cin >> mail;
	cout << "\nPodaj numer dowodu: ";
	cin >> nr_dowodu;
	cout << "\nPodaj numer telefonu: ";
	cin >> nr_telefonu;
}
