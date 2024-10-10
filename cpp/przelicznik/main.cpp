#include <iostream>

using namespace std;

int main(){

float liter;
cout<<"Ile litrów wariacie?"<<endl;
cin>>liter;
if (liter>0) {
    float gallon = (liter * 0.264172052);
    if (gallon<1) {
	cout<<liter<<" litrów to dokładnie "<<gallon<<" galona";
	}
    if (gallon>1) {
	cout<<liter<<" litrów to dokładnie "<<gallon<<" galonów";
}
}
if (liter<0) {
	cout<<"jednostka objętości nie może być ujemna :)";
}
return 0;
}
