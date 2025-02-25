class Solution {
    public long solution(long n) {
        long answer = 0;
        long b = 0;
        
        long a = (long)Math.sqrt(n);
        
        if (a*a == n) {
            b = a+1;
            answer = b*b;
        }
        else if (a*a!=n){
            answer = -1;
        }
            
        return answer;
    }
}