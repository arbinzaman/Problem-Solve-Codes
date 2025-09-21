// const obj = [
//   {
//     Brand: "MSI",
//     Processor: "Intel i7",
//     Ram: "16 GB",
//     Storage: "512 GB",
//   },
//   {
//     Brand: "Acer",
//     Processor: "AMD Rygen ",
//     Ram: "8 GB",
//     Storage: "512 GB",
//   },
// ];
// // console.log(obj);
// // let result = obj.find((item) => item.Brand.toLowerCase().includes(input));
// // console.log(result);

function showValue1() {
  const input = document.getElementById("input").value.toLowerCase();
  const output = document.getElementById("output");

  const result = obj.filter((item) => item.Brand.toLowerCase().includes(input));
  console.log(result);

  if (result) {
    output.innerHTML = result.map(
      (item) => `
    Brand = ${item.Brand} </br>
    Processor = ${item.Processor} </br>
    Ram = ${item.Ram} </br>
    Storage = ${item.Storage} </br>
    `
    );
  } else {
    output.innerHTML = `NO Match`;
  }

  //   output.innerHTML = result;
  //   console.log(input.value);
}

function showValue2() {
  const input = document.getElementById("input").value;
  const output = document.getElementById("output");
  console.log(input);
  const parts = input.split(" ");
  console.log(parts);

  const obj = {
    Brand: parts[0] || "",
    Processor: parts[1] || "",
    Ram: parts[2] || "",
    Storage: parts[3] || "",
  };

  output.textContent = `
Brand: ${obj.Brand}
Processor: ${obj.Processor}
Ram: ${obj.Ram}
Storage: ${obj.Storage}
        `;
}

function showValue() {
  const input = document.getElementById("input").value;
  const output = document.getElementById("output");
  console.log(input);

  const parts = input.split(" ");
  console.log(parts);
  const lowerParts = parts.map((p) => p.toLowerCase());
  console.log(lowerParts);

  const processorIndex = lowerParts.indexOf("processor");
  console.log(processorIndex);
  const ramIndex = lowerParts.indexOf("ram");
  console.log(ramIndex);
  const storageIndex = lowerParts.indexOf("storage");
  console.log(storageIndex);

  const obj = {
    Brand: parts[0] || "",
    Processor:
      processorIndex 
        ? parts.slice(processorIndex +1, ramIndex)
        : "",
    Ram:
      ramIndex  ? parts.slice(ramIndex + 1, storageIndex) : "",
    Storage: storageIndex  ? parts.slice(storageIndex + 1) : "",
  };

  output.textContent = `
Brand: ${obj.Brand}
Processor: ${obj.Processor}
Ram: ${obj.Ram}
Storage: ${obj.Storage}
        `;
}
