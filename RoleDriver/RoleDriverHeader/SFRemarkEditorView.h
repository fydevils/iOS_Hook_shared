//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SFPlaceHolderTextView;

@interface SFRemarkEditorView : UIView
{
    CDUnknownBlockType _onBlock;
    SFPlaceHolderTextView *_remarkText;
}

@property(retain, nonatomic) SFPlaceHolderTextView *remarkText; // @synthesize remarkText=_remarkText;
@property(copy, nonatomic) CDUnknownBlockType onBlock; // @synthesize onBlock=_onBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (id)appRootViewController;
- (void)close;
- (void)show;
- (void)closeBtnAction:(id)arg1;
- (void)buttonClick:(id)arg1;
- (void)tapAction;
- (id)initWithTitle:(id)arg1 leftButtonTitle:(id)arg2 rightButtonTitle:(id)arg3 placeholder:(id)arg4 andBlock:(CDUnknownBlockType)arg5;

@end

