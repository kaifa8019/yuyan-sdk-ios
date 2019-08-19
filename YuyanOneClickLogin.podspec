Pod::Spec.new do |s|
  s.name                = 'YuyanOneClickLogin'
  s.version             = '1.0.0'
  s.summary             = 'YuyanOneClickLogin for iOS'
  s.homepage            = 'https://www.xxxxxxx.com/'
  s.license             = { :type => 'Commercial', :text => '艾狄墨搏' }
  s.author              = { 'YuyanOneClickLogin Team' => 'tomato@admobile.top' }
  s.platform            = :ios, '8.0'
  s.source              = { :git => 'git@github.com:kaifa8019/yuyan-sdk-ios.git', :tag => s.version.to_s }
  s.requires_arc        = true

  s.vendored_frameworks = ['YuyanOneClickLogin.framework', 'ATAuthSDK.framework']

  s.resource_bundles = {
    'YuyanOneClickLogin' => ['Resource/**/*.bundle'],
  }
  
  s.dependency 'ADMobGenNetwork'
  s.dependency 'ADMobGenDeviceInfo'
end