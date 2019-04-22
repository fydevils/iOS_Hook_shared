//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SFToCBidChecklistAlertModel, UIButton, UITableView;

@interface SFToCBidChecklistAlertView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    CDUnknownBlockType _block;
    NSString *_title;
    NSMutableArray *_listArray;
    UITableView *_tab;
    UIButton *_okButton;
    UIButton *_cancelButton;
    SFToCBidChecklistAlertModel *_selectedModel;
}

@property(retain, nonatomic) SFToCBidChecklistAlertModel *selectedModel; // @synthesize selectedModel=_selectedModel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UITableView *tab; // @synthesize tab=_tab;
@property(retain, nonatomic) NSMutableArray *listArray; // @synthesize listArray=_listArray;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (id)appRootViewController;
- (void)close;
- (void)show;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)closeBtnAction;
- (void)okButtonAction;
- (void)setupUI;
- (id)initWithTitle:(id)arg1 listArray:(id)arg2 andBtnClick:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
