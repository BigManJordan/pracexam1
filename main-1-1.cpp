//
//  main-1-1.cpp
//  pracexam1
//
//  Created by Jordan Le on 12/8/2022.
//

#include <stdio.h>
#include <iostream>
using namespace std;

extern void print_matrix(int array[10][10]);

int main(void){
  
  int matrix[10][10] = {
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10}
  };
  
  print_matrix(matrix);
}
