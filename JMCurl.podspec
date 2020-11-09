Pod::Spec.new do |s|
  s.name         = "JMCurl"
  s.version      = "1.0.0"
  s.summary      = "JMCurl."

  s.description  = <<-DESC
  Provide curl for Jimi iOS Platform.
                   DESC

  s.homepage     = "https://github.com/JimiPlatform"
  s.license      = { :type => "Apache License 2.0" }
  s.author       = "Eafy"
  s.platform     = :ios, "8.0"
  s.requires_arc = true
  s.xcconfig = { 'VALID_ARCHS' => 'armv7 armv7s arm64 x86_64 arm64e' }
  
  s.source       = { :git => "https://github.com/JimiPlatform/JMCurl.git", :tag => "v#{s.version}" }
  s.vendored_libraries = 'JMCurl/*.a'

  s.source_files  = "JMCurl/*.{h,m,hpp,cpp}"
  s.public_header_files = "JMCurl/JMCurl.h","JMCurl/FTPCurlDownloadManager.h","JMCurl/FTPManager.h"
end

#校验指令
#pod lib lint JMCurl.podspec --verbose --allow-warnings --use-libraries
#打包指令
#pod package JMCurl.podspec --force --no-mangle --exclude-deps --verbose
#发布命令
#pod trunk push JMCurl.podspec --verbose --allow-warnings --use-libraries
