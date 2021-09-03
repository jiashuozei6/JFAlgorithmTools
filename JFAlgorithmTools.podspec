#
# Be sure to run `pod lib lint JFAlgorithmTools.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'JFAlgorithmTools'
  s.version          = '0.0.2'
  s.summary          = '加密/算法工具类.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
                        加密/算法工具：MD5、Base64、SM2-4等...
                       DESC

  s.homepage         = 'https://github.com/jiashuozei6/JFAlgorithmTools'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'jiashuozei6' => 'jiashuozei6@icloud.com' }
  s.source           = { :git => 'https://github.com/jiashuozei6/JFAlgorithmTools.git', :tag => s.version.to_s }
  
  s.ios.deployment_target = '9.0'
  
  s.pod_target_xcconfig = { 'skip_validation' => true }

  s.preserve_paths = [
    "JFAlgorithmTools/JFAlgorithmTools.framework/*",
    "JFAlgorithmTools/openssl.framework/*"
  ]

  s.xcconfig = {
    "FRAMEWORK_SEARCH_PATHS": "$(PODS_ROOT)"
  }

  s.vendored_frameworks = [
    'JFAlgorithmTools/JFAlgorithmTools.framework',
    'JFAlgorithmTools/openssl.framework'
  ]

  s.dependency 'JFDeviceInformation', '0.0.1'
end
