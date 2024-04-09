#include <iostream>

using namespace std;

int main(){
	srand(time(NULL));
	cout<<rand()<<endl;
	cout<<rand()<<endl;
	//losowanie w zakresie
	int ile_liczb_w_przedziale = 2;
	int liczba_startowa = 1;
	int los = rand()%ile_liczb_w_przedziale + liczba_startowa;
	cout<<los;
	return 0;
}
