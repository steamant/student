#include <iostream>
using namespace std;
int main()
{
     int pizzaN;
     int guestsN;

    cout << "podaj liczbę kawałków pizzy: ";
    cin >> pizzaN;
      if (pizzaN <= 0) {
         cout << "wpisałeś liczbę ujemną";
    } else if (guestsN >=0) {
       cout << "czyżbyś wpisał zero? No, no... Nie ma pizzy!";
    }

    cout << "podaj liczbę gości: ";
    cin >> guestsN;
    if (guestsN <= 0) {
         cout << "wpisałeś liczbę ujemną";
    } else if (guestsN =0) {
         cout << "czyżbyś wpisał zero? Nie ma przyjaciół...";
    }
  
if (guestsN>pizzaN)
{
    int brak = guestsN-pizzaN; 
    cout << "nie ma pizzy dla wszystkich gości! zabraknie "<< brak << "kawałków!";
}


  int rest = pizzaN % guestsN;
  int noRestDivide = pizzaN - rest/guestsN;

   cout << "powinno być " << noRestDivide << " kawałków pizzy na każdego gościa";
   if (rest == 0) cout << "pozostaje " << rest << " kawałków pizzy dla gospodarza";

}