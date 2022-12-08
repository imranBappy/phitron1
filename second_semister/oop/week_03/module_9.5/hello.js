function fib(n) {
    if (n <= 1) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
var start = new Date().getTime();
for (var i = 0; i < 40; i++) {
    var result = fib(i);
    console.log(result);
}
var end = new Date().getTime();
var time = (end - start) * 1000;

console.log(`total time : ${time}`);



// 1331000