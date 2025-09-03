function factorials(n) {
	if (n === 0 || n == 1) {
		return n;
	}
	return n * factorials(n - 1);
}
console.log(factorials(5));
