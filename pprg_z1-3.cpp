#include <iostream>
using namespace std;
int main()
{
     int number;
    cout << "podaj liczbę całkowitą: ";
    cin >> number;
    if (number %2 == 0) {
        cout<<"wpisałeś liczbę parzystą";
    } else if (number %2 != 0) {
        cout << "wpisałeś liczbę nieparzystą";
    }
    else if (number == 0){
            cout << "czyżbyś wpisał zero? No, no...";
    }
}