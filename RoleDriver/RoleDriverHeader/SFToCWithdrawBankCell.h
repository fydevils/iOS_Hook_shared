//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIImageView, UILabel, UIView;

@interface SFToCWithdrawBankCell : UITableViewCell <UITextFieldDelegate>
{
    UILabel *_detailLabel;
    NSString *_bankName;
    double _cellHeight;
    UILabel *_titleLabel;
    UIImageView *_icon;
    UIView *_line;
}

@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

