#include <iostream>
#include <vector>
using namespace std;

// is more Smarter than Selection sort algorithm
// time complexity O(n^2)
// space complexity O(1)

void bubbleSort(vector<int> &arr)
{
    int counter = 0;
    int n = arr.size();
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        flag = false; 
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                counter++;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = true;
            }
        }
        if (!flag)
            {
                break;
            }
    }
    cout << "Number of Swaps: " << counter << endl;
}

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {9, 10, 20, 30, 40, 50, 60, 90};
    cout << "Unsorted Array" << endl;
    print(arr);
    bubbleSort(arr);
    cout << "Sorted Array" << endl;
    print(arr);
    return 0;
}