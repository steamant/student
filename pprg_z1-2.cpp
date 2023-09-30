#include <iostream>
using namespace std;
int main()
{
     int number;
    cout << "podaj liczbę całkowitą: ";
    cin >> number;
    if (number <= 0) {
        cout<<"wpisałeś dodatnią liczbę";
    } else if (number >=0) {
        cout << "wpisałeś liczbę ujemną";
    }
    else {
            cout << "czyżbyś wpisał zero? No, no...";
    }
}
