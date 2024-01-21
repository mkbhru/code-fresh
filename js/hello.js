function add(x) {
  return function(y) {
    return x + y;
  }
}

let add5 = add(5);
console.log(add5(3)); // 8
console.log(add(5).()=>{})