function string() {
  const str = "Hello";
  const reversedStr = [];
  console.log(str);
  for (let i = str.length-1; i >= 0; --i) {
      reversedStr.push(str[i]);
    }
    console.log(reversedStr);
    const reversed = reversedStr.join('');
    console.log(reversed);
}
string();
