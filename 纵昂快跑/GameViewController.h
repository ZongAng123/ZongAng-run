//
//  GameViewController.h
//  纵昂快跑
//
//  Created by 纵昂 on 2017/2/18.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SpriteKit/SpriteKit.h>
@interface GameViewController : UIViewController
@property (nonatomic, strong) SKView *skView;
@property (nonatomic, assign)float timeCount;
@property (nonatomic, strong)UILabel *label;
@property (nonatomic, strong)NSTimer *timer;
@property (nonatomic) BOOL isStart;
@end
