#include <iostream>
#include <time.h>
#include <exception>

using namespace std;

class Pracownik_biura
{
public:
	string imie;
	string nazwisko;
	int nr_telefonu;

	void Aktywuj_rezerwacje();
	void Wybierz_kierowce();
};
