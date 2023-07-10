public class BinarySearch 
{
	public static int search(int[] nums, int target) 
	{
		int left = 0;
		int right = nums.length - 1;
		while (left <= right) 
		{
			int mid = left + (right - left) / 2;
			if (nums[mid] == target) 
			{
				return mid; // Target found at index mid
			} 
			else if (nums[mid] < target) 
			{
				left = mid + 1; // Target is in the right half
			} 
			else
			{
				right = mid - 1; // Target is in the left half
			}
		}
		return -1; // Target not found
	}
	public static void main(String[] args) 
	{
		int[] nums = {-1, 0, 3, 5, 9, 12};
		int target = 9;
		int index = search(nums, target);
		System.out.println("Target index: " + index);
	}
}

