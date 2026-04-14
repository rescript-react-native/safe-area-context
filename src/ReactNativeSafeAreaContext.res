type insets = {
  top: float,
  bottom: float,
  left: float,
  right: float,
}

type frame = {
  x: float,
  y: float,
  width: float,
  height: float,
}

type metrics = {
  insets: insets,
  frame: frame,
}

@module("react-native-safe-area-context")
external initialWindowMetrics: metrics = "initialWindowMetrics"

@module("react-native-safe-area-context")
external useSafeAreaInsets: unit => insets = "useSafeAreaInsets"

@module("react-native-safe-area-context")
external useSafeAreaFrame: unit => frame = "useSafeAreaFrame"

module SafeAreaInsetsContext = {
  module Consumer = {
    @react.component @module("react-native-safe-area-context") @scope("SafeAreaInsetsContext")
    external make: (~children: insets => React.element=?) => React.element = "Consumer"
  }
}

module SafeAreaFrameContext = {
  module Consumer = {
    @react.component @module("react-native-safe-area-context") @scope("SafeAreaFrameContext")
    external make: (~children: frame => React.element=?) => React.element = "Consumer"
  }
}

module SafeAreaProvider = {
  type nativeElement

  include ReactNative.NativeElement.Impl({
    type t = nativeElement
  })

  type props = {
    ref?: ref,
    ...ReactNative.View.viewProps,
    initialMetrics?: metrics,
  }

  @module("react-native-safe-area-context")
  external make: React.component<props> = "SafeAreaProvider"
}

module SafeAreaView = {
  type nativeElement

  include ReactNative.NativeElement.Impl({
    type t = nativeElement
  })

  type mode = [#padding | #margin]

  type edgeMode = [#off | #additive | #maximum]
  type edges = {
    top?: edgeMode,
    bottom?: edgeMode,
    left?: edgeMode,
    right?: edgeMode,
  }

  type props = {
    ref?: ref,
    ...ReactNative.View.viewProps,
    mode?: mode,
    edges?: edges,
  }

  @module("react-native-safe-area-context")
  external make: React.component<props> = "SafeAreaView"
}
