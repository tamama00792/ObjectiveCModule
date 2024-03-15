//
//  OCMUtil.m
//  ObjectiveCModule
//
//  Created by 徐冰 on 2024/3/15.
//

#import "OCMObjectiveCUtil.h"

@implementation OCMObjectiveCUtil

+ (void)logClassMethod:(NSString *)info {
    NSLog(@"%s:%@",__func__,info);
}

- (void)logInstanceMethod:(NSString *)info {
    NSLog(@"%s:%@",__func__,info);
}

@end
