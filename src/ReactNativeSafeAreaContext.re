type insets = {
  top: float,
  bottom: float,
  left: float,
  right: float,
};

type frame = {
  x: float,
  y: float,
  width: float,
  height: float,
};

type metrics = {
  insets,
  frame,
};

[@bs.module "react-native-safe-area-context"]
external initialWindowMetrics: metrics = "initialWindowMetrics";

[@bs.module "react-native-safe-area-context"]
external useSafeAreaInsets: unit => insets = "useSafeAreaInsets";

[@bs.module "react-native-safe-area-context"]
external useSafeAreaFrame: unit => frame = "useSafeAreaFrame";

module SafeAreaInsetsContext = {
  module Consumer = {
    [@react.component]
    [@bs.module "react-native-safe-area-context"]
    [@bs.scope "SafeAreaInsetsContext"]
    external make: (~children: insets => React.element=?) => React.element =
      "Consumer";
  };
};

module SafeAreaFrameContext = {
  module Consumer = {
    [@react.component]
    [@bs.module "react-native-safe-area-context"]
    [@bs.scope "SafeAreaFrameContext"]
    external make: (~children: frame => React.element=?) => React.element =
      "Consumer";
  };
};

module SafeAreaProvider = {
  open ReactNative;
  include NativeElement;
  type edgeInsets = View.edgeInsets;

  [@react.component] [@bs.module "react-native-safe-area-context"]
  external make:
    (
      ~initialMetrics: metrics=?,
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
                            | `article
                            | `banner
                            | `complementary
                            | `contentinfo
                            | `form
                            | `list
                            | `listitem
                            | `main
                            | `navigation
                            | `region
                          ]
                            =?,
      ~accessibilityState: Accessibility.state=?,
      ~accessibilityTraits: array(AccessibilityTrait.t)=?,
      ~accessibilityValue: Accessibility.value=?,
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
      ~children: React.element=?,
      // React Native Web Props
      ~onMouseDown: ReactEvent.Mouse.t => unit=?,
      ~onMouseEnter: ReactEvent.Mouse.t => unit=?,
      ~onMouseLeave: ReactEvent.Mouse.t => unit=?,
      ~onMouseMove: ReactEvent.Mouse.t => unit=?,
      ~onMouseOver: ReactEvent.Mouse.t => unit=?,
      ~onMouseOut: ReactEvent.Mouse.t => unit=?,
      ~onMouseUp: ReactEvent.Mouse.t => unit=?
    ) =>
    React.element =
    "SafeAreaProvider";
};

module SafeAreaView = {
  open ReactNative;
  include NativeElement;
  type edgeInsets = View.edgeInsets;

  [@react.component] [@bs.module "react-native-safe-area-context"]
  external make:
    (
      ~ref: ref=?,
      ~edges: array(string)=?,
      ~mode: [@bs.string] [ | `padding | `margin]=?,
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
                            | `article
                            | `banner
                            | `complementary
                            | `contentinfo
                            | `form
                            | `list
                            | `listitem
                            | `main
                            | `navigation
                            | `region
                          ]
                            =?,
      ~accessibilityState: Accessibility.state=?,
      ~accessibilityTraits: array(AccessibilityTrait.t)=?,
      ~accessibilityValue: Accessibility.value=?,
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
      ~children: React.element=?,
      // React Native Web Props
      ~onMouseDown: ReactEvent.Mouse.t => unit=?,
      ~onMouseEnter: ReactEvent.Mouse.t => unit=?,
      ~onMouseLeave: ReactEvent.Mouse.t => unit=?,
      ~onMouseMove: ReactEvent.Mouse.t => unit=?,
      ~onMouseOver: ReactEvent.Mouse.t => unit=?,
      ~onMouseOut: ReactEvent.Mouse.t => unit=?,
      ~onMouseUp: ReactEvent.Mouse.t => unit=?
    ) =>
    React.element =
    "SafeAreaView";
};
