//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UITableView;

@interface SFToCMarketTimeFilterView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isInitByToCMarketVC;
    CDUnknownBlockType _block;
    UITableView *_table;
    NSMutableArray *_dataArray;
    UIButton *_confirmBut;
}

@property(nonatomic) _Bool isInitByToCMarketVC; // @synthesize isInitByToCMarketVC=_isInitByToCMarketVC;
@property(retain, nonatomic) UIButton *confirmBut; // @synthesize confirmBut=_confirmBut;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *table; // @synthesize table=_table;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (id)getSelectedItem;
- (void)saveSelectedItem:(id)arg1;
- (void)confirmAction:(id)arg1;
- (void)reset;
- (void)hidden;
- (id)appRootViewController;
- (void)show;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)layoutSubviews;
- (void)setupUI;
- (void)getdata;
- (id)initByToCMarketBidVC;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

