//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SFToCMarketOrderBidVM : NSObject
{
    int _driverAuthStatus;
    int _vehicleAuthStatus;
    NSMutableArray *_dataArray;
}

@property(nonatomic) int vehicleAuthStatus; // @synthesize vehicleAuthStatus=_vehicleAuthStatus;
@property(nonatomic) int driverAuthStatus; // @synthesize driverAuthStatus=_driverAuthStatus;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (_Bool)isAuthUser;
- (void)queryUserAuthStatus;
- (id)getDataArray;
- (void)requestDateWithParam:(id)arg1 withType:(int)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)init;

@end

