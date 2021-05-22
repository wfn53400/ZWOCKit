//
//  KeyChain.h
//  demo
//
//  Created by 张伟 on 2021/5/16.
//

#import <Foundation/Foundation.h>
#import <Security/Security.h>

NS_ASSUME_NONNULL_BEGIN

@interface KeyChain : NSObject

+ (NSMutableDictionary *)getKeychainQuery:(NSString *)key;

/// 保存信息到keychain
+ (void)save:(NSString *)key data:(id)data;

// load username and password from keychain
+ (id)getValue:(NSString *)key;

// delete username and password from keychain
+ (void)removeKey:(NSString *)serviece;

@end

NS_ASSUME_NONNULL_END
