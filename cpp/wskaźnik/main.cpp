#include <iostream>

using namespace std;
/*
prosty kalkulator z użyciem wskaźników 
Twoim zadaniem jest napisanie zadania w C++ który oblicza sume i różnicę dwóch liczb.
Liczby oraz wyniki bedą przekazywane za pomocą wskaźników.
Stwórz funkcje calculate przyjmuj a i b, sum, diff. 
*/
int main(){
    void calculate(float* a, float* b, float* sum, float* dif) {
	*sum = *a + *b;
	*dif = *a - *b;
}
    float a = 0;
    float b = 0;
    cout>>"Podaj 'a' i 'b'";
    cin<<a" "<<b;
    cout>>"a + b = " sum>>"a - b = " dif;











return 0;
}
