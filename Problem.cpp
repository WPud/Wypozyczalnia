#include <iostream>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include<fstream>

#include "Problem.h"

using namespace std;

void Problem::Nowy_problem()
{
	cout << "\n\nPodaj rodzaj problemu: " << endl;
	cout << "1. problem z samochodem - wymiana" << endl;
	cout << "2. przedluzenie najmu" << endl;

	cin >> rodzaj;

	switch (rodzaj)
	{
	case 1: cout << "PROBLEM Z SAMOCHODEM" << endl;
		break;
	case 2: cout << "PRZEDLUZENIE NAJMU" << endl;
		break;
	default:
		break;
	}
}