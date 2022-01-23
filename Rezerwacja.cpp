#include <exception>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include<fstream>

#include "Klient.h"
#include "Rezerwacja.h"

using namespace std;

void Rezerwacja::Rozpoczecie_rezerwacji()
{
	system("cls");
	cout << "\nWpisz jeszcze raz numer telefonu - bedzie to id twojej rezerwacji: ";
	cin >> id_rezerwacji;
	cout << "\nWpisz ilosc dni na jaka chcesz zarezerwowac samochod: ";
	cin >> dni_rezerwacji;
}

void Rezerwacja::Potwierdzenie_rezerwacji()
{
	cout << "Czy potwierdzasz rezerwacje? tak-1/nie-2\n" << endl;
	cin >> potwierdzenie_rez;
}