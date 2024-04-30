arr = [0, 2, 1, 0, 1, 1 ,2];
let start = 0;
let mid = 0;
let end = arr.length - 1;

function swapArrayElements(arr, i, j) {
    let temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    return arr;
}

while (mid <= end) {
  if (arr[mid] == 0) {
    swapArrayElements(arr ,mid, start);
    mid++;
  } else if (arr[mid] == 2) {
    swapArrayElements(arr ,mid, end);
    end--;
  } else {
    mid++;
  }
}

for(e of arr){
    Process.out.std(e);
}
