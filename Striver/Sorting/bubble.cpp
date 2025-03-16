#include <bits/stdc++.h>
using namespace std;

// TC o(n2) best -> o(n)
void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didSwap = 1;//since we only have to check for the swap only once  if any time swap becomes 0 it should stop
            }
        }
        if (didSwap == 0){
            break;
        }
        cout << "runs\n";
    }
}

    int main()
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bubble_sort(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return 0;
    }