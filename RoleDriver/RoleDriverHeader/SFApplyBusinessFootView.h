//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol SFApplyBusinessFootViewDelegate;

@interface SFApplyBusinessFootView : UIView
{
    id <SFApplyBusinessFootViewDelegate> _delegate;
    UILabel *_exceptionLab;
    UIButton *_confirmBtn;
}

@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UILabel *exceptionLab; // @synthesize exceptionLab=_exceptionLab;
@property(nonatomic) __weak id <SFApplyBusinessFootViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshItem:(long long)arg1;
- (void)confirmBtn:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 ishowRightLab:(_Bool)arg2;

@end

