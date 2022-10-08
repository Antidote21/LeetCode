class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int i = 0;
        int j = s.length()-1;
        for(int i=0;i<j;i++){
            if(s[i]!=s[j--])
                return false;
        }
        return true;
    }
  
};

