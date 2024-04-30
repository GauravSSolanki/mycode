// let age =19;
// if( age >= 18 )
// {
//     console.log("Eligible");
// }
// else
// {
//     console.log("NOt eleigble");
// }

// let num =19;
// if( num%2 == 0 )
// {
//     console.log("Number is even");
// }
// else
// {
//     console.log("Number is odd");
// }

// let num =1500;
// if( num%4 == 0 && (num%400==0 || num%100 !=0 ) )
// {
//     console.log("Leap year");
// }
// else
// {
//     console.log("not an leap year");
// }

// let num =0;
// if( num > 0)
// {
//     console.log("Num is positive");
// }
// else if(num==0)
// {
//     console.log("Num is zero");
// }
// else{
//     console.log("Num is negative");
// }

// let num = 60;
// if (num >= 33)
// {
//   if (num >= 33 && num < 45) {
//     console.log(" Third Division  ");
//   } else if (num >= 45 && num < 60) {
//     console.log(" Second Division  ");
//   } else {
//     console.log(" Fisrst Division  ");
//   }
// }
// else {
//   console.log(" Fail");
// }

// let marks = 70;

// if (marks >= 33) {
//   if (marks >= 45) {
//     if (marks >= 60) {
//       console.log("first");
//     } else {
//       console.log("second");
//     }
//   } else {
//     console.log("third");
//   }
// } else {
//   console.log("fail");
// }

let l = 6,
  b = 7,
  r = 1,
  pi = 3.14;
let area = "Circles";
switch (area) {
  case "Rectangle":
    console.log(l * b);
    break;
  case "Traingle":
    console.log(0.5 * l * b);
    break;
  case "Circle":
    console.log(pi * r ** 2);
    break;
  default:
    console.log("invalid Input");
}
