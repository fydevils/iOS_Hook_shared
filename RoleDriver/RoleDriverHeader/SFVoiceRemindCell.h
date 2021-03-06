//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSIndexPath, UIImageView, UILabel, UISwitch, UIView;
@protocol SFVoiceRemindCellDelegate;

@interface SFVoiceRemindCell : UITableViewCell
{
    NSIndexPath *_indexPath;
    id <SFVoiceRemindCellDelegate> _delegate;
    UIImageView *_bgView;
    UILabel *_titleLab;
    UILabel *_detailLab;
    UISwitch *_swit;
    UIView *_lineView;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UISwitch *swit; // @synthesize swit=_swit;
@property(retain, nonatomic) UILabel *detailLab; // @synthesize detailLab=_detailLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <SFVoiceRemindCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)switchAction:(id)arg1;
- (void)confinfomationDataArr:(id)arg1 indexPath:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

