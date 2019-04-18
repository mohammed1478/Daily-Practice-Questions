#include <iostream>
using namespace std;

/* Find a number that is a product of 3 digit number which is a palindrome  */

bool palindrome (int n);

int main(){
  int current = 0;
  int bigNum = 0;
  int ans =0;
  for (int i = 100; i < 1000; i++){
    for (int j = 100; j <1000; j++ ){
      current = i * j;
      if (current > bigNum){
        bigNum = current;
        if (palindrome(bigNum)){
          ans = bigNum;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}
bool palindrome (int n){
  int nReversed = 0; int holdN;
  holdN = n;
  while( n > 0 ){
    nReversed = nReversed*10 + n%10;
    n = n /= 10;
  }
  if (holdN == nReversed) return true;
  return false;
}
