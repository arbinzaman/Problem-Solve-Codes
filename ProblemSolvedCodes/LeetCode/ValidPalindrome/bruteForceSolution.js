function isPalindrome(str) {
  const lowerCase = str.toLowerCase().replace(/[^a-zA-Z0-9]/g, "");

  const reversed = lowerCase.split("").reverse().join("");
  return lowerCase === reversed;
}
console.log(isPalindrome("race a car"));
