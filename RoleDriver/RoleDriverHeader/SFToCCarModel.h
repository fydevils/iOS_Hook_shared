//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface SFToCCarModel : JSONModel
{
    _Bool _status;
    _Bool _isSelect;
    NSString *_vehicleId;
    NSString *_msg;
    NSString *_vehicleCode;
    NSString *_vehicleTon;
    NSString *_vehicleCapacity;
    NSString *_vehicleLength;
    NSString *_vehicleTypeCode;
    NSString *_vehicleTypeName;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(nonatomic) _Bool status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *vehicleTypeName; // @synthesize vehicleTypeName=_vehicleTypeName;
@property(copy, nonatomic) NSString *vehicleTypeCode; // @synthesize vehicleTypeCode=_vehicleTypeCode;
@property(copy, nonatomic) NSString *vehicleLength; // @synthesize vehicleLength=_vehicleLength;
@property(copy, nonatomic) NSString *vehicleCapacity; // @synthesize vehicleCapacity=_vehicleCapacity;
@property(copy, nonatomic) NSString *vehicleTon; // @synthesize vehicleTon=_vehicleTon;
@property(copy, nonatomic) NSString *vehicleCode; // @synthesize vehicleCode=_vehicleCode;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString *vehicleId; // @synthesize vehicleId=_vehicleId;
- (void).cxx_destruct;

@end
