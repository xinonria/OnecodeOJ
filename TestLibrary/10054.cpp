#include <cstdio>
#include <algorithm>

using namespace std;

double a[10010];

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) scanf("%lf", &a[i]);
	sort(a + 1, a + 1 + n);
	printf("%0.2f", a[n - 1] - a[2]);
	return 0;
}
