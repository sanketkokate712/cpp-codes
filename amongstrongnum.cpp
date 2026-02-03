#include<iostream>

using namespace std ;

int main(){


     cout<<"enter a number -";
     int n,rem,sum=0;
    
   
     cin>>n;

     int temp=n;
while (n>0){
     rem=n%10;

     sum+=rem*rem*rem;

     
        n=n/10;

     
}
   if (temp==sum){
        cout<<"its amgstrong num";
        
   }else{  cout<<"its not amgstrong num";}

     return 0;
}

