#include <iostream>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include<fstream>

#include "Kierowca.h"

using namespace std;

void Kierowca::Dostepni_kierowcy()
{
	cout << "\nDostepni kierowcy: " << endl;

	cout << "\nid: 1\nimie: Adam\nnazwisko: Kowalski\nnr.telefonu: 100100100";
	cout << "\n\nid: 2\nimie:Mateusz\nnazwisko: Lis\nnr.telefonu: 200200200";

}
void Kierowca::Potwierdzenie()
{
	int x;
	cin >> x;
	cout << "\nRezerwacja potwierdzona przez kierowce.";
}



