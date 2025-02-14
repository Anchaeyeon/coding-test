class Solution {
    public int[] solution(long n) {
        String str = String.valueOf(n);
        int[] answer = new int[str.length()];
        
        int num = 0, cnt = 0;
        
        while (n > 0) {
            num = (int)(n%10);
            answer[cnt] = num;
            n = n/10;
            cnt++;
        }
        return answer;
    }
}