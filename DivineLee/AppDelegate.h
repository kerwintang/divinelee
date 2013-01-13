//
//  AppDelegate.h
//  DivineLee
//
//  Created by Ana Katrina  Chong on 10/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SplashViewController.h"
#import "FBConnect.h"


@interface AppDelegate : UIResponder <UIApplicationDelegate, FBSessionDelegate>{
    
    Facebook *facebook;
    SplashViewController *splashViewController;
}

@property (strong, nonatomic) Facebook *facebook;
@property (strong, nonatomic) IBOutlet UIWindow *window;
@property (strong, nonatomic) IBOutlet SplashViewController *splashViewController;

@end
