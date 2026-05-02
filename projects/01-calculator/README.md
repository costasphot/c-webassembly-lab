# C + WebAssembly Demo

A tiny first WebAssembly project.

The UI is written in HTML/CSS/JavaScript, while the calculator logic is written in C and compiled to WebAssembly using Emscripten.

## Project Structure

```text
wasm-c-demo/
├── public/
│   ├── index.html
│   ├── styles.css
│   ├── calculator.js
│   └── calculator.wasm
├── src/
│   └── calculator.c
├── package.json
└── README.md

wasm-c-demo/
|   package.json
|   README.md
|   
+---public
|       calculator.js
|       calculator.wasm
|       index.html
|       styles.css
|       
\---src
        calculator.c
```

## Requirements

- Node.js / npm
- Python, for the local development server
- Emscripten SDK

## Build
```bash
npm run build
```

This compiles:

```text
src/calculator.c
```

into:

```text
public/calculator.js
public/calculator.wasm
```

## Run

```bash
npm run dev
```

Then open [your browser](http://localhost:8000).

## What This Demonstrates
- Writing functions in C
- Compiling C to WebAssembly
- Exporting C functions
- Calling WebAssembly functions from JavaScript
- Using npm scripts as a simple build system

---

# Test everything

From project root:

```bash
npm run dev
```

Open [your browser](http://localhost:8000).

Now the project should look like a clean little web app instead of a raw HTML test.
