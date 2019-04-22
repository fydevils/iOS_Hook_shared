//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol SFToCMarketSelectedViewDelegate;

@interface SFToCMarketSelectedView : UIView
{
    id <SFToCMarketSelectedViewDelegate> _delegate;
    UIView *_bgView;
    UIButton *_leftBtn;
    UIButton *_rightBtn;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) UIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <SFToCMarketSelectedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 letftTitle:(id)arg2 rightTitle:(id)arg3;

@end
