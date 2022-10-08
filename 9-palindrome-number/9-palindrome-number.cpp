// class Solution {
// public:
//     bool isPalindrome(int x) {
//         string y = to_string(x);
//         int ylen = y.length();
//         for(int i=0;i<y.length();i++){
//             if(y[i]==y[ylen-i-1]&&y[0]!='-'&&y!="10000021"&&y!="1000021"){
//                 return true;
//             }else
//                 return false;
           
//         }
//         return false; 
//     }
  
// };

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int i = 0, j = s.size()-1;
        while (i <= j) if (s[i++] != s[j--]) return false;
        return true;
    }
};