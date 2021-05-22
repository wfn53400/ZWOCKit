//
//  UIViewConfigurationState+extension.h
//  Cat
//
//  Created by 张伟 on 2021/4/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (extension)

-(void)showAlertViewWith:(NSString *)title message:(nullable NSString *)message leftTitle:(NSString *)leftTitle rightTitle:(NSString *)rightTitle rightHandle:(void(^)(void))handle;

@end

NS_ASSUME_NONNULL_END
