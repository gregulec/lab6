#include<iostream>
#include<string>
using namespace std;
int n;

struct osoba {
	string imie;
	string nazwisko;
	int wiek;
	string plec;
};

int main() {
	cout << "Prosze podac ilosc obiektow w tablicy=";
	cin >> n;
	osoba*tab = new osoba[n];
	for (int i = 0; i < n; i++) {
		cout << "Prosze podac imie ";
		cin >> tab[i].imie;
		cout << "Prosze podac nazwisko ";
		cin >> tab[i].nazwisko;
		cout << "Prosze podac wiek ";
		cin >> tab[i].wiek;
		cout << "Prosze podac plec ";
		cin >> tab[i].plec;
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		cout << "Imie " << tab[i].imie << endl;
		cout << "Nazwisko " << tab[i].nazwisko << endl;
		cout << "Wiek " << tab[i].wiek << endl;
		cout << "Plec " << tab[i].plec << endl;
		cout << endl;
	}
	delete[]tab;
}
