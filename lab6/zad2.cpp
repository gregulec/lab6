#include<iostream>
#include<string>
using namespace std;

struct osoba {
	string imie;
	string nazwisko;
	int wiek;
	string plec;
};

osoba* wczytaj() {
	osoba* dane1 = new osoba;
	cout << "Prosze podac imie ";
	cin >> dane1->imie;
	cout << "Prosze podac nazwisko ";
	cin >> dane1->nazwisko;
	cout << "Prosze podac wiek ";
	cin >> dane1->wiek;
	cout << "Prosze podadc plec ";
	cin >> dane1->plec;
	return  dane1;
}

void wypisz(osoba dane1) {
	cout << dane1.imie << endl;
	cout << dane1.nazwisko << endl;
	cout << dane1.wiek << endl;
	cout << dane1.plec << endl;
}


int main() {
	osoba *dane1 = wczytaj();
	wypisz(*dane1);
	delete dane1;
}
