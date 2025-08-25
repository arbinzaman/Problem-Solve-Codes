let stars = "*"
let space = " "
let n = 5

for (let i = 1; i <= 7; i++) {
	console.log(stars.repeat(i))
}

for (let i = 1; i <= 7; i++) {
	console.log(
		space.repeat(7 - i) + stars.repeat(i * 2 - 1) + space.repeat(7 - i)
	)
}
