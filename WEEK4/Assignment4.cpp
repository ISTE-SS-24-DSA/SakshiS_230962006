// DSA Assignment Question- Week 4- Q(4)
// Merge Sort

#include <bits/stdc++.h>
using namespace std;

void mergeFn(vector <int> &arr,int low,int mid,int high)
{
    vector <int> temp;
    int left=low;
    int right=mid+1;
    while (left<=mid && right<=high)
    {
        if (arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    //remaining elements on the left
    while (left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    //remaining elements on the right
    while (right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    //transfer elements from temporary array to arr
    for (int i=low;i<=high;i++)
        arr[i]=temp[i-low];
}

void mergeSort(vector <int> &arr,int low,int high)
{
    if (low>=high) return;
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    mergeFn(arr,low,mid,high);
}

int main()
{
    int n;
    cin >> n;
    vector <int> arr;
    for (int i=0;i<n;i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    mergeSort(arr,0,n-1);
    for (int i=0;i<n;i++)
        cout << arr[i] << " ";
    return 0;
}
