#include <iostream>
using namespace std;

bool ok (int a[],int  size, int match);


int main(){
  int a[4] = {10,15,3,7};
  int b[4] = {10,15,3,0};
  int k = 17;
  cout << boolalpha;
  cout << ok(a,4,k)<< endl;
  cout << ok(b,4,k)<< endl;
  

return 0;
}

bool ok (int a[],int  size, int match){
  bool valid = false;
  for (int i = 0; i < size; i++){
    for (int j = 0; j < size ; j++){
      if (i == j) j++; // makes sure elements doents add itself.
      if (a[i]+ a[j] == match) valid = true;
    }
  }
return valid;
}
