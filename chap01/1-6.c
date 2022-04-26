#include <stdio.h>

#define MAXN	200

long long	choose(int n, int r)
{
	static long long memo[MAXN][MAXN];

	if (memo[n][r] > 0)
		return memo[n][r];
	if (r == 0 || n == r)
		return memo[n][r] = 1;
	return memo[n][r] = choose(n - 1, r - 1) + choose(n - 1, r);
}

int	main(void)
{
	int	n, r;

	printf("input: n, r: ");
	scanf("%d %d", &n, &r);
	printf("%lld\n", choose(n, r));
	return 0;
}
