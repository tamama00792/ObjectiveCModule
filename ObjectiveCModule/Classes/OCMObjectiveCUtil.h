//
//  OCMUtil.h
//  ObjectiveCModule
//
//  Created by 徐冰 on 2024/3/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 跨组件调用OC方法的工具类（被调用方）
@interface OCMObjectiveCUtil : NSObject

+ (void)logClassMethod:(NSString *)info;

- (void)logInstanceMethod:(NSString *)info;

@end

NS_ASSUME_NONNULL_END
