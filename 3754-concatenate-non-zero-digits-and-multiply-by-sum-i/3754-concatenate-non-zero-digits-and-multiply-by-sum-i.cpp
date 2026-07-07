class Solution {
public:
    long long sumAndMultiply(int n) {
        long long all =0 ,sum =0,len =1;
        while(n>0){
            if(n%10!=0){

                sum =sum + n%10;
                all = all + (n%10)*len;
                len=len*10;
            }
            n=n/10;
        }
        
        return sum * all;
    }
};