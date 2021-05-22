//
//  NSString+Extension.h
//  PhoneCall
//
//  Created by 张伟 on 2021/5/15.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (Extension)

+(NSString *)timeStringWith:(NSInteger)time dateFormatter:(NSString *)formatter;

@end

NS_ASSUME_NONNULL_END
