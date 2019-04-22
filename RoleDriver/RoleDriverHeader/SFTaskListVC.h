//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFToCBaseVC.h"

#import "SFToCListFootViewDelegate-Protocol.h"
#import "SFTocHomeTaskListCellDlegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SFToCListFootView, UITableView;

@interface SFTaskListVC : SFToCBaseVC <UITableViewDataSource, UITableViewDelegate, SFTocHomeTaskListCellDlegate, SFToCListFootViewDelegate>
{
    double _planDatestamp;
    long long _backCount;
    UITableView *_bgTableView;
    NSMutableArray *_dataArr;
    SFToCListFootView *_footView;
}

@property(retain, nonatomic) SFToCListFootView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) UITableView *bgTableView; // @synthesize bgTableView=_bgTableView;
@property(nonatomic) long long backCount; // @synthesize backCount=_backCount;
@property(nonatomic) double planDatestamp; // @synthesize planDatestamp=_planDatestamp;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)confirmBtnAction:(id)arg1;
- (void)callPhone:(id)arg1;
- (void)queryTaskDetail:(id)arg1;
- (void)startTask:(id)arg1;
- (void)cancelTask:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadDataTableView;
- (void)loadData;
- (void)pullDownRefresh;
- (void)createUI;
- (void)refreshTaskState;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

