//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GPSIsInrage-Protocol.h"
#import "SFImageAlertViewDelegate-Protocol.h"
#import "SFLocationServiceDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, SFDriverRouteModel, UIButton, UILabel, UITextField, UIView;
@protocol SFEndMilesViewControllerDelegate;

@interface SFEndMilesViewController : UIViewController <UITextFieldDelegate, SFLocationServiceDelegate, SFImageAlertViewDelegate, GPSIsInrage>
{
    int _isInGpsScope;
    id <SFEndMilesViewControllerDelegate> _delegate;
    SFDriverRouteModel *_taskModel;
    NSMutableArray *_realityRouteArray;
    NSMutableArray *_dataSourceArray;
    UITextField *_endMiles;
    UITextField *_roadPrice;
    UILabel *_startMilesLabel;
    UILabel *_currentMiles;
    NSString *_startMiles;
    UIButton *_endMilesBtn;
    UIView *_milesBackView;
    UILabel *_gpsLabel;
    CDUnknownBlockType _locationBlock;
    double _offsetDistance;
}

@property(nonatomic) double offsetDistance; // @synthesize offsetDistance=_offsetDistance;
@property(copy, nonatomic) CDUnknownBlockType locationBlock; // @synthesize locationBlock=_locationBlock;
@property(retain, nonatomic) UILabel *gpsLabel; // @synthesize gpsLabel=_gpsLabel;
@property(retain, nonatomic) UIView *milesBackView; // @synthesize milesBackView=_milesBackView;
@property(retain, nonatomic) UIButton *endMilesBtn; // @synthesize endMilesBtn=_endMilesBtn;
@property(copy, nonatomic) NSString *startMiles; // @synthesize startMiles=_startMiles;
@property(retain, nonatomic) UILabel *currentMiles; // @synthesize currentMiles=_currentMiles;
@property(retain, nonatomic) UILabel *startMilesLabel; // @synthesize startMilesLabel=_startMilesLabel;
@property(retain, nonatomic) UITextField *roadPrice; // @synthesize roadPrice=_roadPrice;
@property(retain, nonatomic) UITextField *endMiles; // @synthesize endMiles=_endMiles;
@property(retain, nonatomic) NSMutableArray *dataSourceArray; // @synthesize dataSourceArray=_dataSourceArray;
@property(retain, nonatomic) NSMutableArray *realityRouteArray; // @synthesize realityRouteArray=_realityRouteArray;
@property(nonatomic) int isInGpsScope; // @synthesize isInGpsScope=_isInGpsScope;
@property(retain, nonatomic) SFDriverRouteModel *taskModel; // @synthesize taskModel=_taskModel;
@property(nonatomic) __weak id <SFEndMilesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addGpsLabel;
- (void)BoolGPSIsInRange:(int)arg1 offsetDistance:(double)arg2 coordinate:(struct CLLocationCoordinate2D)arg3;
- (void)relocation;
- (void)sf_didUpdateUserLocation:(id)arg1;
- (void)startLocation;
- (void)showAlertViewByTitle:(id)arg1 dataSource:(id)arg2;
- (void)endMilesBtnAction:(id)arg1;
- (void)priceTextChange:(id)arg1;
- (void)endMilesChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)didReceiveMemoryWarning;
- (void)fetchStartMilesByTaskIdFromService;
- (void)fetchStartMilesFromService;
- (id)getAttrString:(id)arg1 colorString:(id)arg2 color:(id)arg3;
- (void)tapAction;
- (void)initViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

