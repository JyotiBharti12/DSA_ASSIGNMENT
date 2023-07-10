import java.util.HashMap; 
import java.util.Map;
 
public class LongestHarmoniousSubsequence 
{ 
	public int findLHS(int[] nums) 
	{
		Map<Integer, Integer> freqMap = new HashMap<>(); 
		int longestSubsequenceLength = 0;
		 
		// Count the frequency of each number in the array 
		for (int num : nums) 
		{
		freqMap.put(num, freqMap.getOrDefault(num, 0) + 1);
		}
	// Iterate over the numbers and check for harmonious subsequence 
		for (int num : freqMap.keySet()) 
		{
			if (freqMap.containsKey(num + 1)) 
			{
				int subsequenceLength = freqMap.get(num) + freqMap.get(num + 1); longestSubsequenceLength = Math.max(longestSubsequenceLength,
				subsequenceLength);
			}
		}
	
	return longestSubsequenceLength;
	}
	 
	public static void main(String[] args) 
	{ 
	int[] nums = {1, 3, 2, 2, 5, 2, 3, 7};
	LongestHarmoniousSubsequence solution = new LongestHarmoniousSubsequence(); int longestSubsequenceLength = solution.findLHS(nums); System.out.println("Longest harmonious subsequence length: " +
	longestSubsequenceLength);
	}
} 


