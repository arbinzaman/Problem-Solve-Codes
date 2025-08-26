function isEven(n) {
	n = Math.abs(n)
	if (n === 0) {
		console.log("Number is Even")
	}
	if (n === 1) {
		console.log("Number is odd")
	} else {
		isEven(n - 2)
	}
}

isEven(55)
isEven(-89)
isEven(2)
