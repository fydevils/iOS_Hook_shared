//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFToCBaseVC.h"

#import "SFToCCarUnverifiedCellDelegate-Protocol.h"
#import "SFToCCarVerifiedCellDelegate-Protocol.h"
#import "SFToCDriverApproveFooterDelegate-Protocol.h"
#import "SFToCDriverUnverifiedHeaderDelegate-Protocol.h"
#import "SFToCDriverVerifiedHeaderDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SFToCDriverInfo, UITableView, UIView;

@interface SFToCPersonalProfileVC : SFToCBaseVC <UITableViewDelegate, UITableViewDataSource, SFToCDriverApproveFooterDelegate, SFToCDriverUnverifiedHeaderDelegate, SFToCDriverVerifiedHeaderDelegate, SFToCCarUnverifiedCellDelegate, SFToCCarVerifiedCellDelegate>
{
    int _driverAuthStatus;
    int _vehicleAuthStatus;
    UIView *_topTipView;
    UITableView *_tableView;
    SFToCDriverInfo *_driverInfo;
    NSMutableArray *_carArr;
}

@property(retain, nonatomic) NSMutableArray *carArr; // @synthesize carArr=_carArr;
@property(retain, nonatomic) SFToCDriverInfo *driverInfo; // @synthesize driverInfo=_driverInfo;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *topTipView; // @synthesize topTipView=_topTipView;
@property(nonatomic) int vehicleAuthStatus; // @synthesize vehicleAuthStatus=_vehicleAuthStatus;
@property(nonatomic) int driverAuthStatus; // @synthesize driverAuthStatus=_driverAuthStatus;
- (void).cxx_destruct;
- (void)pushPermitVCViewControllerType:(unsigned long long)arg1 status:(unsigned long long)arg2 dataId:(id)arg3;
- (void)DriverApproveForAddDriver;
- (void)sendRelieveBindingRequestToServer:(id)arg1;
- (void)trackEventTelFeedbackPhone;
- (void)showAlertIsCanDelete:(_Bool)arg1 carModel:(id)arg2 limitDay:(id)arg3;
- (void)relieveBindingWithCar:(id)arg1;
- (void)queryCarRoadInfo:(id)arg1;
- (void)queryCarInfo:(id)arg1;
- (void)approveCar;
- (void)queryDriverEmploymentInfo;
- (void)queryDriverIdentityInfo;
- (void)approveDriver;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)rightBarButtonItemAction;
- (void)loadFailureUI;
- (void)approveDataWith:(id)arg1 car:(id)arg2;
- (void)loadData;
- (void)setRightBarButtonItem;
- (void)createUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

