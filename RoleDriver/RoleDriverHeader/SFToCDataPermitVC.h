//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFToCBaseVC.h"

#import "SFNewNavigationControllerDelegate-Protocol.h"
#import "SFToCConfirmFootViewDelegate-Protocol.h"
#import "SFToCDataPermitCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, SFToCConfirmFootView, SFToCHeadView, SFToCPermitData, SFToCPermitmVM, TPKeyboardAvoidingTableView, UIButton, UIView;

@interface SFToCDataPermitVC : SFToCBaseVC <UITableViewDelegate, UITableViewDataSource, UITextViewDelegate, SFToCConfirmFootViewDelegate, SFToCDataPermitCellDelegate, SFNewNavigationControllerDelegate>
{
    _Bool _rtmcDtEmptyFlag;
    _Bool _loadMassEmptyFlag;
    _Bool _practCertDtEmptyFlag;
    _Bool _isNextStep;
    _Bool _positive;
    _Bool _isOnlyUpdateLoadMass;
    _Bool _isNotJobDate;
    _Bool _isNotRacDate;
    NSString *_idDriverId;
    NSString *_idCard;
    NSString *_idName;
    NSString *_idPositiveImgUrl;
    NSString *_idSideImgUrl;
    NSString *_driverId;
    NSString *_driverCard;
    NSString *_driverPositiveImgUrl;
    NSString *_vehicleId;
    NSString *_vehicleCard;
    NSString *_vehiclePositiveImgUrl;
    NSString *_vehicleSideImgUrl;
    NSString *_vehicleTypeName;
    NSString *_vehicleLength;
    NSString *_vehicleType;
    NSString *_vehicleCodeColor;
    NSString *_peopleAndCarPhotoPath;
    NSString *_loadMass;
    NSString *_rtmcPath;
    NSString *_rtmcNum;
    NSString *_rtmcStartDt;
    NSString *_rtmcEndDt;
    NSString *_rtmcStatus;
    NSString *_rtmcReason;
    NSString *_practCertPath;
    NSString *_tbpPractCertType;
    NSString *_practCertStartDt;
    NSString *_practCertEndDt;
    NSString *_practCertStatus;
    NSString *_practCertReason;
    unsigned long long _permitType;
    unsigned long long _status;
    NSString *_ID;
    NSString *_idCardNum;
    NSString *_driverStatus;
    NSIndexPath *_indexPath;
    CDUnknownBlockType _popBlock;
    TPKeyboardAvoidingTableView *_tableView;
    NSMutableArray *_dataArr;
    UIButton *_rightNavBtn;
    UIView *_warmPromptView;
    SFToCHeadView *_headView;
    SFToCHeadView *_otherHeadView;
    SFToCConfirmFootView *_footView;
    SFToCPermitmVM *_permitmManager;
    SFToCPermitData *_dataModel;
    SFToCPermitData *_oldModel;
}

@property(nonatomic) _Bool isNotRacDate; // @synthesize isNotRacDate=_isNotRacDate;
@property(nonatomic) _Bool isNotJobDate; // @synthesize isNotJobDate=_isNotJobDate;
@property(nonatomic) _Bool isOnlyUpdateLoadMass; // @synthesize isOnlyUpdateLoadMass=_isOnlyUpdateLoadMass;
@property(retain, nonatomic) SFToCPermitData *oldModel; // @synthesize oldModel=_oldModel;
@property(retain, nonatomic) SFToCPermitData *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) SFToCPermitmVM *permitmManager; // @synthesize permitmManager=_permitmManager;
@property(retain, nonatomic) SFToCConfirmFootView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) SFToCHeadView *otherHeadView; // @synthesize otherHeadView=_otherHeadView;
@property(retain, nonatomic) SFToCHeadView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIView *warmPromptView; // @synthesize warmPromptView=_warmPromptView;
@property(retain, nonatomic) UIButton *rightNavBtn; // @synthesize rightNavBtn=_rightNavBtn;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) TPKeyboardAvoidingTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType popBlock; // @synthesize popBlock=_popBlock;
@property(nonatomic) _Bool positive; // @synthesize positive=_positive;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) _Bool isNextStep; // @synthesize isNextStep=_isNextStep;
@property(copy, nonatomic) NSString *driverStatus; // @synthesize driverStatus=_driverStatus;
@property(copy, nonatomic) NSString *idCardNum; // @synthesize idCardNum=_idCardNum;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long permitType; // @synthesize permitType=_permitType;
@property(nonatomic) _Bool practCertDtEmptyFlag; // @synthesize practCertDtEmptyFlag=_practCertDtEmptyFlag;
@property(copy, nonatomic) NSString *practCertReason; // @synthesize practCertReason=_practCertReason;
@property(copy, nonatomic) NSString *practCertStatus; // @synthesize practCertStatus=_practCertStatus;
@property(copy, nonatomic) NSString *practCertEndDt; // @synthesize practCertEndDt=_practCertEndDt;
@property(copy, nonatomic) NSString *practCertStartDt; // @synthesize practCertStartDt=_practCertStartDt;
@property(copy, nonatomic) NSString *tbpPractCertType; // @synthesize tbpPractCertType=_tbpPractCertType;
@property(copy, nonatomic) NSString *practCertPath; // @synthesize practCertPath=_practCertPath;
@property(nonatomic) _Bool loadMassEmptyFlag; // @synthesize loadMassEmptyFlag=_loadMassEmptyFlag;
@property(nonatomic) _Bool rtmcDtEmptyFlag; // @synthesize rtmcDtEmptyFlag=_rtmcDtEmptyFlag;
@property(copy, nonatomic) NSString *rtmcReason; // @synthesize rtmcReason=_rtmcReason;
@property(copy, nonatomic) NSString *rtmcStatus; // @synthesize rtmcStatus=_rtmcStatus;
@property(copy, nonatomic) NSString *rtmcEndDt; // @synthesize rtmcEndDt=_rtmcEndDt;
@property(copy, nonatomic) NSString *rtmcStartDt; // @synthesize rtmcStartDt=_rtmcStartDt;
@property(copy, nonatomic) NSString *rtmcNum; // @synthesize rtmcNum=_rtmcNum;
@property(copy, nonatomic) NSString *rtmcPath; // @synthesize rtmcPath=_rtmcPath;
@property(copy, nonatomic) NSString *loadMass; // @synthesize loadMass=_loadMass;
@property(copy, nonatomic) NSString *peopleAndCarPhotoPath; // @synthesize peopleAndCarPhotoPath=_peopleAndCarPhotoPath;
@property(copy, nonatomic) NSString *vehicleCodeColor; // @synthesize vehicleCodeColor=_vehicleCodeColor;
@property(copy, nonatomic) NSString *vehicleType; // @synthesize vehicleType=_vehicleType;
@property(copy, nonatomic) NSString *vehicleLength; // @synthesize vehicleLength=_vehicleLength;
@property(copy, nonatomic) NSString *vehicleTypeName; // @synthesize vehicleTypeName=_vehicleTypeName;
@property(copy, nonatomic) NSString *vehicleSideImgUrl; // @synthesize vehicleSideImgUrl=_vehicleSideImgUrl;
@property(copy, nonatomic) NSString *vehiclePositiveImgUrl; // @synthesize vehiclePositiveImgUrl=_vehiclePositiveImgUrl;
@property(copy, nonatomic) NSString *vehicleCard; // @synthesize vehicleCard=_vehicleCard;
@property(copy, nonatomic) NSString *vehicleId; // @synthesize vehicleId=_vehicleId;
@property(copy, nonatomic) NSString *driverPositiveImgUrl; // @synthesize driverPositiveImgUrl=_driverPositiveImgUrl;
@property(copy, nonatomic) NSString *driverCard; // @synthesize driverCard=_driverCard;
@property(copy, nonatomic) NSString *driverId; // @synthesize driverId=_driverId;
@property(copy, nonatomic) NSString *idSideImgUrl; // @synthesize idSideImgUrl=_idSideImgUrl;
@property(copy, nonatomic) NSString *idPositiveImgUrl; // @synthesize idPositiveImgUrl=_idPositiveImgUrl;
@property(copy, nonatomic) NSString *idName; // @synthesize idName=_idName;
@property(copy, nonatomic) NSString *idCard; // @synthesize idCard=_idCard;
@property(copy, nonatomic) NSString *idDriverId; // @synthesize idDriverId=_idDriverId;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)navigationWillPop;
- (void)showSubmitAlertView;
- (void)showAlertErrorMessage:(id)arg1 errorCode:(long long)arg2;
- (void)getDataSource;
- (id)getJobParams;
- (id)getRtmcParams;
- (id)getParamsIsExistFlag:(_Bool)arg1 isConfSubmitFlag:(_Bool)arg2;
- (_Bool)checkJobParams;
- (_Bool)checkRtmcParams;
- (_Bool)checkParamsIsCheckIdCard:(_Bool)arg1;
- (void)submitSuccessWithIsExistFlag:(_Bool)arg1;
- (void)saveDriverOrVehicleFileReqIsExistFlag:(_Bool)arg1 isConfSubmitFlag:(_Bool)arg2 isCheckIdCard:(_Bool)arg3;
- (void)confirmBtnAction:(id)arg1;
- (void)trackEventTelFeedbackPhoneSource:(id)arg1;
- (void)rightBarButtonItemAction:(id)arg1;
- (void)reloadDataTableView;
- (void)generalBasicOCR:(id)arg1 indexPath:(id)arg2;
- (void)uploadImage:(id)arg1 indexPath:(id)arg2 positive:(_Bool)arg3;
- (void)imageTapActionWithIndexPath:(id)arg1;
- (void)selectTbpPractCertTypeIndexPath:(id)arg1;
- (void)selectDateAtIndexPath:(id)arg1 model:(id)arg2;
- (void)imageTapActionWithIndexPath:(id)arg1 imageView:(id)arg2;
- (void)selectLicensePlateColor:(long long)arg1 indexPath:(id)arg2;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)queryDriverOrVehicleData;
- (void)initTableView;
- (void)setRightBarButtonItem;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
