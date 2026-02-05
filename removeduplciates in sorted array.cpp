#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if ( nums.size()==0)return 0;
        int k=1;
        for(int i=1 ; i < nums.size() ; i++ ){
            if (nums[i]!=nums[i-1]){
               
              nums[k]=nums[i];
              k++;
            }
        }
        return k;
        // int st = 0;
        // int en = nums.size()-1;

        // for ( int i =0 ; i )
    }
};