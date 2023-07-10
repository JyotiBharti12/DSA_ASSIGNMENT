import java.util.Arrays;
public class MinScore 
{
	public static int minScore(int[] nums, int k) 
	{
		int n = nums.length;
		// Sort the array in ascending order
		Arrays.sort(nums);
		// Initialize the minimum and maximum elements
		int min = nums[0];
		int max = nums[n - 1];
		// If k is 0, return the difference between max and min
		if (k == 0) 
		{
			return max - min;
		}
		// Adjust the boundaries of min and max
		min += k;
		max -= k;
		// If the adjusted min is greater than or equal to the adjusted max, return 0
		if (min >= max) 
		{
			return 0;
		}
		// Otherwise, return the difference between the adjusted max and min
		return max - min;
	}
	public static void main(String[] args) 
	{
		int[] nums = {1};
		int k = 0;
		int minScore = minScore(nums, k);
		System.out.println("Minimum score: " + minScore);
	}
}

