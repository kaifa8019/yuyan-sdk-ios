//
//  YuyanCustomModel.h
//  YuyanOneClickLogin
//
//  Created by 白粿 on 2019/8/8.
//  Copyright © 2019 艾狄墨搏. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "YuyanCustomNavModel.h"
#import "YuyanCustomLogoModel.h"
#import "YuyanCustomAgreementModel.h"

@interface YuyanCustomModel : NSObject

/// 导航栏设置
@property (nonatomic, strong) YuyanCustomNavModel *nav;

/// logo图设置
@property (nonatomic, strong) YuyanCustomLogoModel *logo;

// slogan
@property (nonatomic, copy) NSAttributedString *sloganText; // slogan文案，内容、字体、大小、颜色
@property (nonatomic, assign) BOOL sloganIsHidden; // slogan是否隐藏
@property (nonatomic, assign) CGFloat sloganTopOffetY; // slogan相对导航栏底部的Y轴距离

// 号码
@property (nonatomic, strong) UIColor *numberColor;
@property (nonatomic, strong) UIFont *numberFont;
@property (nonatomic, assign) CGFloat numberTopOffetY; // number相对导航栏底部的Y轴距离

// 登录
@property (nonatomic, strong) NSAttributedString *loginBtnText; // loginBtn文案
@property (nonatomic,strong) NSArray<UIImage *> *loginBtnBgImgs; //loginBtn背景图片组，高度50.0pt，@[激活状态的图片,失效状态的图片,高亮状态的图片]
@property (nonatomic, assign) CGFloat loginBtnTopOffetY; // loginBtn相对导航栏底部的Y轴距离
@property (nonatomic, assign) CGFloat loginBtnHeight; // loginBtn高度，必须大于40.0pt
@property (nonatomic, assign) CGFloat loginBtnLRPadding; // 按钮左右屏幕边距，按钮的宽度必须大于屏幕的一半

/// 协议设置
@property (nonatomic, strong) YuyanCustomAgreementModel *agreement;

// 切换到其他方式
@property (nonatomic, copy) NSAttributedString *changeBtnTitle; // changeBtn标题，内容、字体、大小、颜色
@property (nonatomic, assign) BOOL changeBtnIsHidden; // changeBtn是否隐藏
@property (nonatomic, assign) CGFloat changeBtnTopOffetY; // changeBtn相对导航栏底部的Y轴距离

// 其他控件自定义block
@property (nonatomic,copy) void(^customViewBlock)(UIView *superCustomView);

@end
