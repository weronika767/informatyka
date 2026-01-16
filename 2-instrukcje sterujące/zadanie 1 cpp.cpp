#include <iostream>
using namespace std;
int main(){
switch ( zmienna ) {
	case wartosc_1:
		// blok kodu, jeśli zmienna== wartosc_1
		break;
		
		case wartosci_2:
			//blok kodu,jesli zmienna==wartosc_2
			break;
			
			//Inne przypadki...
			
			case wartos_n:
				//blok kodu,jesli zmienna==wartosci_n
				break;
				
				default:
					//blok kodu,jesli zmienna nie pasuje do zadnej z wartosci 
					break;
		
		int dzien;
		
		cout<<"Podaj numer dnia tygodnia (1-7):";
		cin>>dzien;
		
		switch(dzien) {
			case 1:
				cout<<"Poniedziałek"<<endl;
				break;
				case 2:
					cout<<"Wtorek"<<endl;
					break;
					case 3:
						cout<<"Sroda"<<endl;
						break;
						case 4:
							cout<<"Czwartek"<<endl;
							break;
							case 5:
								cout<<"Piątek"<<endl;
								break;
								default:
									cout<<"Weekend"<<endl;
									break;
		}			
}