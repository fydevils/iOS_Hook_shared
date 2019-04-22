//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFTrackVC.h"

#import "SFTocHomeCalendarCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SFToCOrderFeeStatModel, UITableView;

@interface SFTocHomeCalendarVC : SFTrackVC <UITableViewDelegate, UITableViewDataSource, SFTocHomeCalendarCellDelegate>
{
    long long _currentMonth;
    long long _currentYear;
    UITableView *_myTableView;
    NSString *_planSendTimeStart;
    NSString *_planSendTimeEnd;
    NSMutableArray *_orderCalendarArray;
    SFToCOrderFeeStatModel *_orderFeeStatModel;
}

@property(retain, nonatomic) SFToCOrderFeeStatModel *orderFeeStatModel; // @synthesize orderFeeStatModel=_orderFeeStatModel;
@property(retain, nonatomic) NSMutableArray *orderCalendarArray; // @synthesize orderCalendarArray=_orderCalendarArray;
@property(retain, nonatomic) NSString *planSendTimeEnd; // @synthesize planSendTimeEnd=_planSendTimeEnd;
@property(retain, nonatomic) NSString *planSendTimeStart; // @synthesize planSendTimeStart=_planSendTimeStart;
@property(retain, nonatomic) UITableView *myTableView; // @synthesize myTableView=_myTableView;
- (void).cxx_destruct;
- (void)login;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)noLoginPushLoginVC;
- (void)pushMarketBidDetail:(id)arg1;
- (void)pushBackTrackList:(id)arg1;
- (void)pushTaskDetail:(id)arg1;
- (void)pushTaskList:(id)arg1;
- (void)gatherGroundTbpIdledistribution;
- (void)neutralDistribution;
- (void)didTocHomeCellTocCalendarViewTocCalendarModel:(id)arg1;
- (void)tocHomeCellYear:(long long)arg1 month:(long long)arg2;
- (void)queryOrderFeeStat;
- (void)queryOrderByTimeRange;
- (void)fetchUserDataFromPullDown;
- (void)ishavePlanSendTimeStartAndPlanSendTimeEndWithYear:(long long)arg1 month:(long long)arg2;
- (void)addRefreshToTableView;
- (void)initViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
