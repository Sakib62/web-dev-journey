# SQLite

SQLite is a lightweight, disk-based database that doesn’t require a separate server process. It's widely used due to its simplicity, speed, and ease of integration into applications. Here are some key points and examples to get you started:

## Key Features

- Serverless: No server process needed.

- Zero Configuration: No setup or administration needed.
- Cross-Platform: Runs on various platforms including Windows, Mac, and Linux.
- Compact: Small footprint, making it ideal for embedded devices.
- Transactional: Supports ACID (Atomicity, Consistency, Isolation, Durability).

## Dot Commands

The commands that start with a dot are known as "dot commands" or "meta commands," and they are specific to the SQLite command-line interface (CLI). These commands are used for various administrative tasks such as managing the database, setting options, and interacting with the file system.

Examples of Dot Commands

- .exit or .quit - Exit the SQLite CLI

- .databases - List all databases currently attached to the session
- .tables - List all tables in the database
- .schema - Show the schema of the database
- .help - Show a list of all dot commands
- .shell cls - Clear the screen


## TYPE

In SQLite, string literals should be enclosed in single quotes, not double quotes. Double quotes are used for identifiers like column names and table names. 

In SQLite, when you create a table, you can use `INT` or `INTEGER` to define an integer column. SQLite is quite flexible with type names, and it will interpret both `INT` and `INTEGER` as integer data types.

### Example using `INTEGER`
```sql
CREATE TABLE users (
    id INTEGER PRIMARY KEY,
    name TEXT NOT NULL,
    age INTEGER
);
```

### Example using `INT`
```sql
CREATE TABLE users (
    id INT PRIMARY KEY,
    name TEXT NOT NULL,
    age INT
);
```

### SQLite Type Affinity
SQLite uses a dynamic type system where the type of a value is associated with the value itself rather than with the column in which the value is stored. This means that while you can declare a column with a specific type, SQLite is very flexible about the actual data types it stores.

The following are common type affinities in SQLite:
- `INTEGER`: for integer values.
- `REAL`: for floating-point values.
- `TEXT`: for text strings.
- `BLOB`: for binary data.

### Type Affinity Rules
SQLite assigns a type affinity to a column based on the declared type:
- Any column with a declared type containing the string "INT" has an affinity for `INTEGER`.
- Any column with a declared type containing the string "CHAR", "CLOB", or "TEXT" has an affinity for `TEXT`.
- Any column with a declared type containing the string "BLOB" or no type specified has an affinity for `BLOB`.
- Any column with a declared type containing the string "REAL", "FLOA", or "DOUB" has an affinity for `REAL`.
- All other declared types have a numeric affinity, which means they can store integer and floating-point numbers.

### Practical Example

```sql
CREATE TABLE example1 (
    id INTEGER PRIMARY KEY,
    data INT
);

CREATE TABLE example2 (
    id INT PRIMARY KEY,
    data INTEGER
);
```

In both `example1` and `example2`, the `id` and `data` columns will have integer affinity.

### Conclusion
You can use either `INTEGER` or `INT` (and even other variations like `SMALLINT`, `TINYINT`, etc.) to define integer columns in SQLite. The database will handle them in a similar way, interpreting them as having an integer affinity.

Feel free to ask if you have more questions or need further clarification!