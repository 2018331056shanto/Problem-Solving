#include<bits/stdc++.h>
using namespace std;
vector<long long> segmentedSieve(long long L, long long R) {
    // generate all primes up to sqrt(R)
    long long lim = sqrt(R);
    vector<char> mark(lim + 1, false);
    vector<long long> primes;
    for (long long i = 2; i <= lim; ++i) {
        if (!mark[i]) {
            primes.emplace_back(i);
            for (long long j = i * i; j <= lim; j += i)
                mark[j] = true;
        }
    }

    vector<char> isPrime(R - L + 1, true);
    for (long long i : primes)
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;
    if (L == 1)
        isPrime[0] = false;
    vector<long long >segmentPrime;
    for(long long i=0;i<=isPrime.size();i++)
	{

		if(isPrime[i]==1)
		{

			segmentPrime.emplace_back(L+i);

		}
	}
    return segmentPrime;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	vector<long long>prime;
	prime=segmentedSieve(100,200);
	for(long long i=0;i<=prime.size();i++)
	{

		cout<<prime[i]<<endl;
	}
	// vector<int>s;
	// s=prime(200);
	// for(int i:s)
	// 	cout<<i<<endl;
	
}