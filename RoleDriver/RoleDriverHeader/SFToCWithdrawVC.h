//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFBaseVC.h"

#import "SFToCWithdrawCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSNumber, NSString, SFToCAccountBalanceVM, SFToCBankListModel, SFToCWithdrawBankCell, SFToCWithdrawCell, SFToCWithdrawMoneyCell, TPKeyboardAvoidingScrollView, UIButton, UILabel, UITableView;

@interface SFToCWithdrawVC : SFBaseVC <UITableViewDelegate, UITableViewDataSource, SFToCWithdrawCellDelegate>
{
    NSString *_withdrawLimit;
    NSString *_accountId;
    TPKeyboardAvoidingScrollView *_contentScrollView;
    UITableView *_tableView;
    NSMutableArray *_dataArr;
    NSNumber *_limitWithdraw;
    UILabel *_limitWithdrawLabel;
    UIButton *_withdrawBtn;
    SFToCWithdrawCell *_nameCell;
    SFToCWithdrawCell *_cardNumCell;
    SFToCWithdrawBankCell *_bankCell;
    SFToCWithdrawMoneyCell *_withdrawMoneyCell;
    UILabel *_tipsLabel;
    SFToCBankListModel *_bankModel;
    SFToCAccountBalanceVM *_accountBalanceVM;
}

@property(retain, nonatomic) SFToCAccountBalanceVM *accountBalanceVM; // @synthesize accountBalanceVM=_accountBalanceVM;
@property(retain, nonatomic) SFToCBankListModel *bankModel; // @synthesize bankModel=_bankModel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) SFToCWithdrawMoneyCell *withdrawMoneyCell; // @synthesize withdrawMoneyCell=_withdrawMoneyCell;
@property(retain, nonatomic) SFToCWithdrawBankCell *bankCell; // @synthesize bankCell=_bankCell;
@property(retain, nonatomic) SFToCWithdrawCell *cardNumCell; // @synthesize cardNumCell=_cardNumCell;
@property(retain, nonatomic) SFToCWithdrawCell *nameCell; // @synthesize nameCell=_nameCell;
@property(retain, nonatomic) UIButton *withdrawBtn; // @synthesize withdrawBtn=_withdrawBtn;
@property(retain, nonatomic) UILabel *limitWithdrawLabel; // @synthesize limitWithdrawLabel=_limitWithdrawLabel;
@property(retain, nonatomic) NSNumber *limitWithdraw; // @synthesize limitWithdraw=_limitWithdraw;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TPKeyboardAvoidingScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) NSString *withdrawLimit; // @synthesize withdrawLimit=_withdrawLimit;
- (void).cxx_destruct;
- (void)changeWithdrawBtnStatus;
- (void)addUnderLineForCell:(id)arg1 cellHeight:(double)arg2 lineX:(double)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateTableViewFrameByBankName:(id)arg1;
- (void)withdrawAction;
- (void)tapAction;
- (void)allWithdrawAction;
- (void)updateWithdrawButton;
- (void)initTipsView;
- (void)initFooterView;
- (void)initTableViewFooterView;
- (void)creatUI;
- (void)getDataSources;
- (void)accountBalanceFinish:(CDUnknownBlockType)arg1;
- (void)searchRecentlyUsedBankInfoByAccountIdFinish:(CDUnknownBlockType)arg1;
- (void)queryByUserIdFinish:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

