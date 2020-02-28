# `@reason-react-native/safe-area-context`

[![Build Status](https://github.com/reason-react-native/safe-area-context/workflows/Build/badge.svg)](https://github.com/reason-react-native/safe-area-context/actions)
[![Version](https://img.shields.io/npm/v/@reason-react-native/safe-area-context.svg)](https://www.npmjs.com/@reason-react-native/safe-area-context)
[![Chat](https://img.shields.io/discord/235176658175262720.svg?logo=discord&colorb=blue)](https://reasonml-community.github.io/reason-react-native/discord/)

[ReasonML](https://reasonml.github.io) /
[BuckleScript](https://bucklescript.github.io) bindings for
[`react-native-safe-area-context`](https://github.com/th3rdwave/react-native-safe-area-context).

Exposed as `ReactNativeSafeAreaContext` module.

`@reason-react-native/safe-area-context` X.y._ means it's compatible with
`react-native-safe-area-context` X.y._

## Installation

When
[`react-native-safe-area-context`](https://github.com/th3rdwave/react-native-safe-area-context)
is properly installed & configured by following their installation instructions,
you can install the bindings:

```console
npm install @reason-react-native/safe-area-context
# or
yarn add @reason-react-native/safe-area-context
```

`@reason-react-native/safe-area-context` should be added to `bs-dependencies` in
your `bsconfig.json`. Something like

```diff
{
  //...
  "bs-dependencies": [
    "reason-react",
    "reason-react-native",
    // ...
+    "@reason-react-native/safe-area-context"
  ],
  //...
}
```

## Usage

### Types

#### `ReactNativeSafeAreaContext.insets`

```reason
type insets = {
  .
  "top": float,
  "bottom": float,
  "left": float,
  "right": float,
};
```

### Constants

#### `initialWindowSafeAreaInsets`

See <https://github.com/th3rdwave/react-native-safe-area-context#optimization>

### Methods

#### `<ReactNativeSafeAreaContext.SafeAreaProvider>`

```reason
open ReactNative;
open ReactNativeSafeAreaContext;

[@react.component]
let make = () => {
  <SafeAreaProvider /*initialSafeAreaInsets={...}*/>
    // your app...
    <View />
  <SafeAreaProvider>;
}
```

See <https://github.com/th3rdwave/react-native-safe-area-context#web-ssr> for
`initialSafeAreaInsets`.

#### `ReactNativeSafeAreaContext.useSafeArea(): insets`

```reason
open ReactNative;
open ReactNativeSafeAreaContext;

[@react.component]
let make = () => {
  let insets = useSafeArea();
  <View style=Style.(style(~paddingTop=insets##top, ())) />;
}
```

#### `<ReactNativeSafeAreaContext.SafeAreaConsumer>`

```reason
open ReactNative;
open ReactNativeSafeAreaContext;

[@react.component]
let make = () => {
  <SafeAreaConsumer>
    // your component, handy for classes
    {insets => <View style=Style.(style(~paddingTop=insets##top, ())) />}
  <SafeAreaConsumer>;
}
```

#### `<ReactNativeSafeAreaContext.SafeAreaView>`

```reason
open ReactNative;
open ReactNativeSafeAreaContext;

[@react.component]
let make = () => {
  <SafeAreaView>
    <View />
  <SafeAreaView>;
}
```

---

## Changelog

Check the [changelog](./CHANGELOG.md) for more informations about recent
releases.

---

## Contribute

Read the
[contribution guidelines](https://github.com/reason-react-native/.github/blob/master/CONTRIBUTING.md)
before contributing.

## Code of Conduct

We want this community to be friendly and respectful to each other. Please read
[our full code of conduct](https://github.com/reason-react-native/.github/blob/master/CODE_OF_CONDUCT.md)
so that you can understand what actions will and will not be tolerated.
