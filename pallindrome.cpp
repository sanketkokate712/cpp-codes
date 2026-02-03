#include<iostream>
using namespace std ;
int n;
int palindrome(int n){
      cout<< "enter a number = "<<endl;
       cin>>n;
      int sum=0;
    int orig=n;
      while (n>0){
      int rem = n%10;
      sum = sum*10+rem;
            n=n/10;
      }
      if (sum==orig){
          cout << "is the palindrom ";
            return orig;
      }
      cout <<" isn't the palindrome ";
      return orig;
}
int main(){
 
      cout << palindrome(n)<<endl;
      
     return 0;
}

// best case palindrome 
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x%10==0 && x!=0)){
            return false;
        }
        int ne = x;
        int rev=0;
        while (x > rev){
         
             rev = rev * 10 + x%10;
           x = x/10 ;
        }

         return (x == rev || x == rev / 10);
    }
};