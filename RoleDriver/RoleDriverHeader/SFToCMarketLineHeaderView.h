//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIButton;

@interface SFToCMarketLineHeaderView : UIView
{
    CDUnknownBlockType _block;
    NSArray *_titleArray;
    UIButton *_selectedBtn;
    UIView *_bottomLine;
    NSMutableArray *_contentArray;
}

@property(retain, nonatomic) NSMutableArray *contentArray; // @synthesize contentArray=_contentArray;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIButton *selectedBtn; // @synthesize selectedBtn=_selectedBtn;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)updateBottomLineViewLocation:(unsigned long long)arg1;
- (void)setSelectIndex:(long long)arg1;
- (void)action:(id)arg1;
- (void)setupUI;
- (id)init;

@end

