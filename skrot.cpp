 #include <iostream>
using namespace std;
int main(){
	
	// tu wstawiamy cały program	
	
	int liczba = 1; // stworzenie zmiennej liczba i zapisanie w niej liczby 1 (nazwa "liczba" moze byc dowolna
	
	float liczba2 = 1.32; // zmienna ktora przechowuje liczbe z przecinkiem
	char znak = '#';  // zmienna ktora przechowuje jeden pojedynczy znak
	string ciagZnakow = "Znaki";   // zmienna ktora przechowuje ciag znakow
	
	cout << "Jakiś tekst do wyświetlenia"; // wyświetlenie tekstu w konsoli
	
	//---------------------------------
	int liczba3;
	cin >> liczba3; // pobieramy cos od uzytkownika, co wpisze w konsoli
	
	
	//---------------------------------
	int liczba4 = 5;
	if( liczba4 >= 4) {	// sprawdzamy czy wartosc ktora ma zmienna liczba4 jest wieksza od 4 jezeli tak to wykona to co mamy miedzy klamrami
		// co ma sie stac jezeli liczba4 bedzie wieksza lub rowna 4
	}
	else if (liczba5 <= 3){ // else if - w ten sposob sprawdzamy kolejny warunek
		// co ma sie stac jezeli liczba5 bedzie mniejsza lub rowna 3
	}
	else{ // w przeciwnym wypadku - jezeli zaden z powyzszych warunkow sie nie spelnil to wtedy wykona sie else
		
	}
	
	//---------------------------------
	int liczba6 = 6;
	switch(liczba6){ // sprawdzamy jaka wartosc ma zmienna liczba6
		case 1: // sprawdzamy czy zmienna liczba6 ma wartosc 1
			// co ma sie stac jak bedzie rowna 1
			break; // zakonczyc dzialanie switcha
		case 4:		// sprawdzanie kolejnej wartosci - czy liczba6 ma wartosc 4
			cout << "tekst";
			break;
	}
	
	
	//---------------------------------
	int liczba7 = 0;
	
	while(liczba7 <= 4){	// petla while bedzie nam wielokrotnie sprawdzac czy liczba jest mniejsza od 4. Jezeli jest to wykona co jest w klamrach i sprawdzi ponownie
		cout << liczba7 << ", "; // wysiwtlimy sobie wartoc zmiennej liczba7 oddzielone przecinkami 
		liczba += 1; // zwiekszenie wartosci zmiennej liczba7 o 1 aby petla sie kiedys skonczyla 
	}
	// ------------
	do{	// najpierw wykona to co jest po slowie do miedzy klamrami, czyli zawsze wykona sie minimum raz
		// cos ma zrobic
		cout << liczba7 << ", ";
		liczba += 1; // zwiekszenie wartosci zmiennej liczba7 o 1 aby petla sie kiedys skonczyla 
	}while(liczba7 <= 4); // warunek jeżeli się spełni to wróci do "do" i wykona sie ponownie
	
	
	//---------------------------------
	
    return 0;
}