#include<bits/stdc++.h>
using namespace std;
// int majority(vector<int> &nums, int n){
//       int count =0;
//       int cand =-1;
//       for (int i = 0; i < n; i++){
//         if (count == 0){
//             cand = nums[i];
//       }
//       if (cand == nums[i]){
//             count++;
//         }else{
//            count--;
//         }
//     }
//     return cand;

// }
int majority(vector<int> &nums, int n){
    int mid = n/2;
  sort(nums.begin(),nums.end());
  return{ nums[mid]};

}

int main(){
   vector<int> nums = {3,2,3};
   int n=nums.size();
   cout <<majority(nums,n);
    return 0;
}

