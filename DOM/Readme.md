### Adding Javascript in HTML

1. Inline

    ```html
    <body onload="alert('Hello);">
    ```

2. Internal

    ```html
    <body>
        <script>
            alert("Hello");
        </script>
    </body>
    ```

3. External

    ```html
    <body>
        <script src="index.js"></script>
    </body>
    ```

<br>

### Selecting HTML element with Javascript

1. getElementsByTagName("") //returns HTMLCollection
2. getElementsByClassName("") //returns HTMLCollection
3. getElementById("")
4. querySelector("") // based on selectors; more specific, complex query
5. querySelectorAll("") //returns NodeList

<br>

### Manipulating HTML elements style using Javascript

<pre>
Every CSS property can be changed using Javascript.
But property name might look a bit different.
Javascript naming convention tends to be camel case.</pre>

```font-size``` in CSS ->
- ```fontSize``` in JavaScript
- value of attribute has to placed inside ```""```

<br>

In Chrome developer tools
- In 'Elements' section, change HTML by hardcode
- In 'Elements' -> 'Styles' section, change CSS by hardcode
- Change both HTML & CSS by Javascript in 'Console' section

<br>

### Separation of Concern

<pre>
Change style in CSS
Change behavior in JS

Use classList, property of dom object
(add, remove, toggle) to change applied css class to a particular element.
</pre>

**So, instead of**

-   ```js
    document.querySelector("h1").style.color="red";
    document.querySelector("h1").style.fontSize="10rem";
    document.querySelector("h1").style.fontWeight="bold";
    ```
**Use**

-   ```css
    .huge {
        font-size: 10rem;
        color: red;
        font-weight: bold;
    }
    ```
    ```js
    document.querySelector("h1").classList.add("huge");
    ```

<br>

### Change HTML by Javascript

- ```js
    document.querySelector("h1").innerHTML = "<em>Hi</em>";
    ```
- ```js
    document.querySelector("h1").textContent = "Hi";
    ```
    textContent replaces innerHTML

<br>

### Change Attribute by Javascript

- ```js
    document.querySelector("a").attributes; //returns NameNodeMap
    document.querySelector("a").getAttribute("href");
    document.querySelector("a").setAttribute("href", "https://www.google.com");
    ```

<br>

