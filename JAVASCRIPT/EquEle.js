let arr = [5, 3, 2, 2, 3, 5, 2];
let rightsum = 0;
let leftsum = 0;
let pos = 0;
let i = 0;

for (e of arr) {
  rightsum += e;
}

while (i < arr.length) {
  rightsum -= arr[i];
  if (leftsum == rightsum) {
    pos = i + 1;
    break;
  }

  leftsum += arr[i];
  i++;
}

console.log(pos);
