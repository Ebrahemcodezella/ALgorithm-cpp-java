#include <iostream>
#include<vector>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void Selection(vector<int>&arr)
{// time complexity O(n^2) and space complexity O(1)
    for (int i = 0; i < arr.size()-1; ++i)
    {
        int min = i;
        for (int j = i + 1; j < arr.size(); ++j)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
void PrintArray(vector<int>a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
}
int main()
{
    vector<int>a = {60, 40, 30, 50, 10,20,90,9};
    cout<< "UnSorted Array" <<endl;
    PrintArray(a);
    
    Selection(a);
    cout<< "Sorted Array"<<endl ;
    PrintArray(a);
    return 0;
}