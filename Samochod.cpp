#include <exception>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include<fstream>

#include "Samochod.h"
#include "Rezerwacja.h"

void Samochod::wybierz_samochod()
{
    cout << "\nWybierz samochod: ";
	int wybor;

    cout << "\n1. Klasa C" << endl << "Toyota Corolla lub podobne" << endl;
    cout << "Skrzynia manualna" << endl;
    cout << "Cena 89zl za dobe" << endl;

    cout << "\n2. Klasa C" << endl << "Mercedes B Klasa lub podobne" << endl;
    cout << "Skrzynia automatyczna" << endl;
    cout << "Cena 119zl za dobe" << endl;
   
    cout << "\n3. Klasa D" << endl << "Hyundai i30 lub podobne" << endl;
    cout << "Skrzynia manualna" << endl;
    cout << "Cena 119zl za dobe" << endl;

    cout << "\n4. Klasa D" << endl << "Mazda 6 lub podobne" << endl;
    cout << "Skrzynia automatyczna" << endl;
    cout << "Cena 229zl za dobe" << endl;

    cin >> wybor;

	switch (wybor)
	{
    case 1:
        cout << "\nTwoj wybor to:\nKlasa C" << endl << "Toyota Corolla lub podobne" << endl;
        cout << "KR 0001" << endl;
        cout << "Cena 89zl za dobe" << endl;
        marka = "Toyota";
        rejestracja = "KR 0001";
        model = "Corolla";
        cena = 89;
        break;

    case 2:
        cout << "\nTwoj wybor to:\nKlasa C" << endl << "Mercedes B Klasa lub podobne" << endl;
        cout << "KR 0002" << endl;
        cout << "Cena 119zl za dobe" << endl;
        marka = "Mercedes";
        rejestracja = "KR 0002";
        model = "B Klasa";
        cena = 119;
        break;

    case 3:
        cout << "\nTwoj wybor to:\nKlasa D" << endl << "Hyundai i30 lub podobne" << endl;
        cout << "KR 0003" << endl;
        cout << "Cena 119zl za dobe" << endl;
        marka = "Hyundai";
        rejestracja = "KR 0003";
        model = "i30";
        cena = 119;
        break;

    case 4:
        cout << "\nTwoj wybor to:\nKlasa D" << endl << "Mazda 6 lub podobne" << endl;
        cout << "KR 0004" << endl;
        cout << "Cena 229zl za dobe" << endl;
        marka = "Mazda";
        rejestracja = "KR 0004";
        model = "6";
        cena = 229;
        break;

    default: cout << "Podales zly wybor auta" << endl;

	}

}