var twoSum = function (nums, target) {
  for (let i = 0; i < nums.length; i++) {
    for (let j = i + 1; i < nums.length; i++) {
      if (nums[j] == target - nums[i]) {
        return [i, j];
      }
    }
  }
  return [];
};
var nums = [2, 7, 11, 15],
  target = 9;
console.log(twoSum(nums, target));
