#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

extern bool is_array_palindrome(int integers[], int length);
extern int palindrome_sum(int integers[], int length);
extern int sum_integers(int integers[], int length);

int main(void){
  
  int array[5] = {1,0,0,0,1};
  int length = 5;
  
  bool palindrome = is_array_palindrome(array, length);
  int palSum = palindrome_sum(array, length);
  int sum = sum_integers(array, length);
  
  cout << palindrome << endl << palSum << endl << sum << endl;
}
