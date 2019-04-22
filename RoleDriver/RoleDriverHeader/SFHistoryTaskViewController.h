//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFBaseRefreshVC.h"

#import "DropMenuDataSource-Protocol.h"
#import "DropMenuDelegate-Protocol.h"
#import "SFCalendarViewDataSource-Protocol.h"
#import "SFCalendarViewDelegate-Protocol.h"
#import "SFSelectBtnViewDelegate-Protocol.h"

@class DropMenuView, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString, SFCalendarView, SFSelectBtnView, UIButton, UILabel, UIView;

@interface SFHistoryTaskViewController : SFBaseRefreshVC <SFSelectBtnViewDelegate, DropMenuDelegate, DropMenuDataSource, SFCalendarViewDataSource, SFCalendarViewDelegate>
{
    UIView *_headView;
    UILabel *_countLab;
    long long _allCount;
    long long _refreshType;
    SFCalendarView *_sfCalendarView;
    DropMenuView *_menuView;
    SFSelectBtnView *_selectBtnView;
    UIButton *_rightBtn;
    long long _selectedIndex;
    NSMutableArray *_selectArr;
    NSMutableArray *_menuArray;
    NSMutableArray *_dataArr;
    NSMutableDictionary *_taskCountDict;
    NSString *_username;
    NSDate *_startDate;
    NSDate *_endDate;
    long long _page;
    NSString *_startDateTime;
    NSString *_endDateTime;
    NSString *_taskURL;
    NSString *_numURL;
    NSArray *_states;
    long long _selectNum;
}

@property(nonatomic) long long selectNum; // @synthesize selectNum=_selectNum;
@property(retain, nonatomic) NSArray *states; // @synthesize states=_states;
@property(copy, nonatomic) NSString *numURL; // @synthesize numURL=_numURL;
@property(copy, nonatomic) NSString *taskURL; // @synthesize taskURL=_taskURL;
@property(copy, nonatomic) NSString *endDateTime; // @synthesize endDateTime=_endDateTime;
@property(copy, nonatomic) NSString *startDateTime; // @synthesize startDateTime=_startDateTime;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSMutableDictionary *taskCountDict; // @synthesize taskCountDict=_taskCountDict;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) NSMutableArray *menuArray; // @synthesize menuArray=_menuArray;
@property(retain, nonatomic) NSMutableArray *selectArr; // @synthesize selectArr=_selectArr;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) SFSelectBtnView *selectBtnView; // @synthesize selectBtnView=_selectBtnView;
@property(retain, nonatomic) DropMenuView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) SFCalendarView *sfCalendarView; // @synthesize sfCalendarView=_sfCalendarView;
@property(nonatomic) long long refreshType; // @synthesize refreshType=_refreshType;
@property(nonatomic) long long allCount; // @synthesize allCount=_allCount;
@property(retain, nonatomic) UILabel *countLab; // @synthesize countLab=_countLab;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
- (void).cxx_destruct;
- (id)oneDayWithDate:(id)arg1 countDay:(long long)arg2;
- (void)sfqueryFinishedTask:(long long)arg1;
- (void)sfqueryFinishedTaskAllCount:(long long)arg1;
- (void)sfqueryFinishedTaskDayCount:(long long)arg1;
- (void)loadMoreData;
- (void)loadNewData;
- (void)setupGTLCalendarViews;
- (void)selectNSStringFromDate:(id)arg1 toDate:(id)arg2;
- (long long)itemWidthForGTLCalendar;
- (long long)rangeDaysForGTLCalendar;
- (id)defaultSelectToDate;
- (id)defaultSelectFromDate;
- (id)maximumDateForSFCalendar;
- (id)minimumDateForSFCalendar;
- (id)updateForTaskURL:(long long)arg1 taskURLType:(long long)arg2;
- (void)menu:(id)arg1 tableView:(id)arg2 didSelectRowAtIndexPath:(id)arg3 backAllTaskSelectArr:(id)arg4 btnText:(id)arg5;
- (id)menu_filterDataArray;
- (void)removeSFCalendarView;
- (void)removeTopMenuView;
- (void)rightBarButtonItemAction:(id)arg1;
- (id)appRootViewController;
- (void)selectActionSender:(id)arg1 type:(long long)arg2;
- (void)pushTaskDetailViewControllerModel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initViewsWithNavRightItem:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

