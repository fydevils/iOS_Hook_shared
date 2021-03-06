//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSTimer, SFImgTitleView, SFLinePointView, SFToCBidModel, SFToCBidRemarkView, SFToCProgressView, UIButton, UIImageView, UILabel, UIView;

@interface SFToCMarketGroupCell : UITableViewCell
{
    NSTimer *_timer;
    double _topIntervalSapce;
    SFToCBidModel *_model;
    CDUnknownBlockType _block;
    UIView *_bgView;
    UIImageView *_recommendBgImgV;
    UILabel *_recommendLabel;
    UIImageView *_financeLeaseImgV;
    UILabel *_financeLeaseLabel;
    UIImageView *_packageImgView;
    UILabel *_packageImgLabel;
    SFImgTitleView *_dateView;
    SFLinePointView *_tolineView;
    SFLinePointView *_returnLineView;
    UILabel *_packageLabel;
    SFToCProgressView *_progressView;
    SFToCBidRemarkView *_remarkView;
    NSArray *_orderAttributeArray;
    UIView *_orderAvaliableView;
    UILabel *_orderAvaliableTimeTimeLabel;
    UILabel *_orderAvaliableTimeTitle;
    UIView *_orderBidView;
    UILabel *_orderMoneyLabel;
    UIButton *_groupBidBut;
    UILabel *_orderMoneyTitleLabel;
    UIImageView *_hasBiddenView;
}

@property(retain, nonatomic) UIImageView *hasBiddenView; // @synthesize hasBiddenView=_hasBiddenView;
@property(retain, nonatomic) UILabel *orderMoneyTitleLabel; // @synthesize orderMoneyTitleLabel=_orderMoneyTitleLabel;
@property(retain, nonatomic) UIButton *groupBidBut; // @synthesize groupBidBut=_groupBidBut;
@property(retain, nonatomic) UILabel *orderMoneyLabel; // @synthesize orderMoneyLabel=_orderMoneyLabel;
@property(retain, nonatomic) UIView *orderBidView; // @synthesize orderBidView=_orderBidView;
@property(retain, nonatomic) UILabel *orderAvaliableTimeTitle; // @synthesize orderAvaliableTimeTitle=_orderAvaliableTimeTitle;
@property(retain, nonatomic) UILabel *orderAvaliableTimeTimeLabel; // @synthesize orderAvaliableTimeTimeLabel=_orderAvaliableTimeTimeLabel;
@property(retain, nonatomic) UIView *orderAvaliableView; // @synthesize orderAvaliableView=_orderAvaliableView;
@property(retain, nonatomic) NSArray *orderAttributeArray; // @synthesize orderAttributeArray=_orderAttributeArray;
@property(retain, nonatomic) SFToCBidRemarkView *remarkView; // @synthesize remarkView=_remarkView;
@property(retain, nonatomic) SFToCProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *packageLabel; // @synthesize packageLabel=_packageLabel;
@property(retain, nonatomic) SFLinePointView *returnLineView; // @synthesize returnLineView=_returnLineView;
@property(retain, nonatomic) SFLinePointView *tolineView; // @synthesize tolineView=_tolineView;
@property(retain, nonatomic) SFImgTitleView *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) UILabel *packageImgLabel; // @synthesize packageImgLabel=_packageImgLabel;
@property(retain, nonatomic) UIImageView *packageImgView; // @synthesize packageImgView=_packageImgView;
@property(retain, nonatomic) UILabel *financeLeaseLabel; // @synthesize financeLeaseLabel=_financeLeaseLabel;
@property(retain, nonatomic) UIImageView *financeLeaseImgV; // @synthesize financeLeaseImgV=_financeLeaseImgV;
@property(retain, nonatomic) UILabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(retain, nonatomic) UIImageView *recommendBgImgV; // @synthesize recommendBgImgV=_recommendBgImgV;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) SFToCBidModel *model; // @synthesize model=_model;
@property(nonatomic) double topIntervalSapce; // @synthesize topIntervalSapce=_topIntervalSapce;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)dealloc;
- (void)myLayoutSubviews;
- (void)groupBidAction;
- (void)setupUI;
- (void)orderAvaliableTime;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

