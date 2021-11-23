let prices = [40,30,50];
function adding(x) {
    let to_pay = 0;
    for (i of x) {
        to_pay += i;
    }
    return to_pay;  
}

console.log(adding(prices))