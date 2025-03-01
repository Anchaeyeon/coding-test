class Solution {
    public String solution(String s) {
        String answer = "";
        
        String s_arr[] = s.split(" ");
        int i_arr[] = new int[s_arr.length];
        
        for (int i=0; i<s_arr.length; i++)
            i_arr[i] = Integer.parseInt(s_arr[i]);
        
        int max = i_arr[0];
        int min = i_arr[0];
        
        for (int i=0; i<i_arr.length; i++) {
            if (max<i_arr[i])
                max = i_arr[i];
            if (min>i_arr[i])
                min = i_arr[i];
        }
        answer = min + " " + max;
        
        return answer;
    }
}