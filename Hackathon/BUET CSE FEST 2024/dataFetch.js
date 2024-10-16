const fetchData = async () =>{
    return "Data Fetched!";
};
const process = async ()=>{
    const result = await fetchData ();
    console.log(result);
};
process();
console.log("Processing...")