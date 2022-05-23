
const gridTraveller = (m,n) =>{
    if(m===1 && n===1) return 1;
    if(m===0 || n===0) return 0;
    return gridTraveller(m-1, n) + gridTraveller (m,n-1);

};

console.log(gridTraveller(2,3));
