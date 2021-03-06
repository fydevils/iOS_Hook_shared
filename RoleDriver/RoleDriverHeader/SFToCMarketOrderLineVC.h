//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFToCBaseVC.h"

#import "SFToCMarketDatePickerViewDelegate-Protocol.h"
#import "SFToCMarketSelectedViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SFToCMarketSelectedView, UIButton, UILabel, UIScrollView, UITableView, UIView;

@interface SFToCMarketOrderLineVC : SFToCBaseVC <UITableViewDataSource, UITableViewDelegate, SFToCMarketSelectedViewDelegate, SFToCMarketDatePickerViewDelegate>
{
    _Bool _isDelete;
    _Bool _isCancel;
    _Bool _isEndTime;
    UIScrollView *_contentView;
    UIView *_reminderView;
    UITableView *_tableView;
    UIView *_addLineView;
    UIButton *_addLineBtn;
    UILabel *_startLabel;
    UILabel *_desLabel;
    NSMutableArray *_subscribeLineArray;
    NSMutableArray *_plateTitleArray;
    NSMutableArray *_plateLabelArray;
    NSString *_startCityName;
    NSString *_desCityName;
    NSString *_startCityCode;
    NSString *_desCityCode;
    NSString *_startProvinceCode;
    NSString *_desProvinceCode;
    NSString *_startProvinceStr;
    NSString *_desProvinceStr;
    SFToCMarketSelectedView *_selectedView;
    UIView *_timeView;
    UILabel *_beginTimeLabel;
    UILabel *_endTimeLabel;
    NSString *_beginTimeStr;
    NSString *_endTimeStr;
}

@property(nonatomic) _Bool isEndTime; // @synthesize isEndTime=_isEndTime;
@property(copy, nonatomic) NSString *endTimeStr; // @synthesize endTimeStr=_endTimeStr;
@property(copy, nonatomic) NSString *beginTimeStr; // @synthesize beginTimeStr=_beginTimeStr;
@property(retain, nonatomic) UILabel *endTimeLabel; // @synthesize endTimeLabel=_endTimeLabel;
@property(retain, nonatomic) UILabel *beginTimeLabel; // @synthesize beginTimeLabel=_beginTimeLabel;
@property(retain, nonatomic) UIView *timeView; // @synthesize timeView=_timeView;
@property(retain, nonatomic) SFToCMarketSelectedView *selectedView; // @synthesize selectedView=_selectedView;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(copy, nonatomic) NSString *desProvinceStr; // @synthesize desProvinceStr=_desProvinceStr;
@property(copy, nonatomic) NSString *startProvinceStr; // @synthesize startProvinceStr=_startProvinceStr;
@property(copy, nonatomic) NSString *desProvinceCode; // @synthesize desProvinceCode=_desProvinceCode;
@property(copy, nonatomic) NSString *startProvinceCode; // @synthesize startProvinceCode=_startProvinceCode;
@property(copy, nonatomic) NSString *desCityCode; // @synthesize desCityCode=_desCityCode;
@property(copy, nonatomic) NSString *startCityCode; // @synthesize startCityCode=_startCityCode;
@property(copy, nonatomic) NSString *desCityName; // @synthesize desCityName=_desCityName;
@property(copy, nonatomic) NSString *startCityName; // @synthesize startCityName=_startCityName;
@property(retain, nonatomic) NSMutableArray *plateLabelArray; // @synthesize plateLabelArray=_plateLabelArray;
@property(retain, nonatomic) NSMutableArray *plateTitleArray; // @synthesize plateTitleArray=_plateTitleArray;
@property(retain, nonatomic) NSMutableArray *subscribeLineArray; // @synthesize subscribeLineArray=_subscribeLineArray;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *startLabel; // @synthesize startLabel=_startLabel;
@property(retain, nonatomic) UIButton *addLineBtn; // @synthesize addLineBtn=_addLineBtn;
@property(retain, nonatomic) UIView *addLineView; // @synthesize addLineView=_addLineView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *reminderView; // @synthesize reminderView=_reminderView;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)trackEventWithEventID:(id)arg1;
- (void)enterWithYear:(id)arg1 month:(id)arg2 day:(id)arg3 hour:(id)arg4;
- (void)showAlertView;
- (void)isFisrtQueryReturnLines;
- (void)selectActionSender:(id)arg1 tagIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshAddLineButtonStatus;
- (void)endTimeLabelTap;
- (void)beginTimeLabelTap;
- (void)desLabelTap;
- (void)startLabelTap;
- (void)addLineAction;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)deleteSubscriptionLineWithLineModel:(id)arg1;
- (void)addSubscriptionLineToServer;
- (void)queryMySubscriptionLineListFromServer;
- (void)pullDownRefresh;
- (void)showSubcribeLines;
- (void)showRemindView;
- (void)setUpAddLineView;
- (void)createUI;
- (void)refreshList;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

