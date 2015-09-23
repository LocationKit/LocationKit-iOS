# LocationKit iOS
## LocationKit - The most advanced location manager for iOS and Android

[![LocationKit-iOS](https://img.shields.io/badge/LocationKit--iOS-2.3.0-orange.svg)](https://docs.locationkit.io) [![CocoaPods](https://img.shields.io/cocoapods/v/LocationKit.svg?style=flat-square)](https://cocoapods.org/pods/LocationKit) [![CocoaPods](https://img.shields.io/cocoapods/p/LocationKit.svg?style=flat-square)](https://cocoapods.org/pods/LocationKit) [![GitHub tag](https://img.shields.io/github/tag/locationkit/locationkit-ios.svg?style=flat-square)](https://github.com/locationkit/locationkit-ios) [![GitHub stars](https://img.shields.io/github/stars/locationkit/locationkit-ios.svg?style=social&label=LocationKit-iOS)](https://github.com/locationkit/locationkit-ios)

This is the public repo for LocationKit for iOS.

For full documentation, visit our [docs page](https://docs.locationkit.io)

### Installation

#### CocoaPods

Install the latest [LocationKit CocoaPod](https://cocoapods.org/pods/LocationKit)
by adding the following to your Podfile:

```ruby
pod 'LocationKit', '~> 2.3.0'
```

##### Full step-by-step instructions:

If you already have an existing project set up with CocoaPods, skip to step 3 below:

1. If you don't yet have CocoaPods installed, run `gem install cocoapods`
1. Then, from your project root, run `pod init` to get started with CocoaPods.
   That'll create a `Podfile` in your project directory
1. Edit it and add `pod 'LocationKit', '~>2.3.0'` to that Podfile, making sure
   LocationKit is included for your intended target.
1. If you have specified a platfrom (e.g. `platform :ios, '8.0'`), make sure
   you specify iOS 8.0 or greater. LocationKit is provided as a Dynamic
   Framework and as a result is only compatible with iOS 8.0 and above.
1. Optionally add the `use_frameworks!` flag to your `Podfile`

For a full example, below a full example Podfile:

```ruby
# Your app's Podfile

platform :ios, '8.0'
use_frameworks!

target 'YourApp' do
    pod 'LocationKit', '~>2.3.0'
end
```

#### Carthage

Instructions coming soon!

#### Manual Installation

We generally recommend CocoaPods or Carthage for installing LocationKit as they
are both far easier to update to the latest version, but we understand it can be
difficult to retrofit an existing project so we also provide LocationKit as a
.Framework for manual integration.

1. Download the latest [LocationKit .framework](/releases)
2. Unzip it and you should have `LocationKit.framework`
3. In your Project Settings, under General, scroll down to "Linked Frameworks
   and Libraries" and hit the Plus button
4. Click the "Add Other..." button and pick `LocationKit.framework` from the
   place where you unzipped it
5. Hit the plus button again and add `CoreLocation.framework`, `MapKit.framework`
   and `SystemConfiguration.framework`
6. Under Build Settings > Linking > Other Linker Flags add `-ObjC`

*Swift Only*
You'll need to add an Objective-C Bridging Header to use LocationKit in a Swift
project since it's written in Objective-C.

1. Add a new File to your project, it will be an Objective-C file and it will be
   a header file. Give it a name like "<YourProjectName>-Bridging-Header.h"
2. In that file, add one line: `#import <LocationKit/LocationKit.h>`
3. Under "Build Settings > Swift Compiler - Code Generation > Objective-C Bridging
   Header" add a value of "<YourProjectName>/<YourProjectName>-Bridging-Header.h"
