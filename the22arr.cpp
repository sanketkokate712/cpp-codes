#include<iostream>
using namespace std ;
         
int  indexofnum(int *arr,int n){
      cout<< "arr[]=";
      for (int i=0;i<n;i++){
               cout<<arr[i]<<",";}

      int index=7;
      
         cout << "index = " <<index<<endl ;
         for (int i=0;i<n;i++){
               
                  if (arr[i]==index){
                     
                        return i ;
                  // }
               }
         }
      return -1;
      //   cout << "false "<< endl;
}
 int matrix12(int mat[][3],int n ,int m,int indx){
       int sum=0;
        for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                     if (mat[i][j]==indx){
                           sum++;
                     }
               }
        }
       return sum;
 }

int main(){
      int mat[][3]={{7,5,7},{7,0,7}};
      int n = 2;
      int m = 3;
      cout << matrix12(mat,n,m,7)<<endl;
     return 0;
}
