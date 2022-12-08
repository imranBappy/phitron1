let arr = "RGGB";
/*
1. input length 1 hole.
2. input length 2 hole
3. mix er somoi mixing + base duplicate check( r,b,g)
4. mixing er por duplicate check (p,c,y)
5. duplicate hoiye jodi sob ses hoiye jay.
6. baki ja thake.
*/
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
  let match = match_color(arr[i], arr[i + 1]);
  if (match == output[output.length - 1]) {
    output.length--;
  } else {
    output.push(match);
  }
}
console.log(output);

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
