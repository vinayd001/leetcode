class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int len = s.length();
        if(len==0)
            return 0;
        else {
            int i, c=0;
            for(i=len-1; i>=0; i--) {
                cout<<s[i] ;
                if(s[i]!=' ')
                    c++;
                else if(c && s[i]==' ')
                    break;
                
            }
            return c;
        }
    }
};