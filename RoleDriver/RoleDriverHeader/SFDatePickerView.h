//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSDate, NSMutableArray, NSString, UIPickerView;
@protocol SFDatePickerViewDelegate;

@interface SFDatePickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    long long yearIndex;
    long long monthIndex;
    long long dayIndex;
    long long hourIndex;
    long long minuteIndex;
    long long minDateYear;
    long long maxDateYear;
    long long minDateMonth;
    long long maxDateMonth;
    long long minDateDay;
    long long maxDateDay;
    int _datePickerStyle;
    NSString *_maxLimit;
    NSString *_minLimit;
    NSString *_defualtDate;
    id <SFDatePickerViewDelegate> _delegate;
    UIPickerView *_myPickerView;
    NSMutableArray *_yearArray;
    NSMutableArray *_monthArray;
    NSMutableArray *_dayArray;
    NSMutableArray *_hourArray;
    NSMutableArray *_minuteArray;
    NSDate *_maxLimitDate;
    NSDate *_minLimitDate;
    UIView *_myToolView;
    UIView *_backView;
    UIView *_timeView;
    NSString *_titleStr;
    NSString *_leftTitle;
    NSString *_rightTitle;
}

@property(copy, nonatomic) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(copy, nonatomic) NSString *leftTitle; // @synthesize leftTitle=_leftTitle;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(retain, nonatomic) UIView *timeView; // @synthesize timeView=_timeView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIView *myToolView; // @synthesize myToolView=_myToolView;
@property(retain, nonatomic) NSDate *minLimitDate; // @synthesize minLimitDate=_minLimitDate;
@property(retain, nonatomic) NSDate *maxLimitDate; // @synthesize maxLimitDate=_maxLimitDate;
@property(retain, nonatomic) NSMutableArray *minuteArray; // @synthesize minuteArray=_minuteArray;
@property(retain, nonatomic) NSMutableArray *hourArray; // @synthesize hourArray=_hourArray;
@property(retain, nonatomic) NSMutableArray *dayArray; // @synthesize dayArray=_dayArray;
@property(retain, nonatomic) NSMutableArray *monthArray; // @synthesize monthArray=_monthArray;
@property(retain, nonatomic) NSMutableArray *yearArray; // @synthesize yearArray=_yearArray;
@property(retain, nonatomic) UIPickerView *myPickerView; // @synthesize myPickerView=_myPickerView;
@property(nonatomic) __weak id <SFDatePickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *defualtDate; // @synthesize defualtDate=_defualtDate;
@property(retain, nonatomic) NSString *minLimit; // @synthesize minLimit=_minLimit;
@property(retain, nonatomic) NSString *maxLimit; // @synthesize maxLimit=_maxLimit;
@property(nonatomic) int datePickerStyle; // @synthesize datePickerStyle=_datePickerStyle;
- (void).cxx_destruct;
- (id)setColorWith:(id)arg1;
- (void)clearSeparatorWithView:(id)arg1;
- (id)getNowDate:(id)arg1;
- (id)dateFromString:(id)arg1 withFormat:(id)arg2;
- (void)playTheDelegate;
- (void)setDayWithYear:(long long)arg1 andMonth:(long long)arg2 andDays:(long long)arg3;
- (void)setdayArray:(long long)arg1;
- (long long)DaysfromYear:(long long)arg1 andMonth:(long long)arg2;
- (void)setMonthArrayWithYear:(long long)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)colseTimeV;
- (void)show;
- (id)appRootViewController;
- (void)cancleAction;
- (void)confirmAction;
- (void)setCurrentDateAndTime:(id)arg1;
- (id)initWithTitle:(id)arg1 leftTitle:(id)arg2 rightTitle:(id)arg3 datePickerStyle:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

