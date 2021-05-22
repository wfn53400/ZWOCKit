//
//  QHTools.h
//  FuturesNews
//
//  Created by 张伟 on 2021/3/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZWTools : NSObject

+ (UIViewController *)currentTopViewController;

@property(nonatomic,class) BOOL isLogin;

/// 打电话
/// @param phoneNumber 电话号码
+(void)phoneCall:(NSString *)phoneNumber;

/// 在App Store打开APP
/// @param appId APPID
+(void)commentAppWithAppidId:(NSInteger)appId;

/// 更新APP
/// @param appId APPID
+(void)updateAppWithAppId:(NSInteger)appId;

/// 分享
+ (void)shareApplicationWithAppId:(NSString *)appId;

@end

NS_ASSUME_NONNULL_END
