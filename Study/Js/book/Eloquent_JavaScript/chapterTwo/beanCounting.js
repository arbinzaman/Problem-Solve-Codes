function countBs(str) {
	let count = 0
	for (let char of str)
		if (char === "B") {
			count++
		}
	return count
}
console.log(countBs("Big Black Man"))
