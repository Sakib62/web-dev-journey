const animals = [
  { name: "cat", sound: "meow" },
  { name: "dog", sound: "woof" },
];

//Destructuring Arrays

const [cat, dog] = animals;
console.log(cat);

// Destructuring Objects
// const {name, sound} = cat;

const { name: catName, sound: catSound } = cat;
const { name = "fluffy", sound = "purr" } = cat;
const {name: cat1 = "bob", sound:cat11 = "mew"} = cat;
console.log(name);

const tmp = [{ one: "1", more: { two: "2", three: "3" } }];

const [
  {
    more: { two, three },
  },
] = tmp;
console.log(two);
