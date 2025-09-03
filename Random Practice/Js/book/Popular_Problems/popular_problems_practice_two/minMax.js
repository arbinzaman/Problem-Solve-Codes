function splitArray(arr) {
	const max = Math.max(...arr)
	const big = []
	const small = []
	for (let i = 0; i < arr.length; i++) {
		if (arr[i] == max) {
			big.push(arr[i])
		} else {
			small.push(arr[i])
		}
	}
	return { big, small }
	// console.log("big ", big, "small ", small)
}

console.log(splitArray([4, 43, 2, 5, 77, 44]))
