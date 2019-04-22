//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton;
@protocol SFToCCargoRecordHeaderViewDelegate;

@interface SFToCCargoRecordHeaderView : UIView
{
    id <SFToCCargoRecordHeaderViewDelegate> _delegate;
    NSArray *_titleArray;
    UIButton *_selectedBtn;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIButton *selectedBtn; // @synthesize selectedBtn=_selectedBtn;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(nonatomic) __weak id <SFToCCargoRecordHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)menuClick:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
