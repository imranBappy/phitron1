let arr = "RBGRGBBRGBGRGRBGBR";

function match_color(c1, c2) {
  if ((c1 == "R" && c2 == "B") || (c1 == "B" && c2 == "R")) {
    return "P";
  } else if ((c1 == "R" && c2 == "G") || (c1 == "G" && c2 == "R")) {
    return "Y";
  } else if ((c1 == "B" && c2 == "G") || (c1 == "G" && c2 == "B")) {
    return "C";
  } else {
    return c2;
  }
}
/*
1
18
RBGRGBBRGBGRGRBGBR
output: PYC
*/ 
let output = [];
for (let i = 0; i < arr.length - 1; i += 2) {
  if (arr[i] === arr[i + 1]) continue;
  output.push(match_color(arr[i], arr[i + 1]));
}
if (arr.length % 2 !== 0) {
  output.push(arr[arr.length - 1]);
}
console.log(output);
for (let i = 0; i < output.length - 1; i += 2) {
  if (output[i] === output[i + 1]) continue;

  console.log(output[i], output[i + 1]);
}

if (output.length % 2 !== 0) {
  console.log(output[output.length - 1]);
}
