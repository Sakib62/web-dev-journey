# Data formats

- xml, json, text, html, binary data (ArrayBuffers and Blobs)

XMLHttpRequest (xhr) vs fetch (promise based)

AJAX - asynchronous javascript and XML

<hr>

### JSON

- stands for ```JavaScript Object Notation```
- used to exchange data to/from a web server.
- When receiving data from a web server, the data is always a string.
- Parse the data with JSON.parse(), and the data becomes a JavaScript object.

- When using the ```JSON.parse()``` on a JSON derived from an array, the method will return a JavaScript array, instead of a JavaScript object.
- [JSON parse](https://www.w3schools.com/js/js_json_parse.asp)

- JSON data types : ```string, number, object (JSON object), array, boolean, null```
- JSON values cannot be one of the following data types: ```function, date, undefined```

-
  ```
  It is a common mistake to call a JSON object literal "a JSON object".

  JSON cannot be an object. JSON is a string format.

  The data is only JSON when it is in a string format. When it is converted to a JavaScript variable, it becomes a JavaScript object.
  ```

- requires a workaround to represent mixed content, typically by using arrays and objects to distinguish between text and formatting. This approach can be more complex and less intuitive.

- Ideal for data-centric applications where the data structure is simpler and does not require interleaving of text and elements. Examples include:
  - APIs and web services
  - Configuration files for applications
  - Data exchange between client and server in web applications

### XML

- stands for ```eXtensible Markup Language```
- designed to store and transport data.
- designed to be both human- and machine-readable.
- directly supports mixed content, allowing text and elements to be interwoven naturally.

- 
  ```xml
  <?xml version="1.0" encoding="UTF-8"?>
  <note>
    <to>Tove</to>
    <from>Jani</from>
    <heading>Reminder</heading>
    <body>Don't forget me this weekend!</body>
  </note>
  ```

- best suited for document-centric data where mixed content (text interspersed with various elements) is common. Examples include:
  - Technical documentation
  - Books and articles with complex formatting
  - Configurations where data needs to be highly structured and descriptive

### JSON vs XML

JSON's simplicity and ease of use make it ideal for data-centric applications, while XML's ability to handle mixed content makes it better suited for document-centric data.

**XML**

```xml
<paragraph>
  This is a <bold>bold</bold> word and this is an <italic>italic</italic> word.
</paragraph>
```

**JSON**

```json
{
  "paragraph": [
    "This is a ",
    { "bold": "bold" },
    " word and this is an ",
    { "italic": "italic" },
    " word."
  ]
}

```

### XML vs HTML

XML and HTML were designed with different goals:

- XML was designed to carry data - with focus on what data is
- HTML was designed to display data - with focus on how data looks
- XML tags are not predefined like HTML tags are
