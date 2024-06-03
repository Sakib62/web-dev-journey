var numbers = [1, 29, 3, 14, 35];

const a = numbers.findIndex(function (num) {
  return num > 15;
});
console.log(a);

const b = numbers.reduce(function (sum, num) {
  return sum + num;
});
console.log(b);

var lol = "sakibul";
var tmp = lol.substring(0, 3);
console.log(tmp);

const again = [];

numbers.forEach(function (num) {
  again.push(num * 2);
});
console.log(again);

function square(num) {
  return num * num;
}

console.log(
  numbers.map( num => num * num)
);
