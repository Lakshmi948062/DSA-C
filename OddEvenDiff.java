class OddEvenDiff 
{
    public static void main(String[] args) 
    {
        int[] arr = {4, 6, 1, 3, 8};
        int res = difference(arr);
        System.out.println(res);
    }
    public static int difference(int[] arr) 
    {
        if (arr.length == 0)
        {
            return 0;
        }
        int evenSum = 0, oddSum = 0;
        for (int i = 0; i < arr.length; i++) 
        {
            if (i % 2 == 0)
            {
                evenSum += arr[i];
            }
            else
            {
                oddSum += arr[i];
            }
        }
        return (oddSum > evenSum) ? (oddSum - evenSum) : (evenSum - oddSum);
    }
}