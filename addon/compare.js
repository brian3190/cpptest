const addon = require('./build/Release/addon');

console.log(addon.hello());

function jsSum() {
  let a = 3.1514926, b = 2.718;
  for (let i = 0; i < 1000000000; i++){
    a += b;
  }
  let total = a;
  return total;
}

console.time('c++');
addon.sum();
console.timeEnd('c++');

console.time('js');
jsSum();
console.timeEnd('js');
