//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer;

@interface SFSVProgressHUD : UIView
{
    int _progressType;
    double _minimumDismissTimeInterval;
    CDUnknownBlockType _onBlock;
    NSTimer *_fadeOutTimer;
}

+ (double)displayDurationForString:(id)arg1;
+ (void)dismiss;
+ (void)showImage:(id)arg1 status:(id)arg2;
+ (void)showWithStatus:(id)arg1;
+ (void)setMinimumDismissTimeInterval:(double)arg1;
+ (id)sharedView;
@property(retain, nonatomic) NSTimer *fadeOutTimer; // @synthesize fadeOutTimer=_fadeOutTimer;
@property(copy, nonatomic) CDUnknownBlockType onBlock; // @synthesize onBlock=_onBlock;
@property(nonatomic) double minimumDismissTimeInterval; // @synthesize minimumDismissTimeInterval=_minimumDismissTimeInterval;
@property(nonatomic) int progressType; // @synthesize progressType=_progressType;
- (void).cxx_destruct;
- (id)appRootViewController;
- (void)timerRelease;
- (void)hidHUD;
- (void)updateWithImage:(id)arg1 status:(id)arg2;
- (void)showImage:(id)arg1 status:(id)arg2 duration:(double)arg3;

@end

