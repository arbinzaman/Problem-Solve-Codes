// console.log("Basic Array Operations");

function basicArray() {
    const numbers = [1, 2, 3, 4, 5];
    const oddNumbers = [];
    const evenNumbers = [];

    console.log("Original Array:", numbers);

    for (let num of numbers) {
        if (num % 2 === 0) {
            evenNumbers.push(num);
        } else {
            oddNumbers.push(num);
        }
    }

    console.log("Even Numbers:", evenNumbers);
}

basicArray();

function filterArray (){
    const number = [1, 2, 3, 4, 5];
    const evenNumber = number.filter(num => num % 2 === 0);
    
    console.log("Even Numbers:", evenNumber);
}

filterArray();