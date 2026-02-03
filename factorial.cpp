#include<iostream>

using namespace std ;

int main(){

int fact=1;
     cout<<"enter a number for factorial-";
     int n;
     
     cin>>n;

     for (int i=1;i<=n;i++){
        
         
          fact=fact*i;
     }
    
     cout<<"factorial is ="<<fact<<endl;

     return 0;
}

