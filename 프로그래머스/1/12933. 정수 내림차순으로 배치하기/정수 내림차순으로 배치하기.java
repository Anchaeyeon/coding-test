import java.util.*;
 
class Solution {
	public long solution(long n) {
		String[] arr = String.valueOf(n).split("");
		Arrays.sort(arr);
 
		StringBuilder add = new StringBuilder();
		for (int i=0; i<arr.length; i++) {
			add.append(arr[i]);
		}
        add.reverse();
        
		return Long.parseLong(add.toString());
 
	}
}