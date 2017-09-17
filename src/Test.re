let component = ReasonReact.statelessComponent "Greeting";

let make ::name _children => {
  ...component,
  render: fun _ => <button> (ReasonReact.stringToElement name) </button>
};

let default =
  ReasonReact.wrapReasonForJs ::component (fun jsProps => make name::jsProps##name [||]);

