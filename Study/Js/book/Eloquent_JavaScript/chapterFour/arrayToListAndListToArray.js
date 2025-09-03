// =============================================
// Array ↔ Linked List Conversion in JavaScript
// This code demonstrates two main operations:
// 1. Converting an array into a linked list
// 2. Converting a linked list back into an array
// It also teaches general patterns for building and traversing data structures.
// =============================================

// -----------------------------
// 1️⃣ Convert Array to Linked List
// -----------------------------
let arr = [10, 20, 30] // Example array

function arrayToList(arr) {
	// Initialize an empty list (null means no nodes yet)
	let list = null

	// Loop through the array backwards (from last element to first)
	// This is because we are prepending elements to the list
	for (let i = arr.length - 1; i >= 0; i--) {
		// Create a new node with current value and point "next" to current list
		list = {value: arr[i], next: list}
	}

	// Return the head of the linked list
	return list
}

// Test arrayToList
console.log(arrayToList([10, 20, 30]))

// -----------------------------
// 2️⃣ Example of a Manually Defined Linked List
// -----------------------------
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

// Each node contains:
// - value: the data
// - rest (or next): reference to the next node
// The last node points to null

// -----------------------------
// 3️⃣ Convert Linked List to Array
// -----------------------------
function listToArray(list) {
	let arr = [] // Step 1: create an empty array
	let node = list // Step 2: start traversing from head node

	while (node) {
		// Step 3: traverse until node is null
		arr.push(node.value) // Add current node value to array
		node = node.rest // Move to next node
	}

	return arr // Step 4: return the converted array
}

// Test listToArray
console.log(listToArray(list))

// -----------------------------
// 4️⃣ General Lessons from This Code
// -----------------------------
// 1. Converting between data structures follows a common pattern:
//    - Initialize the target container
//    - Traverse the source structure
//    - Add each element to the target
//    - Return the target
// 2. Traversing nested objects or linked lists requires a temporary pointer
// 3. Building a structure in reverse (array → linked list) can be easier when prepending
// 4. These patterns are reusable for arrays, linked lists, trees, graphs, and other nested structures
// 5. Core skills practiced: loops, object creation, data structure manipulation, abstraction
