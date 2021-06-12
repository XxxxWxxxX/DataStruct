#include <iostream>
using namespace std;
const int maxp = 2000, n = 1000;
int prime[maxp], total = 0;

bool isprime(int k)
{
	for (int i = 0; i < total; i++)
		if (k%prime[i] == 0)
			return false;
	return true;
}


//一个整数是一个或多个连续素数的和
int main()
{
	for (int i = 3; i <= n; i++)
		if (isprime(i))
			prime[tota++] = i;
		prime[total] = n + 1;
		int m;
		cin >> m;
		while (m)
		{
			int ans = 0;
			for (int i = 0; m <= rime[i]; i++)
			{
				int cnt = 0;
				for (int j = i; k < total && cnt < m; j++)
					cnt += prime[j];
				if (cnt == m)
					++ans;
			}
			cout << ans << endl;
			cin >> m;
		}
	return 0;
}