#include<bits/stdc++.h>
using namespace std ;

int occu(int arr[],int k ,int n ,int i){

    if (i>n){
        return -1;
    }
    if(arr[i] == k){
       cout << i<<" ";
    }

    return occu(arr,k ,n , i+1);
}

int main(){
   int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    occu(arr,2 ,9 ,0);
   return 0;
}