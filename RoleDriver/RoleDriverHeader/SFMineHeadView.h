//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface SFMineHeadView : UIView
{
    UIView *_blueView;
    UIView *_headBgView;
    UIImageView *_portraitView;
    UILabel *_nameLab;
    UILabel *_jobNumLab;
}

@property(retain, nonatomic) UILabel *jobNumLab; // @synthesize jobNumLab=_jobNumLab;
@property(retain, nonatomic) UILabel *nameLab; // @synthesize nameLab=_nameLab;
@property(retain, nonatomic) UIImageView *portraitView; // @synthesize portraitView=_portraitView;
@property(retain, nonatomic) UIView *headBgView; // @synthesize headBgView=_headBgView;
@property(retain, nonatomic) UIView *blueView; // @synthesize blueView=_blueView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
