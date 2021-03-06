//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString, SFAbnormRouteModel, SFChangeCarModel, SFChangeShiftsModel, SFFuelChargingModel, SFHandOverModel, SFProofInfoModel, SFTaskStopModel, SFVehicleWeightModel;

@interface SFPlanRouteModel : JSONModel
{
    _Bool _isPlanRoute;
    _Bool _isStart;
    _Bool _isEnd;
    _Bool _isOvertime;
    _Bool _isProofArea;
    _Bool _isCustomsDeptCode;
    NSString *_driverTaskId;
    NSString *_childTaskId;
    NSString *_serial;
    NSString *_deptCode;
    NSString *_addressId;
    NSString *_operateType;
    NSString *_operateTm;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_address;
    NSString *_thruSeqCode;
    NSString *_planSendTime;
    NSString *_planArriveTime;
    NSString *_taskOperateType;
    NSString *_isInGpsScope;
    NSString *_deptThruSeqCode;
    NSString *_vehicleGps;
    NSString *_mobileGps;
    NSString *_sealLogoValid;
    NSString *_sealLogo;
    long long _radius;
    long long _routeHeight;
    SFAbnormRouteModel *_abnormRouteModel;
    SFFuelChargingModel *_fuelChargingModel;
    SFChangeShiftsModel *_changeShiftsModel;
    SFChangeCarModel *_changeCarModel;
    SFTaskStopModel *_taskStopModel;
    SFHandOverModel *_handOverModel;
    SFVehicleWeightModel *_vehicleWeightModel;
    SFProofInfoModel *_proofInfoModel;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) SFProofInfoModel *proofInfoModel; // @synthesize proofInfoModel=_proofInfoModel;
@property(retain, nonatomic) SFVehicleWeightModel *vehicleWeightModel; // @synthesize vehicleWeightModel=_vehicleWeightModel;
@property(retain, nonatomic) SFHandOverModel *handOverModel; // @synthesize handOverModel=_handOverModel;
@property(retain, nonatomic) SFTaskStopModel *taskStopModel; // @synthesize taskStopModel=_taskStopModel;
@property(retain, nonatomic) SFChangeCarModel *changeCarModel; // @synthesize changeCarModel=_changeCarModel;
@property(retain, nonatomic) SFChangeShiftsModel *changeShiftsModel; // @synthesize changeShiftsModel=_changeShiftsModel;
@property(retain, nonatomic) SFFuelChargingModel *fuelChargingModel; // @synthesize fuelChargingModel=_fuelChargingModel;
@property(retain, nonatomic) SFAbnormRouteModel *abnormRouteModel; // @synthesize abnormRouteModel=_abnormRouteModel;
@property(nonatomic) long long routeHeight; // @synthesize routeHeight=_routeHeight;
@property(nonatomic) _Bool isCustomsDeptCode; // @synthesize isCustomsDeptCode=_isCustomsDeptCode;
@property(nonatomic) _Bool isProofArea; // @synthesize isProofArea=_isProofArea;
@property(nonatomic) long long radius; // @synthesize radius=_radius;
@property(nonatomic) _Bool isOvertime; // @synthesize isOvertime=_isOvertime;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
@property(nonatomic) _Bool isPlanRoute; // @synthesize isPlanRoute=_isPlanRoute;
@property(retain, nonatomic) NSString *sealLogo; // @synthesize sealLogo=_sealLogo;
@property(retain, nonatomic) NSString *sealLogoValid; // @synthesize sealLogoValid=_sealLogoValid;
@property(retain, nonatomic) NSString *mobileGps; // @synthesize mobileGps=_mobileGps;
@property(retain, nonatomic) NSString *vehicleGps; // @synthesize vehicleGps=_vehicleGps;
@property(retain, nonatomic) NSString *deptThruSeqCode; // @synthesize deptThruSeqCode=_deptThruSeqCode;
@property(retain, nonatomic) NSString *isInGpsScope; // @synthesize isInGpsScope=_isInGpsScope;
@property(retain, nonatomic) NSString *taskOperateType; // @synthesize taskOperateType=_taskOperateType;
@property(retain, nonatomic) NSString *planArriveTime; // @synthesize planArriveTime=_planArriveTime;
@property(retain, nonatomic) NSString *planSendTime; // @synthesize planSendTime=_planSendTime;
@property(retain, nonatomic) NSString *thruSeqCode; // @synthesize thruSeqCode=_thruSeqCode;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *operateTm; // @synthesize operateTm=_operateTm;
@property(retain, nonatomic) NSString *operateType; // @synthesize operateType=_operateType;
@property(retain, nonatomic) NSString *addressId; // @synthesize addressId=_addressId;
@property(retain, nonatomic) NSString *deptCode; // @synthesize deptCode=_deptCode;
@property(retain, nonatomic) NSString *serial; // @synthesize serial=_serial;
@property(retain, nonatomic) NSString *childTaskId; // @synthesize childTaskId=_childTaskId;
@property(retain, nonatomic) NSString *driverTaskId; // @synthesize driverTaskId=_driverTaskId;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

