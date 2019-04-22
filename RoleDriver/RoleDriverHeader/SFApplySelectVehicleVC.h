//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFToCBaseVC.h"

#import "SFApplyBusinessFootViewDelegate-Protocol.h"
#import "SFApplySelectVehicleCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SFApplyBusinessFootView, UITableView;

@interface SFApplySelectVehicleVC : SFToCBaseVC <UITableViewDelegate, UITableViewDataSource, SFApplyBusinessFootViewDelegate, SFApplySelectVehicleCellDelegate>
{
    UITableView *_tableView;
    NSMutableArray *_dataArr;
    NSMutableArray *_selectedArray;
    SFApplyBusinessFootView *_footView;
}

@property(retain, nonatomic) SFApplyBusinessFootView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) NSMutableArray *selectedArray; // @synthesize selectedArray=_selectedArray;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)confirmBtnAction:(id)arg1;
- (_Bool)calculateSelectedArray;
- (void)selectCellAction:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)reloadTableView;
- (void)requestDataWithParam;
- (void)pullDownRefresh;
- (void)createUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

