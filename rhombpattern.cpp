#include<iostream>
using namespace std ;

int main(){
 
      int n=5;
    int i;
   for ( i=1;i<=n;i++){
         for(int k =1;k<=n-i;k++){
              cout << " ";

         }
          for(int k =1;k<=n;k++){
               cout << "*";
          
          }
                  cout<<endl;
               }
   
     return 0;
}
