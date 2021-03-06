//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFBaseVC.h"

#import "SFCarNumFootViewDelegate-Protocol.h"
#import "SFCarOutCheckCell1Delegate-Protocol.h"
#import "SFCarOutCheckCell2Delegate-Protocol.h"
#import "SFNewNavigationControllerDelegate-Protocol.h"
#import "SFQRCodeViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, SFCarNumFootView, SFCarNumHeadView, TPKeyboardAvoidingTableView;

@interface SFCarOutCheckVC : SFBaseVC <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, SFCarOutCheckCell1Delegate, SFCarNumFootViewDelegate, SFCarOutCheckCell2Delegate, SFNewNavigationControllerDelegate, SFQRCodeViewControllerDelegate>
{
    _Bool _isWorkHours;
    _Bool _isScan;
    NSString *_checkType;
    NSString *_carNumber;
    NSString *_vehicleType;
    SFCarNumHeadView *_headView;
    SFCarNumFootView *_footView;
    TPKeyboardAvoidingTableView *_tableView;
    NSMutableArray *_dataArr;
    NSMutableArray *_selectedArray;
    NSIndexPath *_indexPath;
    NSString *_enterTime;
    NSString *_barcodeString;
    NSString *_hourText;
    NSString *_minText;
}

@property(copy, nonatomic) NSString *minText; // @synthesize minText=_minText;
@property(copy, nonatomic) NSString *hourText; // @synthesize hourText=_hourText;
@property(copy, nonatomic) NSString *barcodeString; // @synthesize barcodeString=_barcodeString;
@property(copy, nonatomic) NSString *enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) NSMutableArray *selectedArray; // @synthesize selectedArray=_selectedArray;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) TPKeyboardAvoidingTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SFCarNumFootView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) SFCarNumHeadView *headView; // @synthesize headView=_headView;
@property(nonatomic) _Bool isScan; // @synthesize isScan=_isScan;
@property(nonatomic) _Bool isWorkHours; // @synthesize isWorkHours=_isWorkHours;
@property(copy, nonatomic) NSString *vehicleType; // @synthesize vehicleType=_vehicleType;
@property(copy, nonatomic) NSString *carNumber; // @synthesize carNumber=_carNumber;
@property(copy, nonatomic) NSString *checkType; // @synthesize checkType=_checkType;
- (void).cxx_destruct;
- (id)getArrWithJson:(id)arg1;
- (void)getDataSources;
- (void)showSuccessWithStatus:(id)arg1;
- (void)saveCheckInformationeFromService;
- (void)confirmBtnAction:(id)arg1;
- (void)cell2textFeild:(id)arg1 indexPath:(id)arg2;
- (void)cell1textFeild:(id)arg1 indexPath:(id)arg2;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)didOutputMetadataObject:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)creatUI;
- (_Bool)navigationShouldPopOnBackButton;
- (void)navigationWillPop;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

