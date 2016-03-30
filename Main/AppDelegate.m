//
//  AboutViewController.m
//  天气助手
//
//  Created by Treney on 16/3/30.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "AppDelegate.h"
#import "WeatherViewController.h"




@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.window.backgroundColor = [UIColor whiteColor];
    WeatherViewController *main = [[WeatherViewController alloc]init];
    self.window.rootViewController = main;
    [self.window makeKeyAndVisible];
    


    return YES;
}
@end
