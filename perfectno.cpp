#include<iostream>


class Solution {
public:
    bool checkPerfectNumber(int num) {
        
        int sum = 0 ;
        for (int i=1 ; num /2 >= i ; i++ ){
          if (num % i == 0 ){
            sum = sum + i ;
          }
          
        }
        return sum == num ;
    }
};