#include <iostream>
#include <time.h>
#include <exception>

using namespace std;

class Kierowca
{
public:

	int id_kierowcy;
	string imie;
	string nazwisko;
	int nr_telefonu;

	void Dostepni_kierowcy();
	void Potwierdzenie();
};
