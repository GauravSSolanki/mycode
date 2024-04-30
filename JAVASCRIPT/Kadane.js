// 1. Kadane's problem 

// let arr = [3, 2, -2, 5, -4, 1];
// let Lmax = arr[0];
// let Gmax = arr[0];

// for (let i = 1; i < arr.length; i++) {
//   if (arr[i] > ( arr[i] + Lmax)) 
//   {
//     Lmax = arr[i];
//   } 
//   else {
//     Lmax = Lmax + arr[i];
//     if(Lmax >= Gmax)
//     {
//         Gmax = Lmax;
//     }
//   }
// }
// console.log(` ${Gmax} and ${Lmax}`);

// 2. Triplets problem

// let arr =[1,2,3,5,4,9];
// let index=[];
// let flag =0;

// for(let e of arr)
// {
//     index[e] = 1 ;
//  }

// for(let i =0;i<arr.length ; i++)
// { 
//     for(let j =i+1; j<arr.length ; j++)
// {
//    if( index[arr[i]+arr[j]]==1){
//        flag++;
//        console.log(` ${arr[i]} + ${arr[j]} = ${arr[i]+arr[j]}`);
//    }
// }
  
// }
// console.log(flag);
