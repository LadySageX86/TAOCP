// Euclid's algorithm (Algorithm 1.1E)
// Find the greatest common divisor of two positive integers
// Implementation by Spencer Smith (spenny@geniuspiece.com)

#include <stdio.h>
#include <stdlib.h>

int euclid(int m, int n);

int main(int argc, char* argv[]) {
	int m = atoi(argv[1]);
	int n = atoi(argv[2]);

	if (m <= 0 || n <= 0) {
		printf("Please provide two positive integers");
		return 1;
	}

	printf("The lowest common divisor of %d and %d is %d\n", m, n, euclid(m, n));
}

int euclid(int m, int n) {
	if (m < n) {
		int t = m;
		m = n;
		n = t;
	}

	int r = m % n;

	if (r == 0)
		return n;

	else {
		m = n;
		n = r;
		euclid(m, n);
	}
}
