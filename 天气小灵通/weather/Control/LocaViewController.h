//
//  AboutViewController.m
//  天气助手
//
//  Created by Treney on 16/3/30.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>
@class LocaViewController;
@protocol LocaViewControllerDelegate <NSObject>

@optional
-(void)locaviewwithview:(LocaViewController *)locaviewcontrol  provice:(NSString *)provice city:(NSString *)city;

@end

@interface LocaViewController : UIViewController
@property (nonatomic , weak) id<LocaViewControllerDelegate> delegate;

@property (nonatomic , copy) NSString *currentTitle;

@end
