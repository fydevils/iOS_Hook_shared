//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SFToCAccountBalanceModel, UILabel;

@interface SFToCWalletHeaderView : UIView
{
    SFToCAccountBalanceModel *_model;
    UILabel *_titleLabel;
    UILabel *_accountSumLabel;
}

@property(retain, nonatomic) UILabel *accountSumLabel; // @synthesize accountSumLabel=_accountSumLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SFToCAccountBalanceModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)accountNoCertification;
- (void)layoutSubviews;
- (void)setupUI;
- (id)init;

@end

