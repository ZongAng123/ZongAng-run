//
//  GameViewController.m
//  纵昂快跑
//
//  Created by 纵昂 on 2017/2/18.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#import "GameViewController.h"
#import "FirstGameScene.h"
@interface GameViewController ()

@end

@implementation GameViewController
- (void)viewWillLayoutSubviews
{
    [super viewWillLayoutSubviews];
    
    self.skView = [[SKView alloc] initWithFrame:self.view.bounds];
    [self.view addSubview:_skView];
    if (!_skView.scene) {
        //        _skView.showsFPS=YES;
        //        _skView.showsNodeCount=YES;
        _skView.backgroundColor=[SKColor redColor];
        
        SKScene *scene = [FirstGameScene sceneWithSize:_skView.bounds.size];
        [_skView presentScene:scene];
        
    }
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
