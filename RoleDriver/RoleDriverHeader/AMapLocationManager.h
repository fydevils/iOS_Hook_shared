//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMapLocationRequestDelegate-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"

@class AMapLocationReGeocode, AMapNetworkManager, CLLocation, CLLocationManager, NSArray, NSMapTable, NSMutableArray, NSOperationQueue, NSSet, NSString;
@protocol AMapLocationManagerDelegate, OS_dispatch_queue;

@interface AMapLocationManager : NSObject <CLLocationManagerDelegate, AMapLocationRequestDelegate>
{
    long long _locatingRequestCount;
    NSArray *_runLoopModels;
    NSObject<OS_dispatch_queue> *_requestsHandlingQueue;
    NSObject<OS_dispatch_queue> *_regionHandlingQueue;
    _Bool _locatingWithReGeocode;
    _Bool _detectRiskOfFakeLocation;
    _Bool _onlineStatisticsEnable;
    _Bool _shouldStartLocationTimer;
    _Bool _refreshReGeocodeEnabled;
    _Bool _isReGeocoding;
    _Bool _needSendRegisterInfo;
    long long _reGeocodeTimeout;
    long long _locationTimeout;
    id <AMapLocationManagerDelegate> _delegate;
    long long _reGeocodeLanguage;
    AMapNetworkManager *_networkManager;
    CLLocationManager *_locationManager;
    NSMutableArray *_locationRequests;
    long long _workStatus;
    CLLocation *_latestLocation;
    double _refreshReGeocodeRadius;
    NSOperationQueue *_reGeocodeHandlingQueue;
    CLLocation *_reGeocodeLocation;
    AMapLocationReGeocode *_reGeocodeInfo;
    CLLocationManager *_headingLocationManager;
    CLLocationManager *_regionLocationManager;
    NSMutableArray *_monitoringRegions;
    NSMapTable *_regionIdentifiers;
}

+ (_Bool)headingAvailable;
@property(retain, nonatomic) NSMapTable *regionIdentifiers; // @synthesize regionIdentifiers=_regionIdentifiers;
@property(retain, nonatomic) NSMutableArray *monitoringRegions; // @synthesize monitoringRegions=_monitoringRegions;
@property(retain, nonatomic) CLLocationManager *regionLocationManager; // @synthesize regionLocationManager=_regionLocationManager;
@property(retain, nonatomic) CLLocationManager *headingLocationManager; // @synthesize headingLocationManager=_headingLocationManager;
@property(retain, nonatomic) AMapLocationReGeocode *reGeocodeInfo; // @synthesize reGeocodeInfo=_reGeocodeInfo;
@property(retain, nonatomic) CLLocation *reGeocodeLocation; // @synthesize reGeocodeLocation=_reGeocodeLocation;
@property(retain, nonatomic) NSOperationQueue *reGeocodeHandlingQueue; // @synthesize reGeocodeHandlingQueue=_reGeocodeHandlingQueue;
@property _Bool needSendRegisterInfo; // @synthesize needSendRegisterInfo=_needSendRegisterInfo;
@property _Bool isReGeocoding; // @synthesize isReGeocoding=_isReGeocoding;
@property double refreshReGeocodeRadius; // @synthesize refreshReGeocodeRadius=_refreshReGeocodeRadius;
@property _Bool refreshReGeocodeEnabled; // @synthesize refreshReGeocodeEnabled=_refreshReGeocodeEnabled;
@property(retain) CLLocation *latestLocation; // @synthesize latestLocation=_latestLocation;
@property long long workStatus; // @synthesize workStatus=_workStatus;
@property(retain, nonatomic) NSMutableArray *locationRequests; // @synthesize locationRequests=_locationRequests;
@property _Bool shouldStartLocationTimer; // @synthesize shouldStartLocationTimer=_shouldStartLocationTimer;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property _Bool onlineStatisticsEnable; // @synthesize onlineStatisticsEnable=_onlineStatisticsEnable;
@property(retain, nonatomic) AMapNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
@property(nonatomic) _Bool detectRiskOfFakeLocation; // @synthesize detectRiskOfFakeLocation=_detectRiskOfFakeLocation;
@property(nonatomic) long long reGeocodeLanguage; // @synthesize reGeocodeLanguage=_reGeocodeLanguage;
@property(nonatomic) _Bool locatingWithReGeocode; // @synthesize locatingWithReGeocode=_locatingWithReGeocode;
@property(nonatomic) __weak id <AMapLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeAllMonitoringRegions;
- (void)removeRegion:(id)arg1;
- (void)addRegion:(id)arg1;
- (void)handleDeviceOrientationDidChange:(long long)arg1;
- (void)cancelAllLocationRequestsInDispatch;
- (void)cancelAllLocationRequests;
- (void)removeLocationRequest:(id)arg1;
- (void)addLocationRequest:(id)arg1;
- (_Bool)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)processLocationInfo:(id)arg1;
- (void)processMonitoringRegionsWithLocation:(id)arg1;
- (void)cancelReGeocodeForSerialLocate;
- (void)notifySerialLocateDelegateWithLocation:(id)arg1 reGeocode:(id)arg2;
- (void)getReGeocodeInfoIfNeedForLocation:(id)arg1;
- (void)processSerialLocationWithLocation:(id)arg1;
- (void)locationRequestDidCompleted:(id)arg1 withReGeocode:(id)arg2 error:(id)arg3;
- (void)locationRequestDidNeedReGeocode:(id)arg1;
- (void)locationRequestDidLocateTimedOut:(id)arg1;
- (void)invokeCompletionBlockWithRequest:(id)arg1 reGeocode:(id)arg2 error:(id)arg3;
- (void)cancelLocationRequest:(id)arg1;
- (void)forceCompleteAllRequestsWithoutLocationForError:(id)arg1;
- (void)forceCompleteAllRequestsForLocateError:(id)arg1;
- (void)handleNeedReGeocodeRequest:(id)arg1;
- (void)processLocationRequestsWithLocation:(id)arg1;
- (void)sendRegisterInfoForComponent:(id)arg1 withLat:(double)arg2 lon:(double)arg3;
- (void)requestReGeocodeInfoWithCoordinate:(struct CLLocationCoordinate2D)arg1 handler:(CDUnknownBlockType)arg2;
- (void)requestStateForRegion:(id)arg1;
- (void)stopMonitoringForRegion:(id)arg1;
- (void)startMonitoringForRegion:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *monitoredRegions;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (_Bool)requestLocationWithReGeocode:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dismissHeadingCalibrationDisplay;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
@property(nonatomic) _Bool allowsBackgroundLocationUpdates;
@property(nonatomic) _Bool pausesLocationUpdatesAutomatically;
@property(nonatomic) long long reGeocodeTimeout; // @synthesize reGeocodeTimeout=_reGeocodeTimeout;
@property(nonatomic) long long locationTimeout; // @synthesize locationTimeout=_locationTimeout;
@property(nonatomic) double desiredAccuracy;
@property(nonatomic) double distanceFilter;
@property(nonatomic) long long activityType;
- (void)stopRegionCLManager;
- (void)startRegionCLManager;
- (void)initRegionCLManager;
- (void)initHeadingCLManager;
- (void)stopCLMLocating;
- (void)startCLMLocating;
- (void)initCLManager;
- (void)createLocationManager;
- (void)initProperties;
@property(readonly, copy) NSString *description;
- (void)stopAndExitAllCLM;
- (void)deallocOperation;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

