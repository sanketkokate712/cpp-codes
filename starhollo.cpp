#include<iostream>
using namespace std ;

int main(){
   
    
    // char ch = 'A' ;
      int n=4;
     
   for (int i=1;i<=n;i++){
    
          cout<<" * " ;
         
          for(int k =1;k<=n-1;k++){
               if (i==1 || i==n){
                    cout << "*";
               }
               else {
                    cout << " ";
               }
          }

          cout<<" * " ;
        
        cout<<endl;
   }
     return 0;
}

