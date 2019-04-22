//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFToCBaseVC.h"

@class NSString, UIButton, UILabel, UIView;

@interface SFToCAddGapVC : SFToCBaseVC
{
    UIView *_addGapView;
    UIButton *_addGapBtn;
    UILabel *_startLabel;
    UILabel *_desLabel;
    UIView *_selectTimeView;
    UILabel *_gapTimeLabel;
    NSString *_startTime;
    NSString *_endTime;
    NSString *_startCityCode;
    NSString *_destCityCode;
}

@property(copy, nonatomic) NSString *destCityCode; // @synthesize destCityCode=_destCityCode;
@property(copy, nonatomic) NSString *startCityCode; // @synthesize startCityCode=_startCityCode;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) UILabel *gapTimeLabel; // @synthesize gapTimeLabel=_gapTimeLabel;
@property(retain, nonatomic) UIView *selectTimeView; // @synthesize selectTimeView=_selectTimeView;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *startLabel; // @synthesize startLabel=_startLabel;
@property(retain, nonatomic) UIButton *addGapBtn; // @synthesize addGapBtn=_addGapBtn;
@property(retain, nonatomic) UIView *addGapView; // @synthesize addGapView=_addGapView;
- (void).cxx_destruct;
- (void)refreshAddGapButtonStatus;
- (void)selectTimeTap;
- (void)desLabelTap;
- (void)startLabelTap;
- (void)gatherGroundTbpIdleImmediately;
- (void)addGapAction;
- (void)createUI;
- (void)viewDidLoad;

@end
