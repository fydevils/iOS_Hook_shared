//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMapNetworkManager, MAOfflineItemNationWide, MAOfflinePackage, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface MAOfflineMap : NSObject
{
    _Bool _checkNewestVersionIsRunning;
    NSString *_basePath;
    NSString *_CachedFilePath;
    NSString *_vmapPath;
    MAOfflinePackage *_package;
    long long _maxConcurrentDownloadCount;
    NSMutableDictionary *_runningOperations;
    NSMutableArray *_waitingItems;
    NSMutableDictionary *_cancelBlocks;
    AMapNetworkManager *_downloader;
}

+ (id)sharedOfflineMap;
+ (id)offlineRequestQueue;
@property(retain, nonatomic) AMapNetworkManager *downloader; // @synthesize downloader=_downloader;
@property _Bool checkNewestVersionIsRunning; // @synthesize checkNewestVersionIsRunning=_checkNewestVersionIsRunning;
@property(retain, nonatomic) NSMutableDictionary *cancelBlocks; // @synthesize cancelBlocks=_cancelBlocks;
@property(retain, nonatomic) NSMutableArray *waitingItems; // @synthesize waitingItems=_waitingItems;
@property(retain, nonatomic) NSMutableDictionary *runningOperations; // @synthesize runningOperations=_runningOperations;
@property(nonatomic) long long maxConcurrentDownloadCount; // @synthesize maxConcurrentDownloadCount=_maxConcurrentDownloadCount;
@property(retain, nonatomic) MAOfflinePackage *package; // @synthesize package=_package;
@property(copy, nonatomic) NSString *vmapPath; // @synthesize vmapPath=_vmapPath;
@property(copy, nonatomic) NSString *CachedFilePath; // @synthesize CachedFilePath=_CachedFilePath;
@property(copy, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
- (void).cxx_destruct;
- (id)init;
- (void)setupBasePath;
- (void)setupStatus;
- (void)setupPackage;
- (void)mergeAE8POfflineDataStatusToPackageIfNeed:(id)arg1;
- (_Bool)unzipDownloadedFile:(id)arg1 toPath:(id)arg2 adcode:(id)arg3 error:(id *)arg4;
- (_Bool)clearAndReconstructDirectoryAtPath:(id)arg1;
- (_Bool)deleteFileAtPath:(id)arg1;
- (void)deleteCachedFileForItems:(id)arg1;
- (void)deleteFilesForItem:(id)arg1;
- (id)folderNameUsedForEngine:(id)arg1;
- (id)offlinePlistFilePath;
- (id)vmapFilePathForItem:(id)arg1;
- (id)cachedFilePathForItem:(id)arg1;
- (void)mergeFrom:(id)arg1 to:(id)arg2;
- (void)updateOfflinePackageWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)checkoutNewestPackageWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)checkLocalVersion:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)forbidBackup;
- (unsigned long long)fileSizeForPath:(id)arg1;
- (id)progressInfoWithReceivedSize:(long long)arg1 expectedSize:(long long)arg2;
- (void)executeCompleteWithItem:(id)arg1 downloadBlock:(CDUnknownBlockType)arg2 status:(long long)arg3 info:(id)arg4;
- (void)executeCancelBlockWithItem:(id)arg1;
- (void)checkNewestVersion:(CDUnknownBlockType)arg1;
- (void)updateItemStatusToNoneIncludingCached:(_Bool)arg1;
- (void)clearDiskOfBefore600;
- (void)clearDisk;
- (void)cancelAll;
- (void)resetItemStatusForItem:(id)arg1;
- (void)doDeleteForItem:(id)arg1;
- (void)deleteItem:(id)arg1;
- (_Bool)doPauseForItem:(id)arg1;
- (_Bool)pauseItem:(id)arg1;
- (_Bool)isDownloadingForItem:(id)arg1;
- (void)tryPopWaitingOperations;
- (void)tryToStartDownloadOperation:(id)arg1 forItem:(id)arg2;
- (void)downloadItem:(id)arg1 shouldContinueWhenAppEntersBackground:(_Bool)arg2 downloadBlock:(CDUnknownBlockType)arg3;
- (void)setupWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSArray *cities;
@property(readonly, nonatomic) MAOfflineItemNationWide *nationWide;
@property(readonly, nonatomic) NSArray *municipalities;
@property(readonly, nonatomic) NSArray *provinces;
- (void)pause:(id)arg1;
- (_Bool)isDownloadingForCity:(id)arg1;
- (void)downloadCity:(id)arg1 shouldContinueWhenAppEntersBackground:(_Bool)arg2 downloadBlock:(CDUnknownBlockType)arg3;
- (void)downloadCity:(id)arg1 downloadBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *offlineCities;

@end

