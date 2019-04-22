//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface SFToCPermitData : JSONModel
{
    _Bool _rtmcDtEmptyFlag;
    _Bool _loadMassEmptyFlag;
    _Bool _practCertDtEmptyFlag;
    NSString *_driverId;
    NSString *_name;
    NSString *_idCardNum;
    NSString *_driverLicense;
    NSString *_driverStatus;
    NSString *_reason;
    NSString *_idCardFrontPath;
    NSString *_idCardOppositePath;
    NSString *_driverLicensePath;
    NSString *_verifyTm;
    NSString *_vehicleId;
    NSString *_vehicleCode;
    NSString *_vehicleCodeColor;
    NSString *_vehicleLength;
    NSString *_vehicleType;
    NSString *_vehicleTypeName;
    NSString *_vehicleStatus;
    NSString *_dlInsuPath;
    NSString *_dlInsuSecondPath;
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
    double _headHeight;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) double headHeight; // @synthesize headHeight=_headHeight;
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
@property(copy, nonatomic) NSString *dlInsuSecondPath; // @synthesize dlInsuSecondPath=_dlInsuSecondPath;
@property(copy, nonatomic) NSString *dlInsuPath; // @synthesize dlInsuPath=_dlInsuPath;
@property(copy, nonatomic) NSString *vehicleStatus; // @synthesize vehicleStatus=_vehicleStatus;
@property(copy, nonatomic) NSString *vehicleTypeName; // @synthesize vehicleTypeName=_vehicleTypeName;
@property(copy, nonatomic) NSString *vehicleType; // @synthesize vehicleType=_vehicleType;
@property(copy, nonatomic) NSString *vehicleLength; // @synthesize vehicleLength=_vehicleLength;
@property(copy, nonatomic) NSString *vehicleCodeColor; // @synthesize vehicleCodeColor=_vehicleCodeColor;
@property(copy, nonatomic) NSString *vehicleCode; // @synthesize vehicleCode=_vehicleCode;
@property(copy, nonatomic) NSString *vehicleId; // @synthesize vehicleId=_vehicleId;
@property(copy, nonatomic) NSString *verifyTm; // @synthesize verifyTm=_verifyTm;
@property(copy, nonatomic) NSString *driverLicensePath; // @synthesize driverLicensePath=_driverLicensePath;
@property(copy, nonatomic) NSString *idCardOppositePath; // @synthesize idCardOppositePath=_idCardOppositePath;
@property(copy, nonatomic) NSString *idCardFrontPath; // @synthesize idCardFrontPath=_idCardFrontPath;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *driverStatus; // @synthesize driverStatus=_driverStatus;
@property(copy, nonatomic) NSString *driverLicense; // @synthesize driverLicense=_driverLicense;
@property(copy, nonatomic) NSString *idCardNum; // @synthesize idCardNum=_idCardNum;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *driverId; // @synthesize driverId=_driverId;
- (void).cxx_destruct;

@end

