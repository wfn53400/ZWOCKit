//
//  UIColor+Extension.h
//  FuturesNews
//
//  Created by 张伟 on 2021/3/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (Extension)
+ (UIColor *) colorWithHexString: (NSString *)color;
+(UIColor *)themeColor;

@end

NS_ASSUME_NONNULL_END
