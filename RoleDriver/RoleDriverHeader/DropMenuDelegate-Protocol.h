//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DropMenuView, NSIndexPath, NSMutableArray, NSString, UITableView;

@protocol DropMenuDelegate <NSObject>

@optional
- (void)backAllTaskSelectArr:(NSMutableArray *)arg1 btnText:(NSString *)arg2;
- (void)menu:(DropMenuView *)arg1 tableView:(UITableView *)arg2 didSelectRowAtIndexPath:(NSIndexPath *)arg3 backAllTaskSelectArr:(NSMutableArray *)arg4 btnText:(NSString *)arg5;
@end

