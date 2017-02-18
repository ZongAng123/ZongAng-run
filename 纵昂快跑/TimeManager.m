//
//  TimeManager.m
//  纵昂快跑
//
//  Created by 纵昂 on 2017/2/18.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#import "TimeManager.h"

@implementation TimeManager

@synthesize timeCount = _timeCount;

+ (TimeManager *)shareInstance
{
    static id sharedInstance = nil;
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[self alloc] init];
    });
    
    return sharedInstance;
}

@end
