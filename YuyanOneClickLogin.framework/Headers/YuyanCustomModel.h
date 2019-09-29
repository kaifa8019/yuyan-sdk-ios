//
//  YuyanCustomModel.h
//  YuyanOneClickLogin
//
//  Created by 白粿 on 2019/8/8.
//  Copyright © 2019 艾狄墨搏. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface YuyanCustomModel : NSObject

/// 请使用 [YuyanBaseConfig sdkVersion]
@property (nonatomic, assign) NSTimeInterval timeout NS_DEPRECATED_IOS(2_0,7_0, "请使用 [YuyanBaseConfig sdkVersion]");

// 导航栏
@property (nonatomic, strong) UIColor *navColor; // 导航栏主题色, 默认[UIColor whiteColor]
@property (nonatomic, copy) NSAttributedString *navTitle; // 导航栏标题，内容、字体、大小、颜色
@property (nonatomic, strong) UIImage *navBackImage; // 导航栏返回图片
@property (nonatomic, strong) UIBarButtonItem *navMoreControl; // 导航栏右侧自定义控件，UIBarButtonItem
@property (nonatomic, assign) BOOL hideNavBackItem;// 是否隐藏授权页导航栏返回按钮，默认不隐藏

// logo图片
@property (nonatomic, strong) UIImage *logoImage; // logo图片
@property (nonatomic, assign) CGSize logoSize; // logo大小
@property (nonatomic, assign) BOOL logoIsHidden; // logo是否隐藏
@property (nonatomic, assign) CGFloat logoTopOffetY; // logo相对导航栏底部的Y轴距离

// slogan
@property (nonatomic, copy) NSAttributedString *sloganText; // slogan文案，内容、字体、大小、颜色
@property (nonatomic, assign) BOOL sloganIsHidden; // slogan是否隐藏
@property (nonatomic, assign) CGFloat sloganTopOffetY; // slogan相对导航栏底部的Y轴距离

// 号码
@property (nonatomic, strong) UIColor *numberColor;
@property (nonatomic, strong) UIFont *numberFont;
@property (nonatomic, assign) CGFloat numberTopOffetY; // number相对导航栏底部的Y轴距离

@property (nonatomic, assign) CGFloat numberSize NS_DEPRECATED_IOS(2_0, 7_0, "请使用 numberFont");

// 登录
@property (nonatomic, strong) NSAttributedString *loginBtnText; // loginBtn文案
@property (nonatomic,strong) NSArray<UIImage *> *loginBtnBgImgs; //loginBtn背景图片组，高度50.0pt，@[激活状态的图片,失效状态的图片,高亮状态的图片]
@property (nonatomic, assign) CGFloat loginBtnTopOffetY; // loginBtn相对导航栏底部的Y轴距离
@property (nonatomic, assign) CGFloat loginBtnHeight; // loginBtn高度，必须大于40.0pt
@property (nonatomic, assign) CGFloat loginBtnLRPadding; // 按钮左右屏幕边距，按钮的宽度必须大于屏幕的一半

@property (nonatomic, strong) NSString *loginBtnTitle NS_DEPRECATED_IOS(2_0, 7_0, "请使用 loginBtnText");
@property (nonatomic, strong) UIColor *loginBtnTitleColor NS_DEPRECATED_IOS(2_0, 7_0, "请使用 loginBtnText");

// 协议
@property (nonatomic, copy) NSArray<UIImage *> *checkBoxImages; // checkBox图片组，[uncheckedImg,checkedImg]
@property (nonatomic, assign) BOOL checkBoxIsChecked; // checkBox是否勾选，默认YES
@property (nonatomic, copy) NSArray<NSString *> *privacyOne; // 协议1，[协议名称,协议Url]
@property (nonatomic, copy) NSArray<NSString *> *privacyTwo; // 协议2，[协议名称,协议Url]
@property (nonatomic, copy) NSArray<UIColor *> *privacyColors; // 协议内容颜色，[非点击文案颜色,协议颜色]
@property (nonatomic, assign) CGFloat privacyBottomOffetY; // 协议相对全屏底部的Y轴距离！！！与其他有区别

// 切换到其他方式
@property (nonatomic, copy) NSAttributedString *changeBtnTitle; // changeBtn标题，内容、字体、大小、颜色
@property (nonatomic, assign) BOOL changeBtnIsHidden; // changeBtn是否隐藏
@property (nonatomic, assign) CGFloat changeBtnTopOffetY; // changeBtn相对导航栏底部的Y轴距离

// 其他控件自定义block
@property (nonatomic,copy) void(^customViewBlock)(UIView *superCustomView);

@end
