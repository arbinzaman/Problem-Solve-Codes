const num = [3, 2, 3];
const target = 6;
function twoSum(num, target) {
  for (let i = 0; i <= num.length; i++) {
    if (num[i] + num[i + 1] === target) {
      return [i, i + 1];
    }
  }
}

console.log(twoSum(num, target));
