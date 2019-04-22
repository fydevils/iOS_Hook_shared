//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, UIView;
@protocol SFToCOrderAccountItemCellDelegate;

@interface SFToCOrderAccountItemCell : UITableViewCell
{
    _Bool _isSettle;
    _Bool _isfistIndex;
    _Bool _islastIndex;
    id <SFToCOrderAccountItemCellDelegate> _delegate;
    UILabel *_accountLabel;
    UILabel *_valueLabel;
    UIButton *_priceBtn;
    UIView *_bottomLine;
}

@property(nonatomic) _Bool islastIndex; // @synthesize islastIndex=_islastIndex;
@property(nonatomic) _Bool isfistIndex; // @synthesize isfistIndex=_isfistIndex;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIButton *priceBtn; // @synthesize priceBtn=_priceBtn;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *accountLabel; // @synthesize accountLabel=_accountLabel;
@property(nonatomic) _Bool isSettle; // @synthesize isSettle=_isSettle;
@property(nonatomic) __weak id <SFToCOrderAccountItemCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)priceAction;
- (void)setTitle:(id)arg1 value:(double)arg2 isfirstIndex:(_Bool)arg3 islastIndex:(_Bool)arg4;
- (void)updateLayoutViews;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
