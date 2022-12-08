let newArr = []

function hello(arr, newArr, i) {
    if (arr.length === i) {
        // resutl = hello(arr, newArr, 0);
        // return result
        return
    }
    newArr.push(arr[i])
    resutl = hello(arr, newArr, i + 1);
    return resutl
}

console.log(hello([1, 2, 3], newArr, 0));
