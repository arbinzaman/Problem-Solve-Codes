const obj = [
  {
    Brand: "MSI",
    Processor: "Intel i7",
    Ram: "16 GB",
    Storage: "512 GB",
  },
  {
    Brand: "Acer",
    Processor: "AMD Rygen ",
    Ram: "8 GB",
    Storage: "512 GB",
  },
];
console.log(obj);
// let result = obj.find((item) => item.Brand.toLowerCase().includes(input));
// console.log(result);

function showValue() {
  const input = document.getElementById("input").value.toLowerCase();
  const output = document.getElementById("output");

  let result = obj.find((item) => item.Brand.toLowerCase().includes(input));
  console.log(result);

if (result){
    output.innerHTML=`
    Brand = ${result.Brand} </br>
    Processor = ${result.Processor} </br>
    Ram = ${result.Ram} </br>
    Storage = ${result.Storage} </br>
    `
}
else{
    output.innerHTML = `NO Match`
}

//   output.innerHTML = result;
  //   console.log(input.value);
}
