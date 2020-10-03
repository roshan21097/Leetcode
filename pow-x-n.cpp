class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        int flag=0;
        if(n<0){
            flag=1;
            n=abs(n);
        }
        while(n>0){
            if(n&1){
                ans=ans*x;
            }
            n=n>>1;
            x=x*x;
        }
        if(flag){
            return 1/ans;
        }
        return ans;
    }
};