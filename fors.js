// for in loop
const names = ["india", "usa", "austria", "france", "italy", "fiji"];

// For in loop will return the iterator object, in this case -1,2,3,4,5
for(let n in names){
    console.log(n);
}

// For of loop will directly return the object like the cuntry names
for(let name of names) {
    console.log(name);
}