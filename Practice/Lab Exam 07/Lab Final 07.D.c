

int t, n, x, a[200001] = {}, e = -1;

int main() {
	scanf("%d", &t);
	while (t--) {
		e = -1;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &x);
			a[x]++;
			if (a[x] > 2)
				e = x;
		}
		printf("%d\n", e);
	}
}


