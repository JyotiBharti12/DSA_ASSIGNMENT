import java.util.HashSet; 
public class MaxDifferentCandies
{
	public static int maxDifferentCandies(int[] candyType) 
	{
		int maxAllowed = candyType.length / 2; // Maximum number of candies Alice can eat HashSet<Integer> uniqueCandies = new HashSet<>();
		 
		// Count the number of unique candy types for (int candy : candyType) {
		uniqueCandies.add(candy);
	}
	 
	// Return the minimum of unique candy types and maxAllowed return Math.min(uniqueCandies.size(), maxAllowed);
	}
	 
	public static void main(String[] args) 
	{ 
		int[] candyType = {1, 1, 2, 2, 3, 3};
		int maxDifferent = maxDifferentCandies(candyType);
		System.out.println("Maximum number of different candies Alice can eat: " + maxDifferent);
	}
}

