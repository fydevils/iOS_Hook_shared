//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString;

@interface SFToCAddVehicleModel : JSONModel
{
    _Bool _isSelected;
    NSNumber *_vehicleId;
    NSString *_vehicleCode;
    long long _src;
    NSString *_belong;
    NSString *_belongName;
    NSNumber *_vehicleTon;
    NSNumber *_capacity;
    NSString *_vehicleTypeCode;
    NSString *_vehicleTypeName;
    long long _vehicleStatus;
    long long _LicenseStatus;
    long long _district;
    NSNumber *_available;
    NSString *_unAvailableReason;
    NSString *_tbpVehicleLength;
    NSString *_tbpVehicleTypeCode;
    NSString *_tbpVehicleTypeName;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSString *tbpVehicleTypeName; // @synthesize tbpVehicleTypeName=_tbpVehicleTypeName;
@property(retain, nonatomic) NSString *tbpVehicleTypeCode; // @synthesize tbpVehicleTypeCode=_tbpVehicleTypeCode;
@property(retain, nonatomic) NSString *tbpVehicleLength; // @synthesize tbpVehicleLength=_tbpVehicleLength;
@property(retain, nonatomic) NSString *unAvailableReason; // @synthesize unAvailableReason=_unAvailableReason;
@property(retain, nonatomic) NSNumber *available; // @synthesize available=_available;
@property(nonatomic) long long district; // @synthesize district=_district;
@property(nonatomic) long long LicenseStatus; // @synthesize LicenseStatus=_LicenseStatus;
@property(nonatomic) long long vehicleStatus; // @synthesize vehicleStatus=_vehicleStatus;
@property(retain, nonatomic) NSString *vehicleTypeName; // @synthesize vehicleTypeName=_vehicleTypeName;
@property(retain, nonatomic) NSString *vehicleTypeCode; // @synthesize vehicleTypeCode=_vehicleTypeCode;
@property(retain, nonatomic) NSNumber *capacity; // @synthesize capacity=_capacity;
@property(retain, nonatomic) NSNumber *vehicleTon; // @synthesize vehicleTon=_vehicleTon;
@property(copy, nonatomic) NSString *belongName; // @synthesize belongName=_belongName;
@property(copy, nonatomic) NSString *belong; // @synthesize belong=_belong;
@property(nonatomic) long long src; // @synthesize src=_src;
@property(copy, nonatomic) NSString *vehicleCode; // @synthesize vehicleCode=_vehicleCode;
@property(retain, nonatomic) NSNumber *vehicleId; // @synthesize vehicleId=_vehicleId;
- (void).cxx_destruct;
- (double)getModelHeight;

@end

