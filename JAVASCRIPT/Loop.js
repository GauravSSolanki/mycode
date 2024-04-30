// var a = 11;
// while (a <= 10) {
//     console.log(a);
//     a++;
// }

// var a=1;
// do{
//     if(a<=10){

//         console.log(a)
//         a++
//     }else{
//         console.log("not match")
//     }

// }while(a<=10)

// for (var a = 1; a <= 10; a++) {
//   console.log(a);
// }

// for (var a = 1500; a <= 2000; a++) {
//   if (a % 4 == 0 && (a % 400 == 0 || a % 100 != 0)) console.log(a);
// }

// let a = 57648;
// b = 0;
// while (a > 0) {
//   b = b * 10 + (a % 10);  //0+8 , 8*10 + 4 =84 , 840 +6 , 8460+7 , 84670+5= 84675 ;
//   a = Math.trunc(a / 10);
// }
// console.log(b);

// let a = 57648;
// b = 0;
// while (a != 0) {
//   b = b + (a % 10);
//   a = Math.trunc(a / 10);
// }
// console.log(b);

let a = -3.567825675476;
console.log(Math.trunc(a));
console.log(Math.round(a));
console.log(Math.floor(a));
console.log(Math.ceil(a));
console.log(a.toFixed(4));
 
// for(var i=5;i>=1;i--)
// {
//     for(var j=1;j<=i;j++)
//     {
//         process.stdout.write(` ${j} `); //string(j) // "*" 
//     }
//     console.log();
//  }
