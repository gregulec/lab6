#include<iostream>
#include<string>
using namespace std;
int n;

struct osoba {
	string imie;
	string nazwisko;
	int wiek;
	string plec;
}a;
string imie[7] = { "Donald", "Jaroslaw", "Ewa", "Beata", "Magdalena", "Grzegorz", "Kazimierz" };
string nazwisko[7] = { "Tusk", "Kaczynski", "Kopacz", "Szydlo", "Ogorek", "Schetyna", "Marcinkiewicz" };
string plec[2] = { "mezczyzna", "kobieta" };


int main() {
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
	for (int i = 0; i < n - 1; i++)
	for (int j = 0; j < n - 1; j++)
	if (tab[j].wiek>tab[j + 1].wiek)
	{
		a = tab[j];
		tab[j] = tab[j + 1];
		tab[j + 1] = a;
	}
	cout << endl << endl << endl;

	for (int i = 0; i < n; i++) {
		cout << "Imie " << tab[i].imie << endl;
		cout << "Nazwisko " << tab[i].nazwisko << endl;
		cout << "Wiek " << tab[i].wiek << endl;
		cout << "Plec " << tab[i].plec << endl;
		cout << endl;
	}

	delete[]tab;
}