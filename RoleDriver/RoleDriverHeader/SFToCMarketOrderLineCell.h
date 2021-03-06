//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFBaseCell.h"

@class SFSubscribeLineModel, UIImageView, UILabel, UIView;

@interface SFToCMarketOrderLineCell : SFBaseCell
{
    CDUnknownBlockType _deleteBlock;
    UIImageView *_middleIcon;
    UIView *_deleteImageView;
    UIImageView *_deleteIcon;
    UIImageView *_arrowIcon;
    UILabel *_startLab;
    UILabel *_desLab;
    SFSubscribeLineModel *_model;
}

+ (double)cellHeight;
@property(retain, nonatomic) SFSubscribeLineModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *desLab; // @synthesize desLab=_desLab;
@property(retain, nonatomic) UILabel *startLab; // @synthesize startLab=_startLab;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) UIImageView *deleteIcon; // @synthesize deleteIcon=_deleteIcon;
@property(retain, nonatomic) UIView *deleteImageView; // @synthesize deleteImageView=_deleteImageView;
@property(retain, nonatomic) UIImageView *middleIcon; // @synthesize middleIcon=_middleIcon;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)deleteAction;
- (void)configureSubscribeLine:(id)arg1 isDelete:(_Bool)arg2;
- (void)createUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

