//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFBaseCell.h"

@class UILabel, UIView;

@interface SFToCMarketLineEditCell : SFBaseCell
{
    _Bool _isEdit;
    CDUnknownBlockType _editBlock;
    UILabel *_editLabel;
    UIView *_editView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *editView; // @synthesize editView=_editView;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
@property(retain, nonatomic) UILabel *editLabel; // @synthesize editLabel=_editLabel;
@property(copy, nonatomic) CDUnknownBlockType editBlock; // @synthesize editBlock=_editBlock;
- (void).cxx_destruct;
- (void)editTap;
- (void)createUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

