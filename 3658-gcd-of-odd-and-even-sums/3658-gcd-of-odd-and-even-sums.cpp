class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumo =0,sume=0;
        for(int i =1 ; i<n*2;i=i+2){
          sumo = sumo + i;
        }
         for(int i =2 ; i<n*2;i= i+2){
            sume = sume + i;
        }
        return gcd(sumo,sume);
    }
};