module App = {
  [@react.component]
  let make = () => {
    <div />
  }
};

ReactDOMRe.renderToElementWithId(<App />, "root");
