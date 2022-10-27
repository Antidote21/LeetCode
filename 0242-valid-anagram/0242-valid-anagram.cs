public class Solution
{
    public bool IsAnagram(string s, string t)
    {
        
//         int s_Sum = 0;
//         int t_Sum = 0;
        
//         if (s.Length != t.Length) return false;

//         for (int i = 0; i < s.Length; i++)
//         {
//             char a = Convert.ToChar(s[i]);
//             int b = Convert.ToInt16(s[i]);
//             s_Sum += b;
//         }

//         for (int i = 0; i < t.Length; i++)
//         {
//             char a = Convert.ToChar(t[i]);
//             int b = Convert.ToInt16(t[i]);
//             t_Sum += b;
//         }

//         if(s_Sum == t_Sum)return true;

        
//         return false;
        char[] temp1 = s.ToCharArray();
        System.Array.Sort(temp1);
        //System.Array.Reverse(temp);
        string s1 =new string(temp1);
        
        char[] temp2 = t.ToCharArray();
        System.Array.Sort(temp2);
        string s2 = new string(temp2);
        
        if(s1.Equals(s2))return true;
        return false;
            
            
    }
}