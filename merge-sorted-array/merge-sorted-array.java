class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        /*String str1 = Arrays.toString(nums1);
        String str2 = Arrays.toString(nums2);
        str1 = str1.replace("0", "");
        str2 = str2.replace("0", "");
        String str3 = str1 + str2;
        Arrays.sort(str3);
        System.out.println(str3);*/
        /*
        int[] arr = new int[n+m];
        int i,j;
        for(i=0;i<m;i++){
            if(nums1[i]==0){
                i--;
            }
            else{
                arr[i] = nums1[i];
            }
                 
        }
        for(j=0;j<n;j++){
            if(nums2[j]==0){
                j--;
            }
            else{
                arr[m+j-1] = nums2[j];
            }
        }
        Arrays.sort(arr);
        */
        for (int i = m; i < m + n; i++) {
            nums1[i] = nums2[i-m];
        }
        Arrays.sort(nums1);
    }
}