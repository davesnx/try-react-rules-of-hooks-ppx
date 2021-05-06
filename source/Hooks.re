let useMount = fn => {
  React.useEffect1(
    () => {
      fn();
      None;
    },
    [||],
  );
};

let handleClickOutside = (domElement: Dom.element, event: Dom.mouseEvent, fn) => {
  open Webapi.Dom;
  let targetElement = MouseEvent.target(event) |> EventTarget.unsafeAsElement;
  !(domElement |> Element.contains(targetElement)) ? fn(event) : ();
};

let useClickOutside = fn => {
  let elementRef = React.useRef(Js.Nullable.null);

  let handleMouseDown = event => {
    elementRef.current
    ->Js.Nullable.toOption
    ->Belt.Option.map(value => handleClickOutside(value, event, fn))
    ->ignore;
  };

  React.useEffect0(() => {
    open Webapi.Dom;
    Document.addMouseDownEventListener(handleMouseDown, document);
    Some(
      () => Document.removeMouseDownEventListener(handleMouseDown, document),
    );
  });

  elementRef;
};
