//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SFMyBillModel, UILabel;

@interface SFMyBillDetialVController : UIViewController
{
    SFMyBillModel *_model;
    UILabel *_countLabel;
    UILabel *_driverTaskIdLab;
    UILabel *_planSendTimeLab;
    UILabel *_planArriveTimeLab;
    UILabel *_lineLevelLab;
    UILabel *_pricingMannerLab;
    UILabel *_linePriceLab;
    UILabel *_lineDistanceLab;
}

@property(retain, nonatomic) UILabel *lineDistanceLab; // @synthesize lineDistanceLab=_lineDistanceLab;
@property(retain, nonatomic) UILabel *linePriceLab; // @synthesize linePriceLab=_linePriceLab;
@property(retain, nonatomic) UILabel *pricingMannerLab; // @synthesize pricingMannerLab=_pricingMannerLab;
@property(retain, nonatomic) UILabel *lineLevelLab; // @synthesize lineLevelLab=_lineLevelLab;
@property(retain, nonatomic) UILabel *planArriveTimeLab; // @synthesize planArriveTimeLab=_planArriveTimeLab;
@property(retain, nonatomic) UILabel *planSendTimeLab; // @synthesize planSendTimeLab=_planSendTimeLab;
@property(retain, nonatomic) UILabel *driverTaskIdLab; // @synthesize driverTaskIdLab=_driverTaskIdLab;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) SFMyBillModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)getLineLevel:(id)arg1;
- (id)getPrice:(id)arg1;
- (id)returndate:(id)arg1;
- (void)getDataFormServer;
- (void)createUI;
- (void)viewDidLoad;

@end
