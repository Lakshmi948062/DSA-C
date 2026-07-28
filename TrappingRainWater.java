public class TrappingRainWater
{
    public static void main(String[] args)
    {
        int[] arr = {3,2,1,1,4};
        int result = trapWater(arr);
        System.out.println("Total trapped water: " + result);
    }
    public static int trapWater(int[] arr)
    {
        int n = arr.length;
        int Water = 0;
        for(int i=0;i<n;i++)
        {
            int leftMax = arr[i];
            for(int j=0;j<=i;j++)
            {
                if(arr[j]>leftMax)
                {
                    leftMax = arr[j];
                }
            }
            int rightMax = arr[i];
            for(int j=i;j<n;j++)
            {
                if(arr[j]>rightMax)
                {
                    rightMax = arr[j];
                }
            }
            int WaterIndex = Math.min(leftMax,rightMax) - arr[i];
            Water = Water + WaterIndex;
        }
        return Water;
    }
}
