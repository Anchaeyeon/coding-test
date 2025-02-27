class Solution {
    public int[] solution(int[] arr) {
        if (arr.length == 1) {
            int[] answer = {-1};
            return answer;
        }
        
        int min = arr[0];
        for (int i=0; i<arr.length; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        
        int[] answer = new int[arr.length-1];
        int cnt = 0;
        for (int i=0; i<arr.length; i++) {
            if (min == arr[i])
                continue;
            else {
                answer[cnt] = arr[i];
                cnt++;
            }
        }
        
        return answer;
    }
}