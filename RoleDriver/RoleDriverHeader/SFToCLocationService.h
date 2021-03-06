//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMapLocationManagerDelegate-Protocol.h"

@class AMapLocationManager, NSString, SFUserLocation;

@interface SFToCLocationService : NSObject <AMapLocationManagerDelegate>
{
    CDUnknownBlockType _locationBlock;
    SFUserLocation *_blockLocation;
    AMapLocationManager *_locationManager;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) AMapLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) SFUserLocation *blockLocation; // @synthesize blockLocation=_blockLocation;
@property(copy, nonatomic) CDUnknownBlockType locationBlock; // @synthesize locationBlock=_locationBlock;
- (void).cxx_destruct;
- (void)ph_didFailToLocateUserWithError:(id)arg1;
- (void)sf_didUpdateUserLocation:(id)arg1;
- (void)startLocationWithReGeocode:(_Bool)arg1 LocationManagerBlock:(CDUnknownBlockType)arg2;
- (void)startLocationLocationManagerBlock:(CDUnknownBlockType)arg1;
- (void)initCompleteBlock;
- (void)configLocationManager;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

