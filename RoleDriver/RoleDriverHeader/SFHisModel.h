//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString;

@interface SFHisModel : JSONModel
{
    NSString *_mainDriverAccount;
    NSString *_copilotMobilephone;
    NSString *_ttId;
    NSNumber *_miles;
    NSNumber *_state;
    NSNumber *_bizType;
    NSString *_originCode;
    NSString *_userPhone;
    NSString *_driverName;
    NSNumber *_actualDepartureDate;
    NSNumber *_actualArrivalDate;
    NSNumber *_minutes;
    NSString *_vehicleCode;
    NSString *_originAddress;
    NSString *_destinationCode;
    NSString *_copilotName;
    NSString *_vehicleNumber;
    NSString *_conveyanceName;
    NSNumber *_planSendTime;
    NSNumber *_planArriveTime;
    NSNumber *_lineDistance;
    NSString *_copilotAccount;
    NSString *_updater;
    NSNumber *_isAbnormal;
    NSString *_deptCode;
    NSString *_destinationAddress;
    NSNumber *_taskType;
    NSNumber *_createdDatetime;
    NSString *_serial;
    NSNumber *_isStop;
    NSNumber *_stopCount;
    NSString *_copilot;
    NSNumber *_hours;
    NSNumber *_isCustomizeTask;
    NSString *_requireId;
    long long _fieldBak03;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(nonatomic) long long fieldBak03; // @synthesize fieldBak03=_fieldBak03;
@property(copy, nonatomic) NSString *requireId; // @synthesize requireId=_requireId;
@property(retain, nonatomic) NSNumber *isCustomizeTask; // @synthesize isCustomizeTask=_isCustomizeTask;
@property(retain, nonatomic) NSNumber *hours; // @synthesize hours=_hours;
@property(copy, nonatomic) NSString *copilot; // @synthesize copilot=_copilot;
@property(retain, nonatomic) NSNumber *stopCount; // @synthesize stopCount=_stopCount;
@property(retain, nonatomic) NSNumber *isStop; // @synthesize isStop=_isStop;
@property(copy, nonatomic) NSString *serial; // @synthesize serial=_serial;
@property(retain, nonatomic) NSNumber *createdDatetime; // @synthesize createdDatetime=_createdDatetime;
@property(retain, nonatomic) NSNumber *taskType; // @synthesize taskType=_taskType;
@property(copy, nonatomic) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property(copy, nonatomic) NSString *deptCode; // @synthesize deptCode=_deptCode;
@property(retain, nonatomic) NSNumber *isAbnormal; // @synthesize isAbnormal=_isAbnormal;
@property(copy, nonatomic) NSString *updater; // @synthesize updater=_updater;
@property(copy, nonatomic) NSString *copilotAccount; // @synthesize copilotAccount=_copilotAccount;
@property(retain, nonatomic) NSNumber *lineDistance; // @synthesize lineDistance=_lineDistance;
@property(retain, nonatomic) NSNumber *planArriveTime; // @synthesize planArriveTime=_planArriveTime;
@property(retain, nonatomic) NSNumber *planSendTime; // @synthesize planSendTime=_planSendTime;
@property(copy, nonatomic) NSString *conveyanceName; // @synthesize conveyanceName=_conveyanceName;
@property(copy, nonatomic) NSString *vehicleNumber; // @synthesize vehicleNumber=_vehicleNumber;
@property(copy, nonatomic) NSString *copilotName; // @synthesize copilotName=_copilotName;
@property(copy, nonatomic) NSString *destinationCode; // @synthesize destinationCode=_destinationCode;
@property(copy, nonatomic) NSString *originAddress; // @synthesize originAddress=_originAddress;
@property(copy, nonatomic) NSString *vehicleCode; // @synthesize vehicleCode=_vehicleCode;
@property(retain, nonatomic) NSNumber *minutes; // @synthesize minutes=_minutes;
@property(retain, nonatomic) NSNumber *actualArrivalDate; // @synthesize actualArrivalDate=_actualArrivalDate;
@property(retain, nonatomic) NSNumber *actualDepartureDate; // @synthesize actualDepartureDate=_actualDepartureDate;
@property(copy, nonatomic) NSString *driverName; // @synthesize driverName=_driverName;
@property(copy, nonatomic) NSString *userPhone; // @synthesize userPhone=_userPhone;
@property(copy, nonatomic) NSString *originCode; // @synthesize originCode=_originCode;
@property(retain, nonatomic) NSNumber *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSNumber *state; // @synthesize state=_state;
@property(retain, nonatomic) NSNumber *miles; // @synthesize miles=_miles;
@property(retain, nonatomic) NSString *ttId; // @synthesize ttId=_ttId;
@property(retain, nonatomic) NSString *copilotMobilephone; // @synthesize copilotMobilephone=_copilotMobilephone;
@property(retain, nonatomic) NSString *mainDriverAccount; // @synthesize mainDriverAccount=_mainDriverAccount;
- (void).cxx_destruct;

@end

