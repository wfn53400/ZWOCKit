//
//  ZWKitHeader.h
//  ZWKit
//
//  Created by 张伟 on 2021/5/21.
//

#ifndef ZWKitHeader_h
#define ZWKitHeader_h

#define WINDOW  UIApplication.sharedApplication.windows.firstObject
#define IPHONE_X UIApplication.sharedApplication.windows.firstObject.safeAreaInsets.bottom > 0.0
#define KscreenWidth UIScreen.mainScreen.bounds.size.width
#define KscreenHeight UIScreen.mainScreen.bounds.size.height

#define KstatusBarHeight IPHONE_X ? 44 : 20
#define KNavigationBarY IPHONE_X ? 88 : 64
#define KbottomArea UIApplication.sharedApplication.windows.firstObject.safeAreaInsets.bottom
#define KtabBarHeight IPHONE_X ? 49 : 34

#define CustomNavigationBarHeight IPHONE_X ? 124 : 104
#define APP UIApplication.sharedApplication

#define SETVALUEFORKEY(value,key) [NSUserDefaults.standardUserDefaults setValue:value forKey:key]; \
                                  [NSUserDefaults.standardUserDefaults synchronize];

#define LOADVALUEFORKEY(key) [NSUserDefaults.standardUserDefaults valueForKey:key]


#import <UIKit/UIKit.h>

#import "ZWDateFormatter.h"
#import "KeyChain.h"

#import "Requester.h"
#import "ZWHud.h"
#import "ZWHudConfig.h"
#import "ZWTools.h"
#import "FSTextView.h"
#import "UINavigationController+FDFullscreenPopGesture.h"

//extensions
#import "NSArray+extension.h"
#import "UIColor+Extension.h"
#import "UILabel+extension.h"
#import "UITableView+Extension.h"
#import "UIView+Extension.h"
#import "UIViewController+extension.h"
#import "UIButton+extension.h"
#import "NSString+Extension.h"
#import "NSObject+extension.h"

//base
#import "BaseTableView.h"
#import "BaseTableViewCell.h"

#endif /* ZWKitHeader_h */
