//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface SFToCZoneContact : JSONModel
{
    long long _id;
    NSString *_areaName;
    NSString *_groupName;
    NSString *_areaCode;
    NSString *_empName;
    NSString *_empNo;
    NSString *_empContactInfo;
    NSString *_secManageContactInfo;
    NSString *_zoneCode;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString *zoneCode; // @synthesize zoneCode=_zoneCode;
@property(copy, nonatomic) NSString *secManageContactInfo; // @synthesize secManageContactInfo=_secManageContactInfo;
@property(copy, nonatomic) NSString *empContactInfo; // @synthesize empContactInfo=_empContactInfo;
@property(copy, nonatomic) NSString *empNo; // @synthesize empNo=_empNo;
@property(copy, nonatomic) NSString *empName; // @synthesize empName=_empName;
@property(copy, nonatomic) NSString *areaCode; // @synthesize areaCode=_areaCode;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *areaName; // @synthesize areaName=_areaName;
@property(nonatomic) long long id; // @synthesize id=_id;
- (void).cxx_destruct;

@end
