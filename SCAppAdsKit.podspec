Pod::Spec.new do |s|
    s.name         = "SCAppAdsKit"
    s.version      = "1.0.1"
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
    s.public_header_files = "SCAppAdsKit.framework/Headers/*.h"
    s.source_files = "SCAppAdsKit.framework/Headers/*.h"
    s.vendored_frameworks = "SCAppAdsKit.framework"
    s.platform = :ios
    s.ios.deployment_target  = '10.0'
    s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    s.ios.script_phase = { :name => 'SCAppAdsKit', :script =>
      <<~HEREDOC

      if [ "$CONFIGURATION" == "Debug" ]; then
      echo "Skip frameworks cleaning in debug version"
      exit 0
      fi
      
      APP_PATH="${TARGET_BUILD_DIR}/${WRAPPER_NAME}"
      
      find "$APP_PATH" -name 'SCAppAdsKit.framework' -type d | while read -r FRAMEWORK
      do
      FRAMEWORK_EXECUTABLE_NAME=$(defaults read "$FRAMEWORK/Info.plist" CFBundleExecutable)
      FRAMEWORK_EXECUTABLE_PATH="$FRAMEWORK/$FRAMEWORK_EXECUTABLE_NAME"
      echo "Executable is $FRAMEWORK_EXECUTABLE_PATH"
      
      EXTRACTED_ARCHS=()
      
      for ARCH in $ARCHS
      do
      echo "Extracting $ARCH from $FRAMEWORK_EXECUTABLE_NAME"
      lipo -extract "$ARCH" "$FRAMEWORK_EXECUTABLE_PATH" -o "$FRAMEWORK_EXECUTABLE_PATH-$ARCH"
      EXTRACTED_ARCHS+=("$FRAMEWORK_EXECUTABLE_PATH-$ARCH")
      done
      
      echo "Merging extracted architectures: ${ARCHS}"
      lipo -o "$FRAMEWORK_EXECUTABLE_PATH-merged" -create "${EXTRACTED_ARCHS[@]}"
      rm "${EXTRACTED_ARCHS[@]}"
      
      echo "Replacing original executable with thinned version"
      rm "$FRAMEWORK_EXECUTABLE_PATH"
      mv "$FRAMEWORK_EXECUTABLE_PATH-merged" "$FRAMEWORK_EXECUTABLE_PATH"
      
      done

      HEREDOC
  }
end
