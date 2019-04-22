//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMapLocationManagerDelegate-Protocol.h"

@class AMapLocationManager, NSString, NSTimer, SFUserLocation;

@interface SFAppLocationUpload : NSObject <AMapLocationManagerDelegate>
{
    SFUserLocation *_currentLocation;
    NSTimer *_timer;
    CDUnknownBlockType _completionBlock;
    AMapLocationManager *_locationManager;
    long long _starTime;
    NSString *_updataGpsTime;
    CDUnknownBlockType _locationBlock;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType locationBlock; // @synthesize locationBlock=_locationBlock;
@property(retain, nonatomic) NSString *updataGpsTime; // @synthesize updataGpsTime=_updataGpsTime;
@property(nonatomic) long long starTime; // @synthesize starTime=_starTime;
@property(retain, nonatomic) AMapLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) SFUserLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
- (void).cxx_destruct;
- (void)updataGps:(id)arg1;
- (void)startLocationService;
- (void)startAppLocationSpaceTime:(long long)arg1 Block:(CDUnknownBlockType)arg2;
- (void)cleanUpAction;
- (void)stopLocationUpload;
- (void)uploadLocationFromServiceWithLocation:(id)arg1;
- (void)sf_didUpdateUserLocation:(id)arg1;
- (void)initCompleteBlock;
- (void)reGeocodeAction;
- (void)startLocation;
- (void)startTimeChange;
- (void)startLocationUpload;
- (void)configLocationManager;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

