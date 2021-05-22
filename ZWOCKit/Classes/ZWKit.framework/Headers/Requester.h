//
//  Requester.h
//  Cat
//
//  Created by 张伟 on 2021/4/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsonRequester : NSObject
+ (id)getJsonDataJsonname:(NSString *)jsonname;
@end


@interface NetRequester : NSObject

+(instancetype)shareManager;

- (void)GET:(NSString *)url parameters:(id)parameters cachepolicy:(NSURLRequestCachePolicy)cachpolicy successs:(void (^)(id result))success failure:(void (^)(NSError *erro))failure;

- (void)POST:(NSString *)url parameters:(id _Nullable)parameters header:(NSDictionary *)header cachepolicy:(NSURLRequestCachePolicy)cachepolicy success:(void (^)(id result))success failure:(void (^)(NSError * erro))failure;

@end


NS_ASSUME_NONNULL_END
