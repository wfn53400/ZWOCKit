//
//  UITableView+Extension.h
//  FuturesNews
//
//  Created by 张伟 on 2021/3/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITableView (Extension)

-(void)cellWithNib:(Class)nibName;
-(__kindof UITableViewCell *)dequeueWithClass:(Class)className;
@end

NS_ASSUME_NONNULL_END
