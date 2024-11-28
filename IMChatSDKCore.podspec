#
# Be sure to run `pod lib lint OpenIMSDKCore.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'IMChatSDKCore'
  s.version          = '1.0.6'
  s.summary          = 'IM chat sdk core'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
  IM chat sdk core
                       DESC

  s.homepage         = 'https://github.com/Next-Social-Platform/im-chat-sdk-ios'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'IMChatSDKCore' => 'https://github.com/Next-Social-Platform/im-chat-sdk-ios' }
  s.source           = { :git => 'https://github.com/Next-Social-Platform/im-chat-sdk-ios.git', :tag => s.version.to_s }

  s.ios.deployment_target = '11.0'    
    
  valid_archs = ['armv7s','arm64','x86_64']
  s.xcconfig = {
    'VALID_ARCHS' =>  valid_archs.join(' '),
  }
  s.pod_target_xcconfig = {
      'ARCHS[sdk=iphonesimulator*]' => '$(ARCHS_STANDARD_64_BIT)'
  }
  
  s.library = 'resolv'
  s.vendored_frameworks = 'Frameworks/*.xcframework'
end
