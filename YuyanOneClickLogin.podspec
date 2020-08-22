Pod::Spec.new do |s|
  s.name                = 'YuyanOneClickLogin'
  s.version             = '1.2.7'
  s.summary             = 'YuyanOneClickLogin for iOS'
  s.homepage            = 'https://github.com/kaifa8019/yuyan-sdk-ios'
  s.license             = { :type => 'Commercial', :text => '艾狄墨搏' }
  s.author              = { 'YuyanOneClickLogin Team' => 'tomato@admobile.top' }
  s.platform            = :ios, '9.0'
  s.source              = { :git => 'https://github.com/kaifa8019/yuyan-sdk-ios.git', :tag => s.version.to_s }
  s.requires_arc        = true

  s.vendored_frameworks = ['YuyanOneClickLogin.framework']

  s.resource_bundles = {
    'YuyanOneClickLogin' => ['Resource/**/*.bundle'],
  }
  
  s.frameworks = ["UIKit"]
  s.libraries = ["c++"]
  
  s.dependency 'ADSuyiKit'
  s.dependency 'ADSuyiNetwork'
  s.dependency 'ADMobGenDeviceInfo'
end