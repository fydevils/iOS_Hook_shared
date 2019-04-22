//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol SFToCListFootViewDelegate;

@interface SFToCListFootView : UIView
{
    id <SFToCListFootViewDelegate> _delegate;
    UIImageView *_bgView;
    UILabel *_titleLab;
    UIButton *_confirmBtn;
}

@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <SFToCListFootViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)confirmBtn:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 backCount:(long long)arg2;

@end

