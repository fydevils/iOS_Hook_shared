//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface SFLogReportModel : JSONModel
{
    NSString *_operateType;
    NSString *_operateDescription;
    NSString *_username;
    double _operateTime;
    NSString *_operateTimeStr;
    NSString *_driverTaskId;
    NSString *_vehicleNumber;
    NSString *_mobileBrand;
    NSString *_mobileModel;
    NSString *_deviceId;
    NSString *_androidVersion;
    NSString *_appVersion;
    NSString *_deptCode;
}

+ (void)saveLogReportWithDescription:(id)arg1 operateType:(id)arg2 operateTime:(id)arg3 driverTaskId:(id)arg4 vehicleNumber:(id)arg5 deptCode:(id)arg6;
+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSString *deptCode; // @synthesize deptCode=_deptCode;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *androidVersion; // @synthesize androidVersion=_androidVersion;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *mobileModel; // @synthesize mobileModel=_mobileModel;
@property(retain, nonatomic) NSString *mobileBrand; // @synthesize mobileBrand=_mobileBrand;
@property(retain, nonatomic) NSString *vehicleNumber; // @synthesize vehicleNumber=_vehicleNumber;
@property(retain, nonatomic) NSString *driverTaskId; // @synthesize driverTaskId=_driverTaskId;
@property(retain, nonatomic) NSString *operateTimeStr; // @synthesize operateTimeStr=_operateTimeStr;
@property(nonatomic) double operateTime; // @synthesize operateTime=_operateTime;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *operateDescription; // @synthesize operateDescription=_operateDescription;
@property(retain, nonatomic) NSString *operateType; // @synthesize operateType=_operateType;
- (void).cxx_destruct;
- (_Bool)deleteFromDatabase;
- (_Bool)saveOrInsertToDatabase;
- (id)initWithOperateDescription:(id)arg1 operateType:(id)arg2 operateTime:(id)arg3 driverTaskId:(id)arg4 vehicleNumber:(id)arg5 deptCode:(id)arg6;
- (id)init;

@end

