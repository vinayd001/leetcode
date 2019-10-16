class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) {
            return "";
        }
        string common = strs[0];
        for(int i=1; i<strs.size(); i++) {
            string temp_common="";
            for(int j=0; j<common.size(); j++) {
                if(strs[i][j] == common[j]) {
                    temp_common+=common[j];
                }
                else
                    break;
            }
            common=temp_common;
        }
        return common;
    }
};