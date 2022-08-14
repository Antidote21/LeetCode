class Solution {
    public int[] replaceElements(int[] arr) {
        int i,tmp,max=-1; 
        for(i=arr.length-1;i>=0;i--){
            tmp= arr[i];
            arr[i]=max;
            if(tmp>max){
                max=tmp;
            }
        }
        return arr;
    }
}