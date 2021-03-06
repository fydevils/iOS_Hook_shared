//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SFDatePickerViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, SFToCLocationService, SFToCMarketVehicleLineTypeView, SFUserLocation, UIButton, UIImageView, UILabel, UIScrollView;

@interface SFToCMarketVehicleLineFilter : UIView <SFDatePickerViewDelegate>
{
    _Bool _isInitByToCMarketVC;
    CDUnknownBlockType _vehicleLineFilterBlock;
    UIScrollView *_bgScrollView;
    UIButton *_confirmBut;
    UIView *_dateSelectView;
    UIView *_dateViewLine;
    UILabel *_timeTitleLab;
    UILabel *_dateLab;
    UIImageView *_timeIcon;
    NSArray *_myVehicleInfo;
    NSMutableArray *_nearbyArray;
    SFToCMarketVehicleLineTypeView *_nearbyTypeView;
    UIView *_nearbyTypeViewLine;
    NSMutableArray *_myVehicleTypeArray;
    SFToCMarketVehicleLineTypeView *_myVehicleTypeView;
    UIView *_myVehicleTypeViewLine;
    NSMutableArray *_vehicleTypeArray;
    SFToCMarketVehicleLineTypeView *_vehicleTypeView;
    UIView *_vehicleTypeViewLine;
    NSMutableArray *_lineTypeArray;
    SFToCMarketVehicleLineTypeView *_lineTypeView;
    UIView *_lineTypeViewLine;
    NSMutableArray *_vehicleLenArray;
    SFToCMarketVehicleLineTypeView *_vehicleLenView;
    UIView *_vehicleLenViewLine;
    NSMutableArray *_groupTypeArray;
    SFToCMarketVehicleLineTypeView *_groupTypeView;
    SFToCLocationService *_locationService;
    SFUserLocation *_location;
    NSString *_dateStr;
}

@property(nonatomic) _Bool isInitByToCMarketVC; // @synthesize isInitByToCMarketVC=_isInitByToCMarketVC;
@property(copy, nonatomic) NSString *dateStr; // @synthesize dateStr=_dateStr;
@property(retain, nonatomic) SFUserLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) SFToCLocationService *locationService; // @synthesize locationService=_locationService;
@property(retain, nonatomic) SFToCMarketVehicleLineTypeView *groupTypeView; // @synthesize groupTypeView=_groupTypeView;
@property(retain, nonatomic) NSMutableArray *groupTypeArray; // @synthesize groupTypeArray=_groupTypeArray;
@property(retain, nonatomic) UIView *vehicleLenViewLine; // @synthesize vehicleLenViewLine=_vehicleLenViewLine;
@property(retain, nonatomic) SFToCMarketVehicleLineTypeView *vehicleLenView; // @synthesize vehicleLenView=_vehicleLenView;
@property(retain, nonatomic) NSMutableArray *vehicleLenArray; // @synthesize vehicleLenArray=_vehicleLenArray;
@property(retain, nonatomic) UIView *lineTypeViewLine; // @synthesize lineTypeViewLine=_lineTypeViewLine;
@property(retain, nonatomic) SFToCMarketVehicleLineTypeView *lineTypeView; // @synthesize lineTypeView=_lineTypeView;
@property(retain, nonatomic) NSMutableArray *lineTypeArray; // @synthesize lineTypeArray=_lineTypeArray;
@property(retain, nonatomic) UIView *vehicleTypeViewLine; // @synthesize vehicleTypeViewLine=_vehicleTypeViewLine;
@property(retain, nonatomic) SFToCMarketVehicleLineTypeView *vehicleTypeView; // @synthesize vehicleTypeView=_vehicleTypeView;
@property(retain, nonatomic) NSMutableArray *vehicleTypeArray; // @synthesize vehicleTypeArray=_vehicleTypeArray;
@property(retain, nonatomic) UIView *myVehicleTypeViewLine; // @synthesize myVehicleTypeViewLine=_myVehicleTypeViewLine;
@property(retain, nonatomic) SFToCMarketVehicleLineTypeView *myVehicleTypeView; // @synthesize myVehicleTypeView=_myVehicleTypeView;
@property(retain, nonatomic) NSMutableArray *myVehicleTypeArray; // @synthesize myVehicleTypeArray=_myVehicleTypeArray;
@property(retain, nonatomic) UIView *nearbyTypeViewLine; // @synthesize nearbyTypeViewLine=_nearbyTypeViewLine;
@property(retain, nonatomic) SFToCMarketVehicleLineTypeView *nearbyTypeView; // @synthesize nearbyTypeView=_nearbyTypeView;
@property(retain, nonatomic) NSMutableArray *nearbyArray; // @synthesize nearbyArray=_nearbyArray;
@property(retain, nonatomic) NSArray *myVehicleInfo; // @synthesize myVehicleInfo=_myVehicleInfo;
@property(retain, nonatomic) UIImageView *timeIcon; // @synthesize timeIcon=_timeIcon;
@property(retain, nonatomic) UILabel *dateLab; // @synthesize dateLab=_dateLab;
@property(retain, nonatomic) UILabel *timeTitleLab; // @synthesize timeTitleLab=_timeTitleLab;
@property(retain, nonatomic) UIView *dateViewLine; // @synthesize dateViewLine=_dateViewLine;
@property(retain, nonatomic) UIView *dateSelectView; // @synthesize dateSelectView=_dateSelectView;
@property(retain, nonatomic) UIButton *confirmBut; // @synthesize confirmBut=_confirmBut;
@property(retain, nonatomic) UIScrollView *bgScrollView; // @synthesize bgScrollView=_bgScrollView;
@property(copy, nonatomic) CDUnknownBlockType vehicleLineFilterBlock; // @synthesize vehicleLineFilterBlock=_vehicleLineFilterBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateQuickFilterView;
- (void)quickFilter:(id)arg1;
- (void)getSelectedItems:(CDUnknownBlockType)arg1;
- (void)saveSelectedItems;
- (void)cancleSelectedDate;
- (void)enterWithYear:(id)arg1 month:(id)arg2 day:(id)arg3 hour:(id)arg4 minute:(id)arg5;
- (void)reset;
- (id)getDateIntervalCountDay:(long long)arg1;
- (void)dateSelectTap;
- (void)confirmAction:(id)arg1;
- (void)loadData;
- (void)myVehicleTypeSelected;
- (void)setGroupType;
- (void)setMyVehicleType;
- (void)setNearbyType;
- (void)setLineType;
- (void)startLocation;
- (void)hidden;
- (id)appRootViewController;
- (void)showWithMyVehicleAuthInfo:(id)arg1;
- (void)layoutSubviews;
- (void)setupUIByMarketBidVC;
- (void)setupUI;
- (id)initByToCMarketBidVC;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

