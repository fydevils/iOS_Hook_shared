//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SFQRCodeViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, SFDriverRouteModel, SFPlanRouteModel, SFSealLogoGpsModel, UIButton, UITableView;
@protocol ProofChoiceControllerDelegate;

@interface ProofChoiceController : UIViewController <UITableViewDelegate, UITableViewDataSource, SFQRCodeViewControllerDelegate>
{
    SFDriverRouteModel *_driverRouteModel;
    SFPlanRouteModel *_planRouteModel;
    SFSealLogoGpsModel *_sealLogoGpsModel;
    long long _optype;
    id <ProofChoiceControllerDelegate> _delegate;
    UITableView *_tableView;
    NSMutableArray *_dataSourceArray;
    NSMutableArray *_firstArray;
    NSMutableArray *_secondArray;
    NSIndexPath *_selectedIndexPath;
    UIButton *_enterBtn;
}

@property(retain, nonatomic) UIButton *enterBtn; // @synthesize enterBtn=_enterBtn;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) NSMutableArray *secondArray; // @synthesize secondArray=_secondArray;
@property(retain, nonatomic) NSMutableArray *firstArray; // @synthesize firstArray=_firstArray;
@property(retain, nonatomic) NSMutableArray *dataSourceArray; // @synthesize dataSourceArray=_dataSourceArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <ProofChoiceControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long optype; // @synthesize optype=_optype;
@property(retain, nonatomic) SFSealLogoGpsModel *sealLogoGpsModel; // @synthesize sealLogoGpsModel=_sealLogoGpsModel;
@property(retain, nonatomic) SFPlanRouteModel *planRouteModel; // @synthesize planRouteModel=_planRouteModel;
@property(retain, nonatomic) SFDriverRouteModel *driverRouteModel; // @synthesize driverRouteModel=_driverRouteModel;
- (void).cxx_destruct;
- (void)didOutputMetadataObject:(id)arg1;
- (void)didOutputScanerCode:(id)arg1 proveAreaCode:(id)arg2 qrcodeCreateTm:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)enterBtnAction:(id)arg1;
- (void)addSecondModel;
- (void)addFirstModel;
- (void)changeDataSouceAndUI:(id)arg1;
- (void)setupTableViewFooterView;
- (void)initDataSourceArray;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
