//
//  MenuViewController.h
//  纵昂快跑
//
//  Created by 纵昂 on 2017/2/18.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MenuView.h"

@import SpriteKit;

@interface MenuViewController : UIViewController

@property (nonatomic, strong) MenuView *menuView;
@property (nonatomic) BOOL isReturnBack;
@property (nonatomic, strong) SKView *skView;

@end
