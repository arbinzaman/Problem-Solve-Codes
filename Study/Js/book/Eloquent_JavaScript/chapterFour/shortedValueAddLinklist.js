let list = {
	value: 10,
	rest: {
		value: 20,
		rest: {
			value: 30,
			rest: null,
		},
	},
}

function shortedList(value, list) {
	if (!list || value < list.value) {
		return {value, rest: list}
	}
	let pointer = list
	while (pointer.rest && pointer.rest.value < value) {
		pointer = pointer.rest
	}
	pointer.rest = {value, rest: pointer.rest}
	return list
}

list = shortedList(25, list)
list = shortedList(5, list)
list = shortedList(80, list)

console.log(JSON.stringify(list))
