//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SFCustomLabel, UILabel, UIView;

@interface SFToCPassPointCell : UITableViewCell
{
    UILabel *_leftTypeLab;
    UILabel *_timeLab;
    SFCustomLabel *_titleLabel;
    UIView *_lineView;
}

+ (double)cellHeightWithTitle:(id)arg1;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) SFCustomLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *timeLab; // @synthesize timeLab=_timeLab;
@property(retain, nonatomic) UILabel *leftTypeLab; // @synthesize leftTypeLab=_leftTypeLab;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)confinfomationDataArr:(id)arg1 indexPath:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

