//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SFToCAddVehicleModel, UIImageView, UILabel, UIView;

@interface SFToCAddVehicleCell : UITableViewCell
{
    SFToCAddVehicleModel *_model;
    UILabel *_plateLab;
    UILabel *_carTypeLabel;
    UIView *_lineView;
    UIImageView *_iconImage;
    UILabel *_tipLab;
}

@property(retain, nonatomic) UILabel *tipLab; // @synthesize tipLab=_tipLab;
@property(retain, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *carTypeLabel; // @synthesize carTypeLabel=_carTypeLabel;
@property(retain, nonatomic) UILabel *plateLab; // @synthesize plateLab=_plateLab;
@property(retain, nonatomic) SFToCAddVehicleModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)createUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

