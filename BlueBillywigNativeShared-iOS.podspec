Pod::Spec.new do |spec|

  spec.name         = "BlueBillywigNativeShared-iOS"
  spec.version = "8.47.0"
  spec.summary      = "Shared business logic framework for the Blue Billywig Native Player SDK"

  spec.description  = <<-DESC
  Shared cross-platform business logic framework used by BlueBillywigNativePlayerKit-iOS.
  Contains controllers, data models, networking, and event handling that power the
  Blue Billywig Native Player SDK. This is an internal dependency — install
  BlueBillywigNativePlayerKit-iOS instead for player integration.
                   DESC

  spec.homepage     = "https://www.bluebillywig.com/"
  spec.license      = { :type => 'MIT', :file => 'LICENSE' }
  spec.author       = { "Blue Billywig" => "tech@bluebillywig.com" }
  spec.platform     = :ios, "12.0"

  spec.ios.deployment_target = '12.0'
  spec.ios.vendored_frameworks = 'bbnativeshared.xcframework'

  spec.source       = { :git => "https://github.com/bluebillywig/bbnativeshared-cocoapod.git", :tag => "#{spec.version}" }
end
