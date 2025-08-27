function string() {
	const str = "hello"
	const reversedArray = []
	// console.log(str.length)
	for (let i = str.length - 1; i >= 0; --i) {
		reversedArray.push(str[i])
		// console.log(i)
	}
	console.log(reversedArray)
	const reversed = reversedArray.join(" ")
	console.log(reversed)
}

string()

// console.log("object")

function jsMethod(str) {
	return str.split("").reverse("").join("")
}
console.log(jsMethod("kire"))
