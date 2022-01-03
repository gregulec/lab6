#include<iostream>
#include<string>
using namespace std;

struct osoba {
	string imie;
	string nazwisko;
	int wiek;
	string plec;
};

int main() {
	osoba*o1 = new osoba;
	cout << "Prosze podac imie=";
	cin >> o1->imie;
	cout << "Prosze podac nazwisko=";
	cin >> o1->nazwisko;
	cout << "Prosze podac wiek=";
	cin >> o1->wiek;
	cout << "Prosze podac plec=";
	cin >> o1->plec;
	cout << endl;
	osoba* o2 = new osoba;
	cout << "Prosze podac imie=";
	cin >> o2->imie;
	cout << "Prosze podac nazwisko=";
	cin >> o2->nazwisko;
	cout << "Prosze podac wiek=";
	cin >> o2->wiek;
	cout << "Prosze podac plec=";
	cin >> o2->plec;
	cout << endl;
	osoba*o3 = new osoba;
	cout << "Prosze podac imie=";
	cin >> o3->imie;
	cout << "Prosze podac nazwisko=";
	cin >> o3->nazwisko;
	cout << "Prosze podac wiek=";
	cin >> o3->wiek;
	cout << "Prosze podac plec=";
	cin >> o3->plec;
	cout << endl;
	cout << o1->imie << endl;
	cout << o1->nazwisko << endl;
	cout << o1->wiek << endl;
	cout << o1->plec << endl;
	cout << endl;
	cout << o2->imie << endl;
	cout << o2->nazwisko << endl;
	cout << o2->wiek << endl;
	cout << o2->plec << endl;
	cout << endl;
	cout << o3->imie << endl;
	cout << o3->nazwisko << endl;
	cout << o3->wiek << endl;
	cout << o3->plec << endl;
}
#include<iostream>
#include<string>
using namespace std;

struct osoba {
	string imie;
	string nazwisko;
	int wiek;
	string plec;
};

int main() {
	osoba*o1 = new osoba;
	cout << "Prosze podac imie ";
	cin >> o1->imie;
	cout << "Prosze podac nazwisko ";
	cin >> o1->nazwisko;
	cout << "Prosze podac wiek ";
	cin >> o1->wiek;
	cout << "Prosze podac plec ";
	cin >> o1->plec;
	cout << endl;
	osoba* o2 = new osoba;
	cout << "Prosze podac imie ";
	cin >> o2->imie;
	cout << "Prosze podac nazwisko ";
	cin >> o2->nazwisko;
	cout << "Prosze podac wiek ";
	cin >> o2->wiek;
	cout << "Prosze podac plec ";
	cin >> o2->plec;
	cout << endl;
	osoba*o3 = new osoba;
	cout << "Prosze podac imie ";
	cin >> o3->imie;
	cout << "Prosze podac nazwisko ";
	cin >> o3->nazwisko;
	cout << "Prosze podac wiek ";
	cin >> o3->wiek;
	cout << "Prosze podac plec ";
	cin >> o3->plec;
	cout << endl;
	cout << o1->imie << endl;
	cout << o1->nazwisko << endl;
	cout << o1->wiek << endl;
	cout << o1->plec << endl;
	cout << endl;
	cout << o2->imie << endl;
	cout << o2->nazwisko << endl;
	cout << o2->wiek << endl;
	cout << o2->plec << endl;
	cout << endl;
	cout << o3->imie << endl;
	cout << o3->nazwisko << endl;
	cout << o3->wiek << endl;
	cout << o3->plec << endl;
}
