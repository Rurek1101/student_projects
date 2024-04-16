#include <iostream>

using namespace std;

bombel_sort(int x[],int y){
for(int i=0;i<n;i++)
    for(int j=1;j<y;j++)
    if(x[j-1]>x[j])
	swap(x[j-1],x[j]);
}
int main(){
int x,y;
cout<<"Witaj moge za ciebie posortowac liczby"endl;
cout<<"Ile liczb zamierzasz posortowac";
cin>>y;
x = new int [n];
for(int i=0;i<n;i++)
    cin>>x[i];
bombel_sort(x,n);
for(int i=0;i<n;i++)
    cout<<x[i]<<",";

    return 0;
}