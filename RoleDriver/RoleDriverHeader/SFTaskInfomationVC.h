//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFBaseRefreshVC.h"

#import "SFAbnormalHandelVCDelegate-Protocol.h"
#import "SFSelectAllViewDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, SFSelectAllView, SFSelectBtnView, UIButton;

@interface SFTaskInfomationVC : SFBaseRefreshVC <SFSelectAllViewDelegate, SFAbnormalHandelVCDelegate>
{
    _Bool _isCurrentView;
    SFSelectBtnView *_selectBtnView;
    UIButton *_rightNavBtn;
    SFSelectAllView *_selectAllView;
    NSMutableArray *_dataArr;
    NSMutableArray *_deleteArr;
    NSIndexPath *_oldIndexPath;
}

@property(retain, nonatomic) NSIndexPath *oldIndexPath; // @synthesize oldIndexPath=_oldIndexPath;
@property(retain, nonatomic) NSMutableArray *deleteArr; // @synthesize deleteArr=_deleteArr;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) SFSelectAllView *selectAllView; // @synthesize selectAllView=_selectAllView;
@property(nonatomic) _Bool isCurrentView; // @synthesize isCurrentView=_isCurrentView;
@property(retain, nonatomic) UIButton *rightNavBtn; // @synthesize rightNavBtn=_rightNavBtn;
@property(retain, nonatomic) SFSelectBtnView *selectBtnView; // @synthesize selectBtnView=_selectBtnView;
- (void).cxx_destruct;
- (id)appRootViewController;
- (void)dismiss:(double)arg1;
- (void)show:(double)arg1;
- (void)setBottomBtnSateType;
- (void)deleteBtnClick;
- (void)emptySelectClick;
- (void)allSelectClick;
- (void)bottomViewButtonAction:(long long)arg1;
- (void)reloadTableView_newdData:(_Bool)arg1 isRefresh:(_Bool)arg2;
- (void)loadMoreData;
- (void)loadNewData;
- (void)viewWillDisappearAction;
- (void)viewWillAppearAction;
- (void)setTableViewEditing;
- (void)updateT_app_message;
- (void)unFinisDetailReload;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)showPermitAlertViewMessage:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initTabView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

