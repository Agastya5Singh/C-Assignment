void pairwiseSum(int arr[], int n) 
{
    int sum = 0;
    for (int i = 0; i < n - 1; i++) 
    {

        sum = arr[i] + arr[i + 1];
        printf(" %d ", sum);
        i++;
    }
}
int main()
{
    int arr[] = {4, 10, 15, 5, 6,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    pairwiseSum(arr, n);
    return 0;
}