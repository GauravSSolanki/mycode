// String Methods:

// charAt
// concat
// toUpperCase
// toLowerCase
// trim
// split
// substring
// slice
// indexOf
// lastIndexOf
// replace
// startsWith
// endsWith
// length

// Please note that this is not an exhaustive list, but it covers some of the most commonly used methods for strings and arrays in JavaScript.








// let str="my name is pawan";
// console.log(str.length)
// console.log(str[1])

// let str="my \"name\" is pawan";
// console.log(str)

// let str = "my 'name' is pzwan";
// console.log(str[4]);
// console.log(str);

// console.log(str.search("z"));
// console.log(str.replace("z","a"))

// let str = "   this      book    ";
// console.log(str.trim());


// let a="this";
// let b="is";
// console.log(a.concat(" ",b ))
// console.log(a+b)
// console.log(` ${a+b}`) 
// console.log(a,b)


// let str="a, b, c, d, e";
// console.log(str.split(" "));
// console.log(str.split(","));

// const str = "apple banana orange";
// const fruits = str.split(" ");
// console.log(fruits);


// 1.slice
// 2.substring
// 3.substr


// let str="pawan, jatin, gaurav";
// console.log(str.slice(0,8))
// console.log(str.substring(2,8))
// console.log(str.substr(0,3))

// let str="pawan, jatin, gaurav";
// console.log(str.slice(8,-2))
// console.log(str.substring(8,-2))
// console.log(str.substr(8,2))

let str="pawan, jatin, gaurav";
console.log(str.charAt(2));
console.log(str.charCodeAt(8));
console.log(str[3]);
console.log(str.charCodeAt(4));

console.log(str.replace("pawan","nawap"));