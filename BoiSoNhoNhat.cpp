#include <stdio.h>
#include <math.h>

#define ll long long

ll UCLN(ll a, ll b) {
	while (b > 0) {
		ll r = a % b;
		a = b;
		b = r;
	}

	return a;
}

ll BCNN(ll a, ll b) {
	return (a * b) / UCLN(a, b);
}

int main() {
	int t;
	scanf("%d", &t);

	while (t--) {
		ll n, m;
		scanf("%lld %lld", &n, &m);

		ll res = 1;

		for (ll i = n; i <= m; i++) {
			res = BCNN(res, i);
		}

		printf("%lld", res);

		printf("\n");
	}

}
