//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface SFLineListView : UIView
{
    UILabel *_startTipLabel;
    UILabel *_startDateLabel;
    UILabel *_startAddressLabel;
    UILabel *_destTipLabel;
    UILabel *_destDateLabel;
    UILabel *_destAddressLabel;
    UIView *_line;
    UILabel *_passTipLabel;
    UILabel *_passNumLbel;
    unsigned long long _passPointNum;
}

@property(nonatomic) unsigned long long passPointNum; // @synthesize passPointNum=_passPointNum;
@property(retain, nonatomic) UILabel *passNumLbel; // @synthesize passNumLbel=_passNumLbel;
@property(retain, nonatomic) UILabel *passTipLabel; // @synthesize passTipLabel=_passTipLabel;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *destAddressLabel; // @synthesize destAddressLabel=_destAddressLabel;
@property(retain, nonatomic) UILabel *destDateLabel; // @synthesize destDateLabel=_destDateLabel;
@property(retain, nonatomic) UILabel *destTipLabel; // @synthesize destTipLabel=_destTipLabel;
@property(retain, nonatomic) UILabel *startAddressLabel; // @synthesize startAddressLabel=_startAddressLabel;
@property(retain, nonatomic) UILabel *startDateLabel; // @synthesize startDateLabel=_startDateLabel;
@property(retain, nonatomic) UILabel *startTipLabel; // @synthesize startTipLabel=_startTipLabel;
- (void).cxx_destruct;
- (void)setStartPointModel:(id)arg1 destPointModel:(id)arg2 passPointNum:(unsigned long long)arg3;
- (void)layoutSubviews;
- (void)setupUI;
- (id)init;

@end

