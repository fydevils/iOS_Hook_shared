//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SFApplyBusinessFootViewDelegate-Protocol.h"
#import "SFDragCellTableViewDataSource-Protocol.h"
#import "SFDragCellTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSMutableArray, NSString, SFApplyBusinessFootView, SFDragCellTableView, UIView;

@interface SFApplyConfirmVehicleVC : UIViewController <SFDragCellTableViewDelegate, SFDragCellTableViewDataSource, UITableViewDataSource, SFApplyBusinessFootViewDelegate>
{
    NSMutableArray *_dataArr;
    SFDragCellTableView *_tableView;
    SFApplyBusinessFootView *_footView;
    UIView *_headView;
}

@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) SFApplyBusinessFootView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) SFDragCellTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
- (void).cxx_destruct;
- (void)confirmBtnAction:(id)arg1;
- (void)cellDidEndMovingInTableView:(id)arg1;
- (void)tableView:(id)arg1 newArrayDataForDataSource:(id)arg2;
- (id)originalArrayDataForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

