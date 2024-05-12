## String

### ✨Slice - Returns new array
- **slice(x, y)** : Starting from xth index, upto yth but not including y
```js
    var arr = [41, 52, 63, 74, 85, 96, 17];
    arr = arr.slice(2, 4); // from 2nd index to before 4th index
    console.log(arr) // [63, 74]
```

### ✨Splice - Modifies the original array

- **splice(x, y)** : Starting from xth index, delete y elements
    ```js
    var arr = [41, 52, 63, 74, 85, 96, 17];
    arr.splice(2, 4); // starting from 2nd index, delete 4 elements
    console.log(arr) // [41, 52, 17]
    ```
- **splice(x, 0, z1,...zn)** : Add z1,...zn from xth index
    ```js
    var arr = [41, 52, 63, 74];
    arr.splice(2, 0, 23, 14); // starting from 2nd index, delete 4 elements
    console.log(arr) // [41, 52, 23, 14, 63, 74]
    ```


## Array

```js
var list = ["ml", "ds", "cn"];
list.push("hmm");
//list.pop(); //removes last element
//list = list.filter(tmp => tmp != "ml") //excludes ml
console.log(list.includes("ml")); //true
```