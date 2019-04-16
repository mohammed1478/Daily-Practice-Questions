#include <iostream>
using namespace std;

/* Given an array of integers, find the first 
missing positive integer in linear time and constant space. In other words, 
find the lowest positive integer that does not exist in the array. The array can 
contain duplicates and negative numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

You can modify the input array in-place.*/

void reArrange(int *x[], int s); // rearrange array from smallest value o biggest value
int missing(int x[], int s); // returns the smallest positive missing vlaue in the array

int main (){
  int a[4]= {3, 4, -1, 1};
  int b[3]= {1, 2, 0}

  reArrange(&a,4);
  reArrange(&b,3);

cout << missing(a,4);
cout << missing(b,3);
  
  
}

void reArrange(int *x[], int s){
}

int missing(int x[], int s){

}


