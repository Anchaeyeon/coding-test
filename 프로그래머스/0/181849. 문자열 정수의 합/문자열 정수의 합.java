class Solution {
    public int solution(String num_str) {
        int answer = 0;
        // 문자열을 쪼개서 배열로 저장
        String arr[] = num_str.split("");
        
        for (int i=0; i<arr.length; i++) {
            // 문자열을 정수 타입으로 변환
            answer += Integer.parseInt(arr[i]);
        }
        return answer;
    }
}