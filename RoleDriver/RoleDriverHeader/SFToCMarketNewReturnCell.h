//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSTimer, SFLinePointView, SFToCBidModel, SFToCBidRemarkView, UIButton, UIImageView, UILabel, UIView;

@interface SFToCMarketNewReturnCell : UITableViewCell
{
    NSTimer *_timer;
    SFToCBidModel *_model;
    double _topIntervalSapce;
    CDUnknownBlockType _block;
    UIView *_bgView;
    UIImageView *_reNewImgView;
    UIImageView *_recommendBgImgV;
    UILabel *_recommendLabel;
    UIImageView *_financeLeaseImgV;
    UILabel *_financeLeaseLabel;
    SFToCBidRemarkView *_remarkView;
    NSArray *_orderAttributeArray;
    UILabel *_toLabel;
    SFLinePointView *_tolineView;
    UILabel *_returnLabel;
    SFLinePointView *_returnLineView;
    UIView *_orderAvaliableView;
    UILabel *_orderAvaliableTimeTimeLabel;
    UILabel *_orderAvaliableTimeTitle;
    UIView *_orderBidView;
    UILabel *_orderMoneyLabel;
    UILabel *_bargaLabel;
    UIButton *_directGrabBtn;
    UIButton *_thinkPriceBtn;
    UILabel *_orderMoneyTitleLabel;
    UIImageView *_hasBiddenView;
}

@property(retain, nonatomic) UIImageView *hasBiddenView; // @synthesize hasBiddenView=_hasBiddenView;
@property(retain, nonatomic) UILabel *orderMoneyTitleLabel; // @synthesize orderMoneyTitleLabel=_orderMoneyTitleLabel;
@property(retain, nonatomic) UIButton *thinkPriceBtn; // @synthesize thinkPriceBtn=_thinkPriceBtn;
@property(retain, nonatomic) UIButton *directGrabBtn; // @synthesize directGrabBtn=_directGrabBtn;
@property(retain, nonatomic) UILabel *bargaLabel; // @synthesize bargaLabel=_bargaLabel;
@property(retain, nonatomic) UILabel *orderMoneyLabel; // @synthesize orderMoneyLabel=_orderMoneyLabel;
@property(retain, nonatomic) UIView *orderBidView; // @synthesize orderBidView=_orderBidView;
@property(retain, nonatomic) UILabel *orderAvaliableTimeTitle; // @synthesize orderAvaliableTimeTitle=_orderAvaliableTimeTitle;
@property(retain, nonatomic) UILabel *orderAvaliableTimeTimeLabel; // @synthesize orderAvaliableTimeTimeLabel=_orderAvaliableTimeTimeLabel;
@property(retain, nonatomic) UIView *orderAvaliableView; // @synthesize orderAvaliableView=_orderAvaliableView;
@property(retain, nonatomic) SFLinePointView *returnLineView; // @synthesize returnLineView=_returnLineView;
@property(retain, nonatomic) UILabel *returnLabel; // @synthesize returnLabel=_returnLabel;
@property(retain, nonatomic) SFLinePointView *tolineView; // @synthesize tolineView=_tolineView;
@property(retain, nonatomic) UILabel *toLabel; // @synthesize toLabel=_toLabel;
@property(retain, nonatomic) NSArray *orderAttributeArray; // @synthesize orderAttributeArray=_orderAttributeArray;
@property(retain, nonatomic) SFToCBidRemarkView *remarkView; // @synthesize remarkView=_remarkView;
@property(retain, nonatomic) UILabel *financeLeaseLabel; // @synthesize financeLeaseLabel=_financeLeaseLabel;
@property(retain, nonatomic) UIImageView *financeLeaseImgV; // @synthesize financeLeaseImgV=_financeLeaseImgV;
@property(retain, nonatomic) UILabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(retain, nonatomic) UIImageView *recommendBgImgV; // @synthesize recommendBgImgV=_recommendBgImgV;
@property(retain, nonatomic) UIImageView *reNewImgView; // @synthesize reNewImgView=_reNewImgView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) double topIntervalSapce; // @synthesize topIntervalSapce=_topIntervalSapce;
@property(retain, nonatomic) SFToCBidModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)dealloc;
- (void)bargaLayoutSubviews;
- (void)bidLayoutSubviews;
- (void)myLayoutSubviews;
- (void)thinkPriceAction;
- (void)directGrabAction;
- (void)setupUI;
- (void)orderAvaliableTime;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
