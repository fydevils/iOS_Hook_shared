//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIPickerView;
@protocol SFChooseRegionViewDelegate;

@interface SFChooseRegionView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    id <SFChooseRegionViewDelegate> _delegate;
    UIPickerView *_datePickV;
    NSMutableArray *_dataArr;
    long long _startTimeIndex;
    UIView *_myToolView;
    UIView *_backView;
    UIView *_timeView;
    NSString *_titleStr;
    NSString *_leftBtnTitle;
    NSString *_rightBtnTitle;
    long long _selectRow;
}

@property(nonatomic) long long selectRow; // @synthesize selectRow=_selectRow;
@property(copy, nonatomic) NSString *rightBtnTitle; // @synthesize rightBtnTitle=_rightBtnTitle;
@property(copy, nonatomic) NSString *leftBtnTitle; // @synthesize leftBtnTitle=_leftBtnTitle;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(retain, nonatomic) UIView *timeView; // @synthesize timeView=_timeView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIView *myToolView; // @synthesize myToolView=_myToolView;
@property(nonatomic) long long startTimeIndex; // @synthesize startTimeIndex=_startTimeIndex;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) UIPickerView *datePickV; // @synthesize datePickV=_datePickV;
@property(nonatomic) __weak id <SFChooseRegionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clearSeparatorWithView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)colseTimeV;
- (void)show;
- (id)appRootViewController;
- (void)cancleAction;
- (void)confirmAction;
- (id)initWithTitle:(id)arg1 leftBtnTitle:(id)arg2 rightBtnTitle:(id)arg3 dataSource:(id)arg4 selectRow:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
