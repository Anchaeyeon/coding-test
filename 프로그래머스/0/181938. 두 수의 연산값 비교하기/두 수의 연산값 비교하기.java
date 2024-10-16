class Solution {
    public int solution(int a, int b) {
        int answer = 0;
        
        String chS1 = String.valueOf(a);
        String chS2 = String.valueOf(b);
        
        int chI = Integer.valueOf(chS1 + chS2);
        
        if (chI > 2*a*b)
            answer = chI;
        else if (chI < 2*a*b)
            answer = 2*a*b;
        else if (chI == 2*a*b)
            answer = chI;
        return answer;
    }
}