#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.size();
        // int ans=0 , j = 0 , x = INT_MIN;
        int l =0 , r = 0 , blank = 0 ; 
        for (int i =0 ; i < n ; i++){
                 if (moves[i]=='L')  l++;
                 if (moves[i]=='R')  r++;
                 if (moves[i]=='_')  blank++;
        }
        return abs(l-r) +blank;
        
    }
};
// if ( moves[i]=='R' || moves[i+1]=='_' || moves[i]=='_' ){
//                 ans++;
//             }
//             else if ( moves[i]=='L' || moves[i+1]=='_' || moves[i]=='_' ){
//                 ans++;
//             }
// if (moves[i]==_ || moves[i]==R ){
//                 ans++;
//             }
//             if (moves[i]==L || moves[i+1]==_ ){
//                 ans++;
//             }