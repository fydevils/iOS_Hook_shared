//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMapCacheFileManager, AMapNetworkManager, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AMapLocationUploadManager : NSObject
{
    _Bool _allowUpload;
    _Bool _allowMobileUpload;
    _Bool _isOldServerActive;
    long long _fileCount;
    long long _locationPerFile;
    long long _uploadTimespan;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    AMapNetworkManager *_networkManager;
    NSMutableArray *_tempLocationInfoArray;
    AMapCacheFileManager *_fileManager;
    _Bool _isUploading;
    double _lastUploadTimestamp;
}

+ (id)sharedInstance;
@property double lastUploadTimestamp; // @synthesize lastUploadTimestamp=_lastUploadTimestamp;
@property _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(readonly) _Bool isOldServerActive; // @synthesize isOldServerActive=_isOldServerActive;
- (void).cxx_destruct;
- (void)appDidEnterBackgroundAction;
- (void)reloadLastUploadAuthConfig;
- (void)saveLastUploadAuthConfig;
- (void)reloadLastUploadTimestamp;
- (void)saveLastUploadTimestamp;
- (void)reachabilityChanged:(id)arg1;
- (void)updateControlWithResponse:(id)arg1;
- (_Bool)isUploadSucceededWithResponseData:(id)arg1;
- (_Bool)shouldUploadForTimespan;
- (_Bool)shouldUploadForNet;
- (void)uploadCacheFile;
- (void)uploadCacheFileIfNeeded;
- (void)deleteOldestFile;
- (void)clearCacheLogs;
- (void)writeLocationInfoArray;
- (void)cacheLocation:(id)arg1;
- (void)registerNotificationObservers;
- (void)setDefaultConfig;
- (void)initProperties;
- (void)deallocOperation;
- (void)dealloc;
- (id)init;

@end

