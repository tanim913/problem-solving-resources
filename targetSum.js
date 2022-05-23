

const canSum = (targetSum, numbers) =>{
    if (targetSum === 0) return true;
    if (targetSum < 0) return false;

    for(let n of numbers){
        remain = targetSum - n;
        if(canSum(remain, numbers)){
            return true;
        }
    }
    return false;
};

console.log(canSum(300,[7,14]));
