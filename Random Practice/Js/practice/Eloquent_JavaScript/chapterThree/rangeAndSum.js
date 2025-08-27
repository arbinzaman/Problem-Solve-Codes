function range(start, end, step) {
	let arr = []
	if (step > 0) {
		for (let i = start; i <= end; i += step) {
			arr.push(i)
		}
	} else {
		for (let i = start; i >= end; i += step) {
			arr.push(i)
		}
	}
	return arr
}
function sumOfRange(arr) {
	let total = 0
	for (let i = 0; i < arr.length; i++) {
		total = total + arr[i]
	}
	return total
}

console.log(range(5, 20, 2))
