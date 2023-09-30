/**/

#include <iostream>
using namespace std;
int main()
{
     int number1;
     int number2;
     int number3;

     cout << "podaj pierwszą liczbę: ";
     cin >> number1; 
  cout << "podaj drugą liczbę: ";
     cin >> number2; 
  cout << "podaj trzecią liczbę: ";
     cin >> number3;

     if(number1 >= number2 && number1 >= number3){
        cout << "pierwsza liczba " << number1 << "jest największa";
     } else if (number2 >= number1 && number2 >= number3){
         cout << "druga liczba " << number2 << "jest największa";
} else cout << "trzecia liczba " << number3 << "jest największa";

// dokończ sprawdź