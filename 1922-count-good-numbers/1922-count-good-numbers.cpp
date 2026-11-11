class Solution {
public:
    long long mod=1000000007;
    int power(long long x, long long n ){
        if (n==0) return 1;
        long long half = power(x, n / 2);
        if(n%2==0){
            return (half*half)%mod;
        }
        else{
            return (half%mod * half *x)%mod;
        }
    }
    int countGoodNumbers(long long n) {
        long long even=(n+1)/2;
        long long odd=n/2;
        long a=power(5,even);
        long b=power(4, odd);
        long long ans = a*b%mod;
        return ans;
    }
};