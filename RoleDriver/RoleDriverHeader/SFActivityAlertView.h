//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary, UIImageView;

@interface SFActivityAlertView : UIView
{
    _Bool _isChoiceCar;
    UIImageView *_alertView;
    NSMutableDictionary *_dict;
    CDUnknownBlockType _onBlock;
    NSMutableArray *_vehicleArr;
}

@property(retain, nonatomic) NSMutableArray *vehicleArr; // @synthesize vehicleArr=_vehicleArr;
@property(nonatomic) _Bool isChoiceCar; // @synthesize isChoiceCar=_isChoiceCar;
@property(copy, nonatomic) CDUnknownBlockType onBlock; // @synthesize onBlock=_onBlock;
@property(retain, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
@property(retain, nonatomic) UIImageView *alertView; // @synthesize alertView=_alertView;
- (void).cxx_destruct;
- (id)appRootViewController;
- (void)close;
- (void)show;
- (void)vehicleTapAction:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)buttonClick:(id)arg1;
- (id)initWithTitle:(id)arg1 titleAlignment:(long long)arg2 titleColor:(id)arg3 titleImageName:(id)arg4 leftMessage:(id)arg5 leftMessageColor:(id)arg6 messageAttributedStr:(id)arg7 rightMessage:(id)arg8 rightMessageColor:(id)arg9 messageArr:(id)arg10 vehicleArr:(id)arg11 leftButtonTitle:(id)arg12 leftBtnBgColor:(id)arg13 leftBtnTitleColor:(id)arg14 leftBtnLayerColor:(id)arg15 rightButtonTitle:(id)arg16 rightBtnBgColor:(id)arg17 rightBtnTitleColor:(id)arg18 rightBtnLayerColor:(id)arg19 titleFontSize:(double)arg20 topCancel:(id)arg21 bottomCancel:(id)arg22 andBlock:(CDUnknownBlockType)arg23;
- (id)initWithImage:(id)arg1 bottomCancel:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithRedPacketImagUrl:(id)arg1 bottomCancel:(id)arg2 block:(CDUnknownBlockType)arg3;

@end

