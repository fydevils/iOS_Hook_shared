//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, SFLastReceiverModel, UILabel, UITextField;

@interface SFAlertWeather : UIView
{
    UITextField *_milesText;
    UITextField *_closeMilesText;
    UILabel *_outMilesLabel;
    UILabel *_currentMilesLabel;
    UITextField *_price;
    NSMutableArray *_weatherBtnArray;
    long long _weatherType;
    NSString *_weatherSelect;
    NSString *_endMileage;
    NSString *_taskSerial;
    NSString *_vehicleCode;
    NSString *_taskId;
    NSString *_deptCode;
    CDUnknownBlockType _block;
    CDUnknownBlockType _startblock;
    UIView *_alertView;
    SFLastReceiverModel *_lastReceModel;
}

@property(retain, nonatomic) SFLastReceiverModel *lastReceModel; // @synthesize lastReceModel=_lastReceModel;
@property(retain, nonatomic) UIView *alertView; // @synthesize alertView=_alertView;
@property(copy, nonatomic) CDUnknownBlockType startblock; // @synthesize startblock=_startblock;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSString *deptCode; // @synthesize deptCode=_deptCode;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSString *vehicleCode; // @synthesize vehicleCode=_vehicleCode;
@property(retain, nonatomic) NSString *taskSerial; // @synthesize taskSerial=_taskSerial;
- (void).cxx_destruct;
- (void)dealloc;
- (void)close;
- (id)appRootViewController;
- (void)show;
- (void)fetchStartMilesByTaskIdFromService;
- (void)fetchLastMilesFromService;
- (void)fetchStartMilesFromService;
- (void)startReturn;
- (void)closeCarbuttonClick:(id)arg1;
- (void)buttonClick:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)closeMilesChange:(id)arg1;
- (void)weatherBtnAction:(id)arg1;
- (id)initWithStartMilesBlock:(CDUnknownBlockType)arg1;
- (id)initWithWeatherBlock:(CDUnknownBlockType)arg1;

@end

