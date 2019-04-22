//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UITableView;

@interface SFToCSelectCarAlertView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isCanClick;
    CDUnknownBlockType _block;
    CDUnknownBlockType _selectedBlock;
    long long _biddingId;
    NSString *_deptCode;
    long long _taskId;
    NSMutableArray *_dataArr;
    long long _selectIndex;
    UIButton *_okButton;
    UITableView *_tab;
    UIButton *_closeButton;
}

@property(nonatomic) _Bool isCanClick; // @synthesize isCanClick=_isCanClick;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UITableView *tab; // @synthesize tab=_tab;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(nonatomic) long long taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) NSString *deptCode; // @synthesize deptCode=_deptCode;
@property(nonatomic) long long biddingId; // @synthesize biddingId=_biddingId;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (id)appRootViewController;
- (void)close;
- (void)show;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadDataWithRequestSuccess:(CDUnknownBlockType)arg1;
- (void)closeBtnAction;
- (void)okButtonAction;
- (void)setupUI;
- (id)initWithBiddingId:(long long)arg1 andBtnClick:(CDUnknownBlockType)arg2;
- (id)initWithBiddingId:(long long)arg1 deptCode:(id)arg2 taskId:(long long)arg3 andBtnClick:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
