//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SFChangeCarModel, UIScrollView, UIView;

@interface SFChangeCarDetailController : UIViewController
{
    _Bool _isNormalisNormalCar;
    SFChangeCarModel *_changeCarModel;
    long long _bizType;
    UIScrollView *_contentScrollView;
    UIView *_vehicleBackView;
}

@property(nonatomic) _Bool isNormalisNormalCar; // @synthesize isNormalisNormalCar=_isNormalisNormalCar;
@property(retain, nonatomic) UIView *vehicleBackView; // @synthesize vehicleBackView=_vehicleBackView;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) SFChangeCarModel *changeCarModel; // @synthesize changeCarModel=_changeCarModel;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)getBackView;
- (id)changeCarBackWithTitle:(id)arg1 rightTitle:(id)arg2 ifLine:(_Bool)arg3;
- (void)initViews;
- (void)viewDidLoad;

@end

