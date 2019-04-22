//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface SFApplyVehicleModel : JSONModel
{
    _Bool _isSelect;
    NSString *_vehicleCode;
    NSString *_vehicleId;
    NSString *_vehicleBrand;
    NSString *_wheelbase;
    NSString *_maxLoad;
    NSString *_fuelType;
    NSString *_emissionStandard;
    NSString *_vehicleRegDt;
    NSString *_vehicleRegDtStr;
    NSString *_emissionStandardStr;
}

+ (id)keyMapper;
+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(copy, nonatomic) NSString *emissionStandardStr; // @synthesize emissionStandardStr=_emissionStandardStr;
@property(copy, nonatomic) NSString *vehicleRegDtStr; // @synthesize vehicleRegDtStr=_vehicleRegDtStr;
@property(copy, nonatomic) NSString *vehicleRegDt; // @synthesize vehicleRegDt=_vehicleRegDt;
@property(copy, nonatomic) NSString *emissionStandard; // @synthesize emissionStandard=_emissionStandard;
@property(copy, nonatomic) NSString *fuelType; // @synthesize fuelType=_fuelType;
@property(copy, nonatomic) NSString *maxLoad; // @synthesize maxLoad=_maxLoad;
@property(copy, nonatomic) NSString *wheelbase; // @synthesize wheelbase=_wheelbase;
@property(copy, nonatomic) NSString *vehicleBrand; // @synthesize vehicleBrand=_vehicleBrand;
@property(copy, nonatomic) NSString *vehicleId; // @synthesize vehicleId=_vehicleId;
@property(copy, nonatomic) NSString *vehicleCode; // @synthesize vehicleCode=_vehicleCode;
- (void).cxx_destruct;

@end
