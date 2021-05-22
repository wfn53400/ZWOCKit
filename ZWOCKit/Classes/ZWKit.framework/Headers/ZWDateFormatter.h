//
//  ZWDateFormatter.h
//  PhoneCall
//
//  Created by 张伟 on 2021/5/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZWDateFormatter : NSDateFormatter

+ (instancetype)shareFormatter;

@end

NS_ASSUME_NONNULL_END
