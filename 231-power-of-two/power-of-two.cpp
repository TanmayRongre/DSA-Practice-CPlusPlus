class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = 1;
        for (int i = 1; i <= 31; i++) {
            
            if (n == ans)
                return true;
            if (ans <= INT_MAX/2)
            ans *= 2;
        }

        return false;
    }
};