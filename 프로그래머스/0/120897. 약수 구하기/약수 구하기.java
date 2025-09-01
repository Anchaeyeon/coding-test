class Solution {
    public int[] solution(int n) {
        int cnt = 0;
        // 빈 배열 만들기
        for (int i=1; i<=n; i++) {
            if (n%i==0) {
                cnt++;
            }
        }
        
        // 숫자만큼 배열 생성
        int[] answer = new int[cnt];
        int m = 0;
        
        // 약수 배열에 넣어주기
        for (int i=1; i<=n; i++) {
            if (n%i==0) {
                answer[m] = i;
                m++;
            }
        }
        return answer;
    }
}