function oddNumber(numbers) {
  const odd = [];
  for (let i = 1; i < numbers; i += 2) {
    if (i / 100 && i % 2 !== 0) {
      odd.push(i);
    }
  }
  oddNumber(10);
  console.log(odd);
}
