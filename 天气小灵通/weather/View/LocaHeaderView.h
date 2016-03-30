//
//  AboutViewController.m
//  天气助手
//
//  Created by Treney on 16/3/30.
//  Copyright © 2016年 apple. All rights reserved.
//
#import <UIKit/UIKit.h>
@class CitiesGroup,LocaHeaderView;

@protocol LocaHeaderViewDelegate <NSObject>
@optional
- (void)headerViewDidClickedNameView:(LocaHeaderView *)locaheaderview;
@end

@interface LocaHeaderView : UITableViewHeaderFooterView
+ (instancetype)headerWithTableView:(UITableView *)tableview;
@property (nonatomic , strong) CitiesGroup *groups;

@property (nonatomic, weak) id<LocaHeaderViewDelegate> delegate;

@end
