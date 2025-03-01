class Solution {
    public String solution(String s) {
        String answer = "";
        int len = s.length();
        
        if (len%2==0)
            answer = s.substring((len/2)-1, (len/2)+1); // substring : 객체의 시작 인덱스부터 종료 인덱스 전까지의 문자열을 반환
        else
            answer = String.valueOf(s.charAt(len/2));
            
        return answer;
    }
}