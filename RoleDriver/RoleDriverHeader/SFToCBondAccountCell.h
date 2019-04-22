//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SFToCDepositPaymentOrderModel, UIButton, UILabel, UIView;

@interface SFToCBondAccountCell : UITableViewCell
{
    _Bool _isSelected;
    SFToCDepositPaymentOrderModel *_model;
    UIView *_bgView;
    UILabel *_titleLabel;
    UILabel *_timeLabel;
    UILabel *_valueLabel;
    UILabel *_tradeFlowNumberTitle;
    UILabel *_tradeFlowNumberLabel;
    UILabel *_paymentMethodLabel;
    UILabel *_statusLabel;
    UIView *_splitLine;
    UIButton *_selectedBtn;
}

@property(retain, nonatomic) UIButton *selectedBtn; // @synthesize selectedBtn=_selectedBtn;
@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *paymentMethodLabel; // @synthesize paymentMethodLabel=_paymentMethodLabel;
@property(retain, nonatomic) UILabel *tradeFlowNumberLabel; // @synthesize tradeFlowNumberLabel=_tradeFlowNumberLabel;
@property(retain, nonatomic) UILabel *tradeFlowNumberTitle; // @synthesize tradeFlowNumberTitle=_tradeFlowNumberTitle;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) SFToCDepositPaymentOrderModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)setupTextColorByAppStatus:(id)arg1;
- (id)getAppStatus:(id)arg1;
- (id)getPaymentMethod:(id)arg1;
- (void)didSelectedTheCell;
- (void)clickAction:(id)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
