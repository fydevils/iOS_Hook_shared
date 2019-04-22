//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UIImage, UIImageView, UILabel;

@interface SFImgTitleView : UIView
{
    UIImage *_image;
    NSString *_title;
    UIColor *_titleColor;
    UIFont *_titleFont;
    double _intervalSpace;
    long long _style;
    UIImageView *_imageView;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double intervalSpace; // @synthesize intervalSpace=_intervalSpace;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithEdgeInsetsStyle:(long long)arg1 image:(id)arg2 title:(id)arg3 titleColor:(id)arg4 titleFont:(id)arg5 intervalSpace:(double)arg6;

@end

