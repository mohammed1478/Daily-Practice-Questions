#include <iostream>
using namespace std;

/* Find the sum of all the numbers below 1000 that is divisible by 3 or 5 */

int main(){
   int ans = 0;
   for (int i = 0; i <1000 ; i++){
     if ( i%3 == 0 || i%5 == 0) ans += i;
 }
 cout << ans << endl;
 return 0;
 }
