	// #include<bits/stdc++.h>
	// using namespace std;

	// void solve()
	// {
	// 	int n,k;
	// 	cin>>n>>k;
	// 	std::vector<int> v(n);
	// 	for(int i=0;i<n;i++)
	// 	{
	// 		cin>>v[i];
	// 	}
	// 	int cnt=0;
	// 	for(int i=1;i<n-1;i++)
	// 	{
	// 		int temp=v[i-1]+v[i+1];
	// 		if(v[i]>temp)
	// 		{
	// 			cnt++;
	// 		}
	// 	}
	// 	if(k==1)
	// 	{
	// 		cout<<(n-1)/2<<endl;
	// 	}
	// 	else
	// 	{
	// 		cout<<cnt<<endl;
	// 	}
	
	// }

	// int32_t main()
	// {
	// 	ios_base::sync_with_stdio(false); cin.tie(NULL);
	// 	int t;
	// 	cin>>t;
	// 	while(t--)
	// 	{
	// 		solve();
	// 	}
	// }
	#include<bits/stdc++.h>
	using namespace std;
	#define sz 10000
struct Heap{
	int heap[sz],cnt;
	Heap(){
		cnt=0;
	}
	void insertIntoHeap(int x);
	int deleteRootHeap();
	void printHeap()
	{
		for(int i=1;i<=cnt;i++)
		{
			 cout << heap[i] << " \n"[i==cnt];
		}
		cout<<endl;
		return;
	}
};

int Heap::deleteRootHeap()
{
    if(cnt==0)
    {
        
        return -1;
    }
    int ret, ind = 1, lc, rc, mx;
    swap(heap[ind], heap[cnt]);
    ret = heap[cnt--];
    lc = ind*2;
    rc = (ind*2)+1;

    while(lc<=cnt)
    {
        if(rc<=cnt)
            mx = max(heap[lc], heap[rc]);
        else
            mx = heap[lc];
        if(mx>heap[ind])
        {
            if(heap[lc] == mx)
            {

                swap(heap[lc], heap[ind]);
                ind = lc;
            }
            else
            {
                swap(heap[rc], heap[ind]);
                ind = rc;
            }

        }
        else
            return ret;
        lc = ind*2;
        rc = (ind*2)+1;
    }
    return ret;
}


void Heap::insertIntoHeap(int x)
{
	heap[++cnt]=x;
	int child=cnt;
	int par=child/2;
	while(par>0)
	{
		if(heap[par]<heap[child])
		{
			swap(heap[par],heap[child]);

		}
		else
			return;
		child=par;
		par=par/2;
	}
}

void HeapSort(int arr[],int n)
{
	Heap hp;
	for(int i=0;i<n;i++)
	{
		hp.insertIntoHeap(arr[i]);
	}
	for (int i = 0; i<n; i++)
    {
        arr[i] = hp.deleteRootHeap();
    }
    return;

}

int main()
{
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	HeapSort(arr,n);

}