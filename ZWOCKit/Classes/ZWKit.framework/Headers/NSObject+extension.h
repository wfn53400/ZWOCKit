//
//  NSObject+extension.h
//  PhoneCall
//
//  Created by 张伟 on 2021/5/19.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Social/Social.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (extension)

-(NSString *)getCurrentAppVersion;

-(void)copyString:(NSString *)str;

-(void)shareObject:(NSArray *)objs;

@end

NS_ASSUME_NONNULL_END
