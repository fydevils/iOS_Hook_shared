//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface SFToCOrderHeaderView : UIView
{
    CDUnknownBlockType _block;
    NSArray *_valueArray;
    NSMutableArray *_contentArray;
    UIView *_selectedView;
}

@property(retain, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) NSMutableArray *contentArray; // @synthesize contentArray=_contentArray;
@property(retain, nonatomic) NSArray *valueArray; // @synthesize valueArray=_valueArray;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)setButton:(id)arg1 badgeValue:(id)arg2 isRedBall:(_Bool)arg3;
- (void)setupUnSettleCount:(long long)arg1;
- (void)updateSelectedViewLocation:(unsigned long long)arg1;
- (void)setSelectIndex:(long long)arg1;
- (void)action:(id)arg1;
- (void)setupUI;
- (id)init;

@end
