//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFBaseVC.h"

#import "SFLocationServiceDelegate-Protocol.h"
#import "SFQRCodeViewControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, SFBaseTextField, SFDriverRouteModel, SFPlanRouteModel, UIButton, UILabel, UIScrollView;
@protocol SFChangeNomalCarControllerDelegate;

@interface SFChangeNomalCarController : SFBaseVC <UIScrollViewDelegate, UITextFieldDelegate, SFQRCodeViewControllerDelegate, SFLocationServiceDelegate>
{
    int _carMiles;
    id <SFChangeNomalCarControllerDelegate> _delegate;
    SFDriverRouteModel *_taskModel;
    CDUnknownBlockType _block;
    UIScrollView *_bgScrollView;
    SFBaseTextField *_netCodeTV;
    SFBaseTextField *_myDistanceTV;
    SFBaseTextField *_moneyTV;
    SFBaseTextField *_carNumberTV;
    UILabel *_carCodeTV;
    SFBaseTextField *_changeDistanceTV;
    UIButton *_confirmBtn;
    double _labHeigh;
    SFPlanRouteModel *_actualModel;
}

@property(retain, nonatomic) SFPlanRouteModel *actualModel; // @synthesize actualModel=_actualModel;
@property(nonatomic) int carMiles; // @synthesize carMiles=_carMiles;
@property(nonatomic) double labHeigh; // @synthesize labHeigh=_labHeigh;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) SFBaseTextField *changeDistanceTV; // @synthesize changeDistanceTV=_changeDistanceTV;
@property(retain, nonatomic) UILabel *carCodeTV; // @synthesize carCodeTV=_carCodeTV;
@property(retain, nonatomic) SFBaseTextField *carNumberTV; // @synthesize carNumberTV=_carNumberTV;
@property(retain, nonatomic) SFBaseTextField *moneyTV; // @synthesize moneyTV=_moneyTV;
@property(retain, nonatomic) SFBaseTextField *myDistanceTV; // @synthesize myDistanceTV=_myDistanceTV;
@property(retain, nonatomic) SFBaseTextField *netCodeTV; // @synthesize netCodeTV=_netCodeTV;
@property(retain, nonatomic) UIScrollView *bgScrollView; // @synthesize bgScrollView=_bgScrollView;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) SFDriverRouteModel *taskModel; // @synthesize taskModel=_taskModel;
@property(nonatomic) __weak id <SFChangeNomalCarControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (double)stringToDobule:(id)arg1;
- (void)updateViewUI:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)didOutputMetadataObject:(id)arg1;
- (void)ph_didFailToLocateUserWithError:(id)arg1;
- (void)sf_didUpdateUserLocation:(id)arg1;
- (void)fetchStartMilesByTaskIdFromService;
- (void)sendInnerCormalExchange;
- (void)disMissKeyboard;
- (void)confirBtnAction;
- (void)pushQRCtl:(id)arg1;
- (void)TFTextChanged:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)setttingViewAtuoLayout;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

