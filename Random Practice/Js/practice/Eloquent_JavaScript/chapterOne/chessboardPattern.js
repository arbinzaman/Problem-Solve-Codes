let size = 8
let hash = "#"
let board = ""

for (let row = 0; row <= size; row++) {
	for (let col = 0; col <= size; col++) {
		if ((row + col) % 2 == 0) {
			board += " "
		} else {
			board += hash
		}
	}
	board += "\n"
}
console.log(board)
