let list = {
	value: 20,
	rest: {
		value: 30,
		rest: null,
	},
}
function prepend(value, list) {
	return {
		value: value,
		rest: list,
	}
}

list = prepend(50, list)
console.log(JSON.stringify(list))
