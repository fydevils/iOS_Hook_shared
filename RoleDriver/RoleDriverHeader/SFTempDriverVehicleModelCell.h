//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface SFTempDriverVehicleModelCell : UITableViewCell
{
    UIView *_bgView;
    UILabel *_titleLabel;
    UIImageView *_selectIconView;
}

@property(retain, nonatomic) UIImageView *selectIconView; // @synthesize selectIconView=_selectIconView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)updateStatus:(_Bool)arg1;
- (void)setTitle:(id)arg1;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
