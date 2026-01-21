#include <iostream>
#include <cmath>

using namespace std;

main(){
   int a, b, c, Diskriminant;
   setlocale(LC_ALL, "Turkish");

   cout << "ax²+bx+c iþleminden a yý giriniz:";
   cin >> a;

   cout << "ax²+bx+c iþleminden b yý giriniz:";
   cin >> b;

   cout << "ax²+bx+c iþleminden c yý giriniz:";
   cin >> c;

   Diskriminant = (b * b) - (4 * a * c);
   cout << "Delta deðeri:" << Diskriminant << endl;

   if (Diskriminant < 0) {
       cout << "Delta sýfýrdan küçük olduðu için reel kök yok.";
   }
   else if (Diskriminant == 0) {
       cout << "Delta sýfýra eþit olduðu için çift katlý kök";
   }
   else {
       cout << "Delta sýfýrdan büyük olduðu için iki farklý kökü var";
   }
}






