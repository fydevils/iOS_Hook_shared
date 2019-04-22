//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface SFLastReceiverModel : JSONModel
{
    NSString *_actualMiles;
    NSString *_appVersion;
    NSString *_createdTime;
    NSString *_deptCode;
    NSString *_endMileage;
    NSString *_fuelChargingMileage;
    NSString *_isChanged;
    NSString *_isFuelPoint;
    NSString *_isSf;
    NSString *_litersNumber;
    NSString *_maxMileage;
    NSString *_nextStartTime;
    NSString *_operationTime;
    NSString *_operationType;
    NSString *_relativeId;
    NSString *_remark;
    NSString *_roadToll;
    NSString *_startMileage;
    NSString *_syncState;
    NSString *_taskId;
    NSString *_taskOperateType;
    NSString *_taskSerial;
    NSString *_totalAmount;
    NSString *_unitPrice;
    NSString *_username;
    NSString *_vehicleCode;
    NSString *_vehicleSerial;
    long long _weather;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) long long weather; // @synthesize weather=_weather;
@property(retain, nonatomic) NSString *vehicleSerial; // @synthesize vehicleSerial=_vehicleSerial;
@property(retain, nonatomic) NSString *vehicleCode; // @synthesize vehicleCode=_vehicleCode;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *unitPrice; // @synthesize unitPrice=_unitPrice;
@property(retain, nonatomic) NSString *totalAmount; // @synthesize totalAmount=_totalAmount;
@property(retain, nonatomic) NSString *taskSerial; // @synthesize taskSerial=_taskSerial;
@property(retain, nonatomic) NSString *taskOperateType; // @synthesize taskOperateType=_taskOperateType;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSString *syncState; // @synthesize syncState=_syncState;
@property(retain, nonatomic) NSString *startMileage; // @synthesize startMileage=_startMileage;
@property(retain, nonatomic) NSString *roadToll; // @synthesize roadToll=_roadToll;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *relativeId; // @synthesize relativeId=_relativeId;
@property(retain, nonatomic) NSString *operationType; // @synthesize operationType=_operationType;
@property(retain, nonatomic) NSString *operationTime; // @synthesize operationTime=_operationTime;
@property(retain, nonatomic) NSString *nextStartTime; // @synthesize nextStartTime=_nextStartTime;
@property(retain, nonatomic) NSString *maxMileage; // @synthesize maxMileage=_maxMileage;
@property(retain, nonatomic) NSString *litersNumber; // @synthesize litersNumber=_litersNumber;
@property(retain, nonatomic) NSString *isSf; // @synthesize isSf=_isSf;
@property(retain, nonatomic) NSString *isFuelPoint; // @synthesize isFuelPoint=_isFuelPoint;
@property(retain, nonatomic) NSString *isChanged; // @synthesize isChanged=_isChanged;
@property(retain, nonatomic) NSString *fuelChargingMileage; // @synthesize fuelChargingMileage=_fuelChargingMileage;
@property(retain, nonatomic) NSString *endMileage; // @synthesize endMileage=_endMileage;
@property(retain, nonatomic) NSString *deptCode; // @synthesize deptCode=_deptCode;
@property(retain, nonatomic) NSString *createdTime; // @synthesize createdTime=_createdTime;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *actualMiles; // @synthesize actualMiles=_actualMiles;
- (void).cxx_destruct;

@end
