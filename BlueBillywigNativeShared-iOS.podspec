Pod::Spec.new do |spec|

  spec.name         = "BlueBillywigNativeShared-iOS"
  spec.version      = "7.82"
  spec.summary      = "Blue Billywig native shared framework"

  spec.description  = <<-DESC
  Blue Billywig native shared framwork is a shared code base used in BlueBillywigNativePlayerKit
                   DESC

  spec.homepage     = "https://www.bluebillywig.com/"
  spec.license      = { :type => 'MIT', :file => 'LICENSE' }
  spec.author       = { "Blue Billywig" => "tech@bluebillywig.com" }
  spec.platform     = :ios, "12.0"

  spec.ios.deployment_target = '12.0'
  spec.ios.vendored_frameworks = 'bbnativeshared.framework'

  spec.source       = { :git => "https://github.com/bluebillywig/bbnativeshared-cocoapod.git", :tag => "#{spec.version}" }

  spec.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  
end
