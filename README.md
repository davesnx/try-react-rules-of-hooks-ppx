# Try react-rules-of-hooks-ppx

Playground to test issues regarding [react-rules-of-hooks-ppx](https://github.com/reason-in-barcelona/react-rules-of-hooks-ppx).

### Get it running

Install dependencies and start the project
```
yarn install
yarn dev
```

`yarn dev` will concurrently run all the procceses needed
- Compile BuckleScript in watch mode
- Run a server that serves the static files
- Bundle JavaScript with esbuild

> `dev` runs always a clean step before, so can happen that esbuild is faster than bucklescript and some errors appears while bucklescript is finishing. The app should be ready when "[re] >>>> Finish compiling" appears.
