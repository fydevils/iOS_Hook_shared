//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SFChooseRegionViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, SFDriverRouteModel, UIButton, UILabel, UISwitch, UITextField, UIView;
@protocol SFFuelChargingViewControllerDelegate;

@interface SFFuelChargingViewController : UIViewController <UITextFieldDelegate, SFChooseRegionViewDelegate>
{
    SFDriverRouteModel *_customTaskModel;
    SFDriverRouteModel *_taskModel;
    id <SFFuelChargingViewControllerDelegate> _delegate;
    UITextField *_milesText;
    UITextField *_unitPriceText;
    UITextField *_litreText;
    UILabel *_priceLabel;
    NSString *_totalAmount;
    UISwitch *_fixedPointBtn;
    UIButton *_enterBtn;
    UIView *_currencyView;
    UIButton *_currencyBtn;
    UILabel *_unitPriceLab;
    long long _currencyType;
}

@property(nonatomic) long long currencyType; // @synthesize currencyType=_currencyType;
@property(retain, nonatomic) UILabel *unitPriceLab; // @synthesize unitPriceLab=_unitPriceLab;
@property(retain, nonatomic) UIButton *currencyBtn; // @synthesize currencyBtn=_currencyBtn;
@property(retain, nonatomic) UIView *currencyView; // @synthesize currencyView=_currencyView;
@property(retain, nonatomic) UIButton *enterBtn; // @synthesize enterBtn=_enterBtn;
@property(retain, nonatomic) UISwitch *fixedPointBtn; // @synthesize fixedPointBtn=_fixedPointBtn;
@property(retain, nonatomic) NSString *totalAmount; // @synthesize totalAmount=_totalAmount;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UITextField *litreText; // @synthesize litreText=_litreText;
@property(retain, nonatomic) UITextField *unitPriceText; // @synthesize unitPriceText=_unitPriceText;
@property(retain, nonatomic) UITextField *milesText; // @synthesize milesText=_milesText;
@property(nonatomic) __weak id <SFFuelChargingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SFDriverRouteModel *taskModel; // @synthesize taskModel=_taskModel;
@property(retain, nonatomic) SFDriverRouteModel *customTaskModel; // @synthesize customTaskModel=_customTaskModel;
- (void).cxx_destruct;
- (void)checkFuelChargInfo;
- (void)changePriceLabelColorPrice:(id)arg1;
- (void)enterWithRegion:(id)arg1;
- (void)currencyBtnAction:(id)arg1;
- (void)enterBtnAction:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)priceTextChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)saveVehicleExamineService;
- (void)saveCustomVehicleExamineService;
- (void)tapAction;
- (id)getAttrString:(id)arg1 colorString:(id)arg2 color:(id)arg3;
- (id)fuelChargingBackWithTitle:(id)arg1 textField:(id)arg2 rightTitle:(id)arg3;
- (void)initViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

