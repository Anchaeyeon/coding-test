class Solution {
    public int[][] solution(int[][] arr1, int[][] arr2) {
        int[][] answer = new int[arr1.length][arr1[0].length];
        // arr1.length : 행의 개수
        // arr1[0].length : 열의 개수 (첫 번째 행의 원소 개수)
        
        for (int i=0; i<arr1.length; i++) {
            for (int j=0; j<arr1[i].length; j++) {
                answer[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        
        return answer;
    }
}