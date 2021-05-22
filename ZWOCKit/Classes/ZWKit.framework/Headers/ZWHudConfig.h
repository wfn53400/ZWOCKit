//
//  ZWHudConfig.h
//  ZWKit
//
//  Created by 张伟 on 2021/5/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZWHudConfig : NSObject

/// 背景色
@property(nonatomic) UIColor * backColor;
/// 文字颜色
@property(nonatomic) UIColor * textColor;
/// 字体
@property(nonatomic) UIFont * textFont;
/// 显示时长
@property(nonatomic) CGFloat duration;

@end

NS_ASSUME_NONNULL_END
