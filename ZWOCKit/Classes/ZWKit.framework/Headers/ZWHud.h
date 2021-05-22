//
//  QQHHudView.h
//  FuturesNews
//
//  Created by 张伟 on 2021/3/23.
//

#import <Foundation/Foundation.h>
#import "ZWHudConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface ZWHud : NSObject

+(ZWHudConfig *)defaultConfig;
+(void)showMessageWithConfig:(ZWHudConfig *)config message:(NSString *)message finishHandle:(nullable void(^)(void))finish;

@end

NS_ASSUME_NONNULL_END
