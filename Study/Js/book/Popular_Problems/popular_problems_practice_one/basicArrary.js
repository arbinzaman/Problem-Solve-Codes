// console.log("Basic Array Operations");

function basicArray() {
	const numbers = [1, 2, 3, 4, 5];
	const oddNumbers = numbers.filter((num) => num % 2 !== 0);
	console.log(oddNumbers);
}

basicArray();
