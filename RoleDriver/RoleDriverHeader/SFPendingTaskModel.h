//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface SFPendingTaskModel : JSONModel
{
    _Bool _isStop;
    _Bool _isCustomizeTask;
    NSString *_ttId;
    long long _bizType;
    NSString *_requireId;
    NSString *_serial;
    NSString *_deptCode;
    NSString *_vehicleNumber;
    NSString *_planSendTime;
    NSString *_originCode;
    NSString *_originAddress;
    NSString *_srcZonePlanarriveTime;
    NSString *_planArriveTime;
    NSString *_destinationCode;
    NSString *_destinationAddress;
    NSString *_conveyanceName;
    NSString *_carrierName;
    NSString *_state;
    NSString *_stopCount;
    NSString *_lineDistance;
    NSString *_taskType;
    NSString *_taskTypeStr;
    NSString *_driverName;
    NSString *_mainDriverAccount;
    NSString *_copilot;
    NSString *_copilotName;
    NSString *_copilotAccount;
    NSString *_copilotMobilephone;
    NSString *_miles;
    NSString *_fieldBak07;
    long long _fieldBak03;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(nonatomic) long long fieldBak03; // @synthesize fieldBak03=_fieldBak03;
@property(retain, nonatomic) NSString *fieldBak07; // @synthesize fieldBak07=_fieldBak07;
@property(retain, nonatomic) NSString *miles; // @synthesize miles=_miles;
@property(retain, nonatomic) NSString *copilotMobilephone; // @synthesize copilotMobilephone=_copilotMobilephone;
@property(retain, nonatomic) NSString *copilotAccount; // @synthesize copilotAccount=_copilotAccount;
@property(retain, nonatomic) NSString *copilotName; // @synthesize copilotName=_copilotName;
@property(retain, nonatomic) NSString *copilot; // @synthesize copilot=_copilot;
@property(retain, nonatomic) NSString *mainDriverAccount; // @synthesize mainDriverAccount=_mainDriverAccount;
@property(retain, nonatomic) NSString *driverName; // @synthesize driverName=_driverName;
@property(retain, nonatomic) NSString *taskTypeStr; // @synthesize taskTypeStr=_taskTypeStr;
@property(retain, nonatomic) NSString *taskType; // @synthesize taskType=_taskType;
@property(retain, nonatomic) NSString *lineDistance; // @synthesize lineDistance=_lineDistance;
@property(retain, nonatomic) NSString *stopCount; // @synthesize stopCount=_stopCount;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(retain, nonatomic) NSString *conveyanceName; // @synthesize conveyanceName=_conveyanceName;
@property(retain, nonatomic) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property(retain, nonatomic) NSString *destinationCode; // @synthesize destinationCode=_destinationCode;
@property(retain, nonatomic) NSString *planArriveTime; // @synthesize planArriveTime=_planArriveTime;
@property(retain, nonatomic) NSString *srcZonePlanarriveTime; // @synthesize srcZonePlanarriveTime=_srcZonePlanarriveTime;
@property(retain, nonatomic) NSString *originAddress; // @synthesize originAddress=_originAddress;
@property(retain, nonatomic) NSString *originCode; // @synthesize originCode=_originCode;
@property(retain, nonatomic) NSString *planSendTime; // @synthesize planSendTime=_planSendTime;
@property(retain, nonatomic) NSString *vehicleNumber; // @synthesize vehicleNumber=_vehicleNumber;
@property(nonatomic) _Bool isCustomizeTask; // @synthesize isCustomizeTask=_isCustomizeTask;
@property(nonatomic) _Bool isStop; // @synthesize isStop=_isStop;
@property(retain, nonatomic) NSString *deptCode; // @synthesize deptCode=_deptCode;
@property(retain, nonatomic) NSString *serial; // @synthesize serial=_serial;
@property(retain, nonatomic) NSString *requireId; // @synthesize requireId=_requireId;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *ttId; // @synthesize ttId=_ttId;
- (void).cxx_destruct;

@end

