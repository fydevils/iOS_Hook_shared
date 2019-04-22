//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LJWKeyboardToolBarDelegate-Protocol.h"

@class LJWKeyboardToolBar, NSString, UIView;

@interface LJWKeyboardHandler : NSObject <LJWKeyboardToolBarDelegate>
{
    _Bool _shouldShowKeyboardToolBar;
    _Bool _isKeyboardShowing;
    _Bool _isOrigin;
    double _assistantHeight;
    UIView *_firstResponder;
    UIView *_viewNeedsToBeReset;
    LJWKeyboardToolBar *_ljwKeyboardToolBar;
    struct CGRect _keyboardFrame;
}

+ (id)shareHandler;
+ (void)initialize;
@property(retain, nonatomic) LJWKeyboardToolBar *ljwKeyboardToolBar; // @synthesize ljwKeyboardToolBar=_ljwKeyboardToolBar;
@property(retain, nonatomic) UIView *viewNeedsToBeReset; // @synthesize viewNeedsToBeReset=_viewNeedsToBeReset;
@property(retain, nonatomic) UIView *firstResponder; // @synthesize firstResponder=_firstResponder;
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(nonatomic) _Bool isOrigin; // @synthesize isOrigin=_isOrigin;
@property(nonatomic) _Bool isKeyboardShowing; // @synthesize isKeyboardShowing=_isKeyboardShowing;
@property(nonatomic) _Bool shouldShowKeyboardToolBar; // @synthesize shouldShowKeyboardToolBar=_shouldShowKeyboardToolBar;
@property(nonatomic) double assistantHeight; // @synthesize assistantHeight=_assistantHeight;
- (void).cxx_destruct;
- (void)didFirstResponderChanged:(id)arg1;
- (id)getPresentViewController:(id)arg1;
- (void)dealloc;
- (void)addBoundsChangeAnimationFrome:(struct CGRect)arg1 to:(struct CGRect)arg2 inView:(id)arg3;
- (void)setOrigin;
- (void)resetTheViewNeedsToBeResetAppropraitly;
- (void)willKeyboardHide:(id)arg1;
- (void)willKeyboardShow:(id)arg1;
- (void)stopHandling;
- (void)startHandling;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

