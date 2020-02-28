type insets = {
  .
  "top": float,
  "bottom": float,
  "left": float,
  "right": float,
};

[@bs.module "react-native-safe-area-context"]
external initialWindowSafeAreaInsets: insets = "initialWindowSafeAreaInsets";

module SafeAreaProvider = {
  [@react.component] [@bs.module "react-native-safe-area-context"]
  external make:
    (~initialSafeAreaInsets: insets, ~children: React.element=?) =>
    React.element =
    "SafeAreaProvider";
};

[@bs.module "react-native-safe-area-context"]
external useSafeArea: unit => insets = "useSafeArea";

module SafeAreaConsumer = {
  [@react.component] [@bs.module "react-native-safe-area-context"]
  external make: (~children: insets => React.element=?) => React.element =
    "SafeAreaConsumer";
};

module SafeAreaView = {
  open ReactNative;
  include View;

  [@react.component] [@bs.module "react-native-safe-area-context"]
  external make:
    (
      ~ref: ref=?,
      // View props
      ~accessibilityComponentType: [@bs.string] [
                                     | `none
                                     | `button
                                     | `radiobutton_checked
                                     | `radiobutton_unchecked
                                   ]
                                     =?,
      ~accessibilityElementsHidden: bool=?,
      ~accessibilityHint: string=?,
      ~accessibilityIgnoresInvertColors: bool=?,
      ~accessibilityLabel: string=?,
      ~accessibilityLiveRegion: [@bs.string] [ | `none | `polite | `assertive]
                                  =?,
      ~accessibilityRole: [@bs.string] [
                            | `none
                            | `button
                            | `link
                            | `search
                            | `image
                            | `keyboardkey
                            | `text
                            | `adjustable
                            | `header
                            | `summary
                            | `imagebutton
                          ]
                            =?,
      ~accessibilityStates: array(AccessibilityState.t)=?,
      ~accessibilityTraits: array(AccessibilityTrait.t)=?,
      ~accessibilityViewIsModal: bool=?,
      ~accessible: bool=?,
      ~collapsable: bool=?,
      ~hitSlop: edgeInsets=?,
      ~importantForAccessibility: [@bs.string] [
                                    | `auto
                                    | `yes
                                    | `no
                                    | [@bs.as "no-hide-descendants"]
                                      `noHideDescendants
                                  ]
                                    =?,
      ~nativeID: string=?,
      ~needsOffscreenAlphaCompositing: bool=?,
      ~onAccessibilityEscape: unit => unit=?,
      ~onAccessibilityTap: unit => unit=?,
      ~onLayout: Event.layoutEvent => unit=?,
      ~onMagicTap: unit => unit=?,
      // Gesture Responder props
      ~onMoveShouldSetResponder: Event.pressEvent => bool=?,
      ~onMoveShouldSetResponderCapture: Event.pressEvent => bool=?,
      ~onResponderEnd: Event.pressEvent => unit=?,
      ~onResponderGrant: Event.pressEvent => unit=?,
      ~onResponderMove: Event.pressEvent => unit=?,
      ~onResponderReject: Event.pressEvent => unit=?,
      ~onResponderRelease: Event.pressEvent => unit=?,
      ~onResponderStart: Event.pressEvent => unit=?,
      ~onResponderTerminate: Event.pressEvent => unit=?,
      ~onResponderTerminationRequest: Event.pressEvent => bool=?,
      ~onStartShouldSetResponder: Event.pressEvent => bool=?,
      ~onStartShouldSetResponderCapture: Event.pressEvent => bool=?,
      ~pointerEvents: [@bs.string] [
                        | `auto
                        | `none
                        | [@bs.as "box-none"] `boxNone
                        | [@bs.as "box-only"] `boxOnly
                      ]
                        =?,
      ~removeClippedSubviews: bool=?,
      ~renderToHardwareTextureAndroid: bool=?,
      ~shouldRasterizeIOS: bool=?,
      ~style: Style.t=?,
      ~testID: string=?,
      ~children: React.element=?
    ) =>
    React.element =
    "SafeAreaView";
};
