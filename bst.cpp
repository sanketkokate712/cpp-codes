#include <bits/stdc++.h>
using namespace std ;


int binarys(int arr[],int n ,int k,int i){
   if (i>n){
    return -1;
   }
   if (arr[i]==k){
    return i;
   }
   return binarys( arr, n , k, i+1);
   
}

int main(){
 int arr[]={1,2,3,4,5,6,7};
 cout <<binarys( arr, 6 , 9, 0);
  
    return 0;
}