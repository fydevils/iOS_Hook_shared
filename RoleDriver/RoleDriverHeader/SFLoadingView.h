//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAShapeLayer, NSString, UIButton, UIColor;

@interface SFLoadingView : UIView <CAAnimationDelegate>
{
    UIButton *_centerButton;
    double _lineWidth;
    double _radius;
    UIColor *_bgColor;
    UIColor *_strokeColor;
    double _progress;
    CDUnknownBlockType _progressChange;
    CAShapeLayer *_animatedLayer;
    CAShapeLayer *_backgroundLayer;
    unsigned long long _loadingStyle;
    CDUnknownBlockType _completion;
}

+ (id)loadingViewWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned long long loadingStyle; // @synthesize loadingStyle=_loadingStyle;
@property(retain, nonatomic) CAShapeLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) CAShapeLayer *animatedLayer; // @synthesize animatedLayer=_animatedLayer;
@property(copy, nonatomic) CDUnknownBlockType progressChange; // @synthesize progressChange=_progressChange;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIButton *centerButton; // @synthesize centerButton=_centerButton;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startLoadingWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideLoadingView;
- (void)stopLoading;
- (void)startLoading;
- (struct CGPoint)layerCenter;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupDeterminateAnim:(id)arg1;
- (void)setupIndeterminateMaskAnim:(id)arg1;
- (void)setupIndeterminateAnim:(id)arg1;
- (void)layoutAnimatedLayer;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 loadingStyle:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

