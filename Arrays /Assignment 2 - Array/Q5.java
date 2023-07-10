import java.util.Arrays;
public class MaximumProductOfThreeNumbers 
{ 
	public static int maximumProduct(int[] nums) 
	{
		Arrays.sort(nums);
		int n = nums.length;	
		int option1 = nums[0] * nums[1] * nums[n - 1];
		int option2 = nums[n - 1] * nums[n - 2] * nums[n - 3];
		 
		return Math.max(option1, option2);
	}
	 
	public static void main(String[] args) 
	{ 
		int[] nums = {1, 2, 3};
		int maxProduct = maximumProduct(nums); System.out.println("Maximum product: " + maxProduct);
	}
}

