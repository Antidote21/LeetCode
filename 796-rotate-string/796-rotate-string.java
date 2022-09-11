class Solution {
    public boolean rotateString(String s, String goal) {
        boolean a = false;
        for(int i=0;i<s.length();i++){
            String str = s.substring(i,s.length()) + s.substring(0,i) ; 
            System.out.println(str);
            if(goal.equals(str)){
                a = true;
                break;
            }
           
            
        }
        return a;

    }
}
               