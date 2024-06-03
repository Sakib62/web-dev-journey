# CommonJS vs ES Modules

Node.js supports two module systems: ```CommonJS and ES Modules.```

Let's break down the differences, origins, and usage scenarios for each.

## CommonJS

### What is CommonJS?

CommonJS is a module system used by Node.js by default. It allows to structure code into reusable modules.

- **Syntax**: Uses `require` to import modules and `module.exports` or `exports` to export modules.

- **Global Variables**: Supports `__dirname` and `__filename`.

### History

- **Origin**: CommonJS was introduced around 2009.

- **Purpose**: Designed to enable modular programming in JavaScript, primarily on the server side with Node.js.

### Example

```javascript
// example.js
const express = require('express');
const app = express();

app.get('/', (req, res) => {
  res.send('<h1>Hello World!</h1>');
});

app.listen(3000, () => {
  console.log('Server is running on port 3000');
});

module.exports = app;
```

### How to Enable?

By default, Node.js treats files as CommonJS modules unless specified otherwise.<br>No additional configuration is needed in `package.json`.

<hr>

## ES Modules

### What is ES Modules?

ES Modules (ECMAScript Modules or ESM) is the official module system standardized in ECMAScript 2015 (ES6).<br>It provides a standardized syntax for importing and exporting modules.

- **Syntax**: Uses `import` and `export` statements.

- **Global Variables**: Does not directly support `__dirname` and `__filename`.

### History

- **Origin**: Introduced as part of the ES6 specification in 2015.

- **Purpose**: Standardized module system for JavaScript to promote interoperability and compatibility across different environments (browsers, Node.js).

### Example

```javascript
// example.mjs
import express from 'express';
import { fileURLToPath } from 'url';
import { dirname } from 'path';

const app = express();

const __filename = fileURLToPath(import.meta.url);
const __dirname = dirname(__filename);

app.get('/', (req, res) => {
  res.send('<h1>Hello World!</h1>');
});

app.listen(3000, () => {
  console.log('Server is running on port 3000');
});

export default app;
```

### How to Enable?

1. **Set `"type": "module"` in `package.json`**:
   ```json
   {
     "type": "module"
   }
   ```

2. **Use `.mjs` file extension** (optional but recommended for clarity):
   - Name your files with `.mjs` to indicate they are ES modules.

<hr>

## Differences

1. **Syntax**:
   - **CommonJS**: `const module = require('module');`
   - **ES Modules**: `import module from 'module';`

2. **Exports**:
   - **CommonJS**: `module.exports = something;` or `exports.something = something;`
   - **ES Modules**: `export default something;` or `export const something = something;`

3. **Asynchronicity**:
   - **CommonJS**: Synchronous module loading.
   - **ES Modules**: Supports asynchronous module loading, beneficial for performance.

4. **Global Variables**:
   - **CommonJS**: Supports `__dirname` and `__filename`.
   - **ES Modules**: Requires `import.meta.url`, `fileURLToPath`, and `dirname` for similar functionality.

<hr>

## Which to Use When?

- **Use CommonJS**:
  - If you need compatibility with older Node.js projects.
  - If your project relies heavily on existing CommonJS modules.
  - If you prefer synchronous module loading.

- **Use ES Modules**:
  - For modern JavaScript projects aiming for future compatibility.
  - If you prefer the standardized `import`/`export` syntax.
  - When writing code that will be shared between Node.js and browser environments.
  - To take advantage of asynchronous module loading.

<hr>

## Summary

- **CommonJS**: Default in Node.js, uses `require`/`module.exports`, synchronous.
- **ES Modules**: Standardized in ES6, uses `import`/`export`, supports asynchronous loading, and requires `"type": "module"` in `package.json` or `.mjs` file extension.

By understanding the differences and appropriate use cases, you can choose the right module system for your project based on compatibility, future-proofing, and personal or team preferences.