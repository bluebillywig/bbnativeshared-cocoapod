Pod::Spec.new do |spec|

  spec.name         = "BlueBillywigNativeShared-iOS"
  spec.version      = "8.42.0"
  spec.summary      = "Blue Billywig native shared framework"

  spec.description  = <<-DESC
  Blue Billywig native shared framwork is a shared code base used in BlueBillywigNativePlayerKit
                   DESC

  spec.homepage     = "https://www.bluebillywig.com/"
  spec.license      = { :type => 'MIT', :file => 'LICENSE' }
  spec.author       = { "Blue Billywig" => "tech@bluebillywig.com" }
  spec.platform     = :ios, "12.0"

  spec.ios.deployment_target = '12.0'
  spec.ios.vendored_frameworks = 'bbnativeshared.xcframework'

  spec.source       = { :git => "https://github.com/bluebillywig/bbnativeshared-cocoapod.git", :tag => "#{spec.version}" }
end
