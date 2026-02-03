#include<iostream>

using namespace std ;

int main(){

int fact=1;
     cout<<"enter a number for table-";
     int n;
     
     cin>>n;

     for (int i=1;i<=10;i++){
        
         
          fact=n*i;
          cout<<"factorial factors ="<<fact<<endl;
     }
    


     return 0;
}

