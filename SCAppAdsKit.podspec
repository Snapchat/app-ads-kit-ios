Pod::Spec.new do |s|
    s.name         = "SCAppAdsKit"
    s.version      = "2.2.0"
    s.summary      = "App Ads Kit by Snap Inc."
    s.description  = <<-DESC
                        App Ads Kit by Snap Inc.
                    DESC
    s.homepage     = "https://kit.snapchat.com"
    s.license = { :type => 'Copyright', :text => <<-LICENSE
                    Any access or use of the included software, associated documentation, software code, or other materials made available by Snap Inc. (and its affiliates) is subject to the Snap Developer Terms found at: 

                    https://www.snap.com/terms/developer/
                    
                    and the Snap Business Tools Terms found at:
                    
                    https://www.snap.com/terms/snap-business-tools
                    
                    Do not use or otherwise access any such software, documentation, software code, or other materials, and uninstall and delete any copies, unless you agree to those terms.
                  LICENSE
                }
    s.author             = { "Snap Inc." => "ad-kit-support@snap.com" }
    s.source       = { :git => "https://github.com/Snapchat/app-ads-kit-ios.git", :tag => "#{s.version}" }
    s.public_header_files = "SCAppAdsKit.xcframework/ios-arm64_armv7_armv7s/SCAppAdsKit.framework/Headers/*.h"
    s.source_files = "SCAppAdsKit.xcframework/ios-arm64_armv7_armv7s/SCAppAdsKit.framework/Headers/*.h"
    s.vendored_frameworks = "SCAppAdsKit.xcframework"
    s.platform = :ios
    s.ios.deployment_target  = '10.0'
    s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'i386' }
    s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'i386' }
end
