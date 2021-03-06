//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFToCBaseVC.h"

#import "DZNEmptyDataSetDelegate-Protocol.h"
#import "DZNEmptyDataSetSource-Protocol.h"
#import "SFBidDetailBargaRuleCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, NSTimer, SFImgTitleView, SFToCMarketBargaDetailVM, TPKeyboardAvoidingTableView, UIButton, UILabel, UIView;

@interface SFToCMarketBargaDetailVC : SFToCBaseVC <UITableViewDelegate, UITableViewDataSource, DZNEmptyDataSetSource, DZNEmptyDataSetDelegate, SFBidDetailBargaRuleCellDelegate>
{
    NSTimer *_timer;
    _Bool _packageShowMore;
    _Bool _isCancel;
    long long _biddingId;
    NSString *_pushSource;
    NSString *_distance;
    UIView *_topView;
    SFImgTitleView *_topTipView;
    TPKeyboardAvoidingTableView *_table;
    SFToCMarketBargaDetailVM *_bidDetailVM;
    UIView *_bottomView;
    UIButton *_bargaBut;
    SFImgTitleView *_orderAvaliableTimeTimeView;
    UILabel *_protocolLabel;
    UIButton *_cancelBargaBut;
    UIButton *_reBargaBut;
    UIButton *_bargaConfirmBut;
    UIButton *_bargaCancelBut;
    UIButton *_checkOrderDetailBut;
}

@property(retain, nonatomic) UIButton *checkOrderDetailBut; // @synthesize checkOrderDetailBut=_checkOrderDetailBut;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(retain, nonatomic) UIButton *bargaCancelBut; // @synthesize bargaCancelBut=_bargaCancelBut;
@property(retain, nonatomic) UIButton *bargaConfirmBut; // @synthesize bargaConfirmBut=_bargaConfirmBut;
@property(retain, nonatomic) UIButton *reBargaBut; // @synthesize reBargaBut=_reBargaBut;
@property(retain, nonatomic) UIButton *cancelBargaBut; // @synthesize cancelBargaBut=_cancelBargaBut;
@property(retain, nonatomic) UILabel *protocolLabel; // @synthesize protocolLabel=_protocolLabel;
@property(retain, nonatomic) SFImgTitleView *orderAvaliableTimeTimeView; // @synthesize orderAvaliableTimeTimeView=_orderAvaliableTimeTimeView;
@property(retain, nonatomic) UIButton *bargaBut; // @synthesize bargaBut=_bargaBut;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) SFToCMarketBargaDetailVM *bidDetailVM; // @synthesize bidDetailVM=_bidDetailVM;
@property(nonatomic) _Bool packageShowMore; // @synthesize packageShowMore=_packageShowMore;
@property(retain, nonatomic) TPKeyboardAvoidingTableView *table; // @synthesize table=_table;
@property(retain, nonatomic) SFImgTitleView *topTipView; // @synthesize topTipView=_topTipView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(copy, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSString *pushSource; // @synthesize pushSource=_pushSource;
@property(nonatomic) long long biddingId; // @synthesize biddingId=_biddingId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)gatherGroundDriverPlusTradeDetail;
- (void)bargaRuleAction;
- (void)protocalAction;
- (void)checkBidDetail:(id)arg1;
- (void)bargaConfirm:(id)arg1;
- (void)bargaCancel:(id)arg1;
- (void)reBarga:(id)arg1;
- (void)cancelBarga:(id)arg1;
- (void)barga:(id)arg1;
- (_Bool)emptyDataSetShouldAllowScroll:(id)arg1;
- (id)titleForEmptyDataSet:(id)arg1;
- (id)imageForEmptyDataSet:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)bidAvaliableTime;
- (void)refreshView;
- (void)pullDownRefresh;
- (void)backDidClicked;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

