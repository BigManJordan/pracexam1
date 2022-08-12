//
//  main-2-2.cpp
//  pracexam1
//
//  Created by Jordan Le on 12/8/2022.
//

#include <stdio.h>
#include <iostream>

using namespace std;

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main(void){
  
  int binary[5] = {1,1,1,1,1};
  
  int decimal = bin_to_int(binary, 5);
  
  cout << decimal << endl;
}
