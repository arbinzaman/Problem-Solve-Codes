let arr = [10, 20, 30]
function arrayToList(arr) {
	let list = null
	for (let i = arr.length - 1; i >= 0; i--) {
		list = {value: arr[i], next: list}
	}
	return list
}
console.log(arrayToList([10, 20, 30]))
