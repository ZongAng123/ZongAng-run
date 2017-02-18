//
//  RootViewController.h
//  纵昂快跑
//
//  Created by 纵昂 on 2017/2/18.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MenuViewController.h"
#import "GameViewController.h"

@interface RootViewController : UIViewController

@property (nonatomic, strong) MenuViewController *mvc;
@property (nonatomic, strong) GameViewController *gvc;

+ (RootViewController *)shareInstance;

@end
