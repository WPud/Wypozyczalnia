#include <iostream>
#include <time.h>
#include <exception>

#include "Rezerwacja.h"

using namespace std;

class Klient
{
public:
	string imie;
	string nazwisko;
	string mail;
	string nr_dowodu;
	int nr_telefonu;

	void Nowy_klient();
};
