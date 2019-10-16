class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) {
            return false;
        } else {
            long rev=0;
            int dup_x=x;
            while(x!=0) {
                int pop = x % 10;
                x/=10;
                if( (rev > INT_MAX/10) || (rev == INT_MAX && pop > 7) )
                    return 0;
                if( (rev < INT_MIN/10 ) || (rev == INT_MIN/10 && pop < -8) )
                    return 0;
                rev = rev*10 + pop;
            }
            if(rev==dup_x)
                return true;
            else
                return false;
        }
    }
};