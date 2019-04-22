//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, SFLinePointView, SFOrderAttributeView, SFToCBidModel, SFToCDistanceView, UIView;

@interface SFBidDetailOneCell : UITableViewCell
{
    SFToCBidModel *_model;
    UIView *_bgView;
    SFOrderAttributeView *_orderAttributeView;
    SFLinePointView *_lineView;
    NSArray *_orderAttributeArray;
    SFToCDistanceView *_distanceView;
}

@property(retain, nonatomic) SFToCDistanceView *distanceView; // @synthesize distanceView=_distanceView;
@property(retain, nonatomic) NSArray *orderAttributeArray; // @synthesize orderAttributeArray=_orderAttributeArray;
@property(retain, nonatomic) SFLinePointView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) SFOrderAttributeView *orderAttributeView; // @synthesize orderAttributeView=_orderAttributeView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) SFToCBidModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)contactUS:(id)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

