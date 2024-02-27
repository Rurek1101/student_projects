#include <iostream>

using namespace std;

int main(){
	float z;
	float i;
	float cp;
	float sp;
	float pb;
	float paliwo;
	float cena;
	float cenaostateczna;
	float iloscpostojow;
	cout<<"podaj odległość podróży w kilometrach"<<endl;
	cin>>z;
	cout<<"podaj ilość pasażerów"<<endl;
	cin>>i;
	cout<<"podaj cenę paliwa za litr"<<endl;
	cin>>cp;
	cout<<"średnia spalania samochodu na 100km"<<endl;
	cin>>sp;
	cout<<"pojemność baku w litrach"<<endl;
	cin>>pb;
	paliwo = z * sp / 100 ;
	cena = paliwo * cp ;
	cenaostateczna = cena / i ;
	iloscpostojow = paliwo / pb ;
	cout<<"cena paliwa wyniesie:"<< cenaostateczna <<endl<<"postojów na stacji:"<< iloscpostojow <<endl;
	return 0;

}
