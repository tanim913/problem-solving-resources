

const canSum = (targetSum, numbers, memo ={}) =>{
    if (targetSum in memo) return memo[targetSum];
    if (targetSum === 0) return true;
    if (targetSum < 0) return false;

    for(let n of numbers){
        remain = targetSum - n;
        if(canSum(remain,numbers,memo)){

            memo[targetSum] = true;
            return true;
        }
    }
    memo[targetSum]  = false;
    return false;
};

console.log(canSum(1001,[7,14]));
