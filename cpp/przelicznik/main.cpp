#include <iostream>

using namespace std;

int main(){

float liter;
cout<<"Ile litrów wariacie? Przelicze je na galony"<<endl;
cin>>liter;
if (liter>0) {
    float gallon = (liter * 0.264172052);
    if (gallon<1) {
	cout<<liter<<" litrów to dokładnie "<<gallon<<" galona"<<endl;
	}
    if (gallon>1) {
	cout<<liter<<" litrów to dokładnie "<<gallon<<" galonów"<<endl;
}
}
if (liter<0) {
    cout<<"Jednostka objętości nie może być ujemna =)"<<endl;
}
return 0;
}
