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
