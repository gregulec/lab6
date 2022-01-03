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
string imie[7] = { "Donald", "Jaroslaw", "Ewa", "Beata", "Magdalena", "Grzegorz", "Kazimierz" };
string nazwisko[7] = { "Tusk", "Kaczynski", "Kopacz", "Szydlo", "Ogorek", "Schetyna", "Marcinkiewicz" };
string plec[2] = { "mezczyzna", "kobieta" };

void wypelnienie()
{
	cout << "Podaj liczbe osob dla ktorych chcesz wyswietlic dane ";
	cin >> n;
	osoba*tab = new osoba[n];
	for (int i = 0; i < n; i++) {
		tab[i].imie = imie[rand() % 7];
		tab[i].nazwisko = nazwisko[rand() % 7];
		tab[i].wiek = rand() % 100;
		tab[i].plec = plec[rand() % 2];
	}
	for (int i = 0; i < n; i++) {
		cout << "Imie " << tab[i].imie << endl;
		cout << "Nazwisko " << tab[i].nazwisko << endl;
		cout << "Wiek " << tab[i].wiek << endl;
		cout << "Plec " << tab[i].plec << endl << endl;
	}
	delete[]tab;
}

int main() {
	wypelnienie();
}