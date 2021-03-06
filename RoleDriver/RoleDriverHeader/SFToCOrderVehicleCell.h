//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SFImgTitleView, UILabel, UIView;
@protocol SFToCOrderVehicleCellDelegate;

@interface SFToCOrderVehicleCell : UITableViewCell
{
    id <SFToCOrderVehicleCellDelegate> _delegate;
    UIView *_bgView;
    UILabel *_vehicleNumLabel;
    UILabel *_vehicleNumTitleLabel;
    SFImgTitleView *_changeVehicleView;
}

@property(retain, nonatomic) SFImgTitleView *changeVehicleView; // @synthesize changeVehicleView=_changeVehicleView;
@property(retain, nonatomic) UILabel *vehicleNumTitleLabel; // @synthesize vehicleNumTitleLabel=_vehicleNumTitleLabel;
@property(retain, nonatomic) UILabel *vehicleNumLabel; // @synthesize vehicleNumLabel=_vehicleNumLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <SFToCOrderVehicleCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)changeVehicleAction;
- (void)setupVehicleNum:(id)arg1 showChangeVehicle:(_Bool)arg2;
- (void)myLayoutSubviews;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

