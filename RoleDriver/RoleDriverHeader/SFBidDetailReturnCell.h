//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, SFLinePointView, SFOrderAttributeView, SFToCBidModel, SFToCDistanceView, UILabel, UIView;

@interface SFBidDetailReturnCell : UITableViewCell
{
    SFToCBidModel *_model;
    UIView *_bgView;
    SFToCDistanceView *_distanceView;
    SFOrderAttributeView *_orderAttributeView;
    UIView *_toBgView;
    UILabel *_toLabel;
    SFLinePointView *_tolineView;
    UILabel *_toLinePriceLabel;
    UIView *_returnBgView;
    UILabel *_returnLabel;
    SFLinePointView *_returnLineView;
    UILabel *_returnLinePriceLabel;
    NSArray *_orderAttributeArray;
}

@property(retain, nonatomic) NSArray *orderAttributeArray; // @synthesize orderAttributeArray=_orderAttributeArray;
@property(retain, nonatomic) UILabel *returnLinePriceLabel; // @synthesize returnLinePriceLabel=_returnLinePriceLabel;
@property(retain, nonatomic) SFLinePointView *returnLineView; // @synthesize returnLineView=_returnLineView;
@property(retain, nonatomic) UILabel *returnLabel; // @synthesize returnLabel=_returnLabel;
@property(retain, nonatomic) UIView *returnBgView; // @synthesize returnBgView=_returnBgView;
@property(retain, nonatomic) UILabel *toLinePriceLabel; // @synthesize toLinePriceLabel=_toLinePriceLabel;
@property(retain, nonatomic) SFLinePointView *tolineView; // @synthesize tolineView=_tolineView;
@property(retain, nonatomic) UILabel *toLabel; // @synthesize toLabel=_toLabel;
@property(retain, nonatomic) UIView *toBgView; // @synthesize toBgView=_toBgView;
@property(retain, nonatomic) SFOrderAttributeView *orderAttributeView; // @synthesize orderAttributeView=_orderAttributeView;
@property(retain, nonatomic) SFToCDistanceView *distanceView; // @synthesize distanceView=_distanceView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) SFToCBidModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

