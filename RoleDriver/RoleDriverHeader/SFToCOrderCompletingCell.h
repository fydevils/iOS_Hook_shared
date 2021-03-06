//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, SFToCOrderInfoListView, SFToCOrderLineListView, SFToCOrderModel, UIButton, UIImageView, UIView;

@interface SFToCOrderCompletingCell : UITableViewCell
{
    SFToCOrderModel *_model;
    CDUnknownBlockType _taskBlock;
    UIView *_bgView;
    UIImageView *_ongingImgView;
    SFToCOrderLineListView *_lineView;
    SFToCOrderInfoListView *_attributeView;
    NSArray *_orderAttributeArray;
    UIButton *_taskBtn;
}

+ (double)getCellHeight:(id)arg1;
@property(retain, nonatomic) UIButton *taskBtn; // @synthesize taskBtn=_taskBtn;
@property(retain, nonatomic) NSArray *orderAttributeArray; // @synthesize orderAttributeArray=_orderAttributeArray;
@property(retain, nonatomic) SFToCOrderInfoListView *attributeView; // @synthesize attributeView=_attributeView;
@property(retain, nonatomic) SFToCOrderLineListView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *ongingImgView; // @synthesize ongingImgView=_ongingImgView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType taskBlock; // @synthesize taskBlock=_taskBlock;
@property(retain, nonatomic) SFToCOrderModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)viewTaskAction;
- (void)layoutViews;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

