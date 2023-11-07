class Solution {
public:
    bool isPowerOfTwo(long long n) {
         if(n<=0)
        return false;
        
        // Your code here  
        int value=(n & (n-1));
        if(value==0)
        {
            return true;
        }
        else
        {
            return false;
        }
       
    }
};