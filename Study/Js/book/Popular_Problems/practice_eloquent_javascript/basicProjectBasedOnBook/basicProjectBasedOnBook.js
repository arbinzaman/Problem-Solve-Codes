function showValue() {
  const input = document.getElementById("input").value;
  const output = document.getElementById("output");

  const parts = input.split(" ");
  console.log("parts", parts);

  const lowerParts = parts.map((p) => p.toLowerCase());
  console.log("to lower case", lowerParts);

  const BrandIndex = lowerParts.indexOf("brand")
  console.log("brand",BrandIndex);

  const processorIndex = lowerParts.indexOf("processor");
  console.log(processorIndex);

  const ramIndex = lowerParts.indexOf("ram");
  console.log(ramIndex);

  const storageIndex = lowerParts.indexOf("storage");
  console.log(storageIndex);

  const obj = {
    Brand:  "",
    Processor: "",
    Ram: "",
    Storage: "",
  };
  console.log(obj);

  function collectWords(startIndex, nextKeywords) {
    let result = [];
    for (let i = startIndex + 1; i < parts.length; i++) {
      console.log(i);
      if (nextKeywords.includes(lowerParts[i])) break;
      result.push(parts[i]);

      console.log("parts from loop", parts[i]);
    }
    console.log("Start Index", startIndex);
    console.log("Next Keyword", nextKeywords);
    console.log(result);

    return result.join(" ");
  }
if (BrandIndex){
  obj.Brand = collectWords(BrandIndex, ["processor" , "ram", "storage"]);
}

  if (processorIndex) {
    obj.Processor = collectWords(processorIndex, ["ram", "storage"]);
  }


  if (ramIndex) {
    obj.Ram = collectWords(ramIndex, ["processor", "storage"]);
  }

  if (storageIndex) {
    obj.Storage = collectWords(storageIndex, ["processor", "ram"]);
  }

  output.innerHTML = `
Brand: ${obj.Brand}
Processor: ${obj.Processor}
Ram: ${obj.Ram}
Storage: ${obj.Storage}
  `;
}
