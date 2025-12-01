class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        
        int result = 0;
        int original_x = x;
        
        while(x>0) {
            int y = x % 10;
            if(result < INT_MAX/10) {
                result = result*10 + y;
            }
            x /= 10;
        }

        if(result != original_x) return false;
        return true;
    }
};
