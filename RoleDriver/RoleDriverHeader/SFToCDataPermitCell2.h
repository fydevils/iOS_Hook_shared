//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSIndexPath, NSMutableArray, UIButton, UIImageView, UILabel, UIView;
@protocol SFToCDataPermitCellDelegate;

@interface SFToCDataPermitCell2 : UITableViewCell
{
    id <SFToCDataPermitCellDelegate> _delegate;
    NSIndexPath *_indexPath;
    NSMutableArray *_dataArr;
    UIImageView *_bgView;
    UILabel *_titleLab;
    UIView *_lineView;
    UIButton *_blueBtn;
    UIButton *_yellowBtn;
    UIButton *_greenBtn;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIButton *greenBtn; // @synthesize greenBtn=_greenBtn;
@property(retain, nonatomic) UIButton *yellowBtn; // @synthesize yellowBtn=_yellowBtn;
@property(retain, nonatomic) UIButton *blueBtn; // @synthesize blueBtn=_blueBtn;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak id <SFToCDataPermitCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)btnAction:(id)arg1;
- (void)confinfomationDataArr:(id)arg1 indexPath:(id)arg2 status:(unsigned long long)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

