function array() {
	const numbers = [1, 2, 3, 4, 5]
	const oddNum = numbers.filter((number) => number % 2 !== 0)
	console.log(oddNum)
}
array()
