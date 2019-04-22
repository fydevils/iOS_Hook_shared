//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, SFToCMarketBidFailView, SFToCMarketBidPriceView, SFToCMarketBidSuccView, UITableView;
@protocol SFToCMarketRecommendDelegate;

@interface SFToCMarketRecommendView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_dataArray;
    NSString *_failMsg;
    NSString *_successMsg;
    id <SFToCMarketRecommendDelegate> _delegate;
    UITableView *_table;
    UIView *_headerView;
    SFToCMarketBidSuccView *_succView;
    SFToCMarketBidFailView *_failView;
    SFToCMarketBidPriceView *_priceView;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) SFToCMarketBidPriceView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) SFToCMarketBidFailView *failView; // @synthesize failView=_failView;
@property(retain, nonatomic) SFToCMarketBidSuccView *succView; // @synthesize succView=_succView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *table; // @synthesize table=_table;
@property(nonatomic) __weak id <SFToCMarketRecommendDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *successMsg; // @synthesize successMsg=_successMsg;
@property(retain, nonatomic) NSString *failMsg; // @synthesize failMsg=_failMsg;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (id)getPushSource;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 withRecommendType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
