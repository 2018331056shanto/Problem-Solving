#include<iostream>
#define sz 100000
using namespace std;

void merge(int arr[],int beg, int end, int mid)
{
    int temp[sz],i,j;

    for (i = beg; i<=end; i++)
        temp[i] =  arr[i];

    int n = mid - beg + 1, m = end - mid, k = beg;
    i = j = 0;
    while( i < n && j < m )
    {
        if(temp[i+beg]<temp[j+mid+1])
            arr[k++] = temp[(i++)+beg];
        else
            arr[k++] = temp[(j++)+mid+1];
    }
    while(i<n)
        arr[k++] = temp[(i++)+beg];
    while(j<m)
        arr[k++] = temp[(j++)+mid+1];
}

void mergesort(int arr[], int beg, int end)
{
    if(beg>=end) return;
    int mid = (beg+end)/2;
    mergesort(arr, beg, mid);
    mergesort(arr, mid+1, end);

    merge(arr,beg,end,mid);
}

int main()
{
    int arr[sz], n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergesort(arr,0,n-1);

    cout << "Sorted Array:\n";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " \n"[i==n-1];

    return 0;
}
