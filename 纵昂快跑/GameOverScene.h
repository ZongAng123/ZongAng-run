//
//  GameOverScene.h
//  纵昂快跑
//
//  Created by 纵昂 on 2017/2/18.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface GameOverScene : SKScene

@property (nonatomic, assign) float time;
@property (nonatomic, assign) int score;

- (instancetype)initWithSize:(CGSize)size time:(float)time num:(int)num;

@end
