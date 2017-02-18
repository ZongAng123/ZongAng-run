//
//  TimeManager.h
//  纵昂快跑
//
//  Created by 纵昂 on 2017/2/18.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TimeManager : NSObject

@property (nonatomic, assign) float timeCount;

+ (TimeManager *) shareInstance;

@end
