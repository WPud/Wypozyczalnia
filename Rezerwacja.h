#include <exception>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include<fstream>
#ifndef REZERWACJA_H
#define REZERWACJA_H

using namespace std;

class Rezerwacja
{
public:
	int id_rezerwacji;
	int dni_rezerwacji;
	int potwierdzenie_rez;

	void Rozpoczecie_rezerwacji();
	void Potwierdzenie_rezerwacji();
};
#endif
