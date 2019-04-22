//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MTAStore : NSObject
{
    NSObject<OS_dispatch_queue> *task_queue;
    struct sqlite3 *db;
    unsigned int numStoredEvents;
    _Bool _isSendingCacheEvent;
    _Bool _isSendingMemCacheEvent;
    NSLock *cacheEventLock;
    NSLock *_cacheMemEventLock;
    NSMutableArray *_cachedEventsArr;
    NSString *_mtaOpenUdid;
    NSLock *_mtaOpenUdidLock;
}

+ (id)getInstance;
@property(retain, nonatomic) NSLock *mtaOpenUdidLock; // @synthesize mtaOpenUdidLock=_mtaOpenUdidLock;
@property(retain, nonatomic) NSString *mtaOpenUdid; // @synthesize mtaOpenUdid=_mtaOpenUdid;
@property(retain) NSMutableArray *cachedEventsArr; // @synthesize cachedEventsArr=_cachedEventsArr;
@property _Bool isSendingMemCacheEvent; // @synthesize isSendingMemCacheEvent=_isSendingMemCacheEvent;
@property(retain) NSLock *cacheMemEventLock; // @synthesize cacheMemEventLock=_cacheMemEventLock;
@property _Bool isSendingCacheEvent; // @synthesize isSendingCacheEvent=_isSendingCacheEvent;
@property(retain) NSLock *cacheEventLock; // @synthesize cacheEventLock;
- (void).cxx_destruct;
- (void)sendCachedEvents:(int)arg1;
- (void)sendMemCachedEvents:(int)arg1;
- (void)storeEvent:(id)arg1 hasTrySent:(_Bool)arg2 CB:(CDUnknownBlockType)arg3;
- (void)loadConfig:(CDUnknownBlockType)arg1;
- (void)storeConfig:(id)arg1;
- (void)loadCachedEvents:(id)arg1;
- (void)loadMemCachedEvents:(id)arg1;
- (unsigned int)storedEventCount;
- (id)loadUser;
- (void)storeUser:(id)arg1;
- (void)updateEvents:(id)arg1 status:(unsigned int)arg2;
- (void)updateSendFailedEvents:(id)arg1;
- (void)deleteEvents:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (unsigned int)getStoredEventsNum;
- (id)getMtaOpenUDID;
- (int)updateDatabase:(const char *)arg1;
- (void)deleteDB;
- (void)closeDB;
- (struct sqlite3 *)getDB;
- (id)getMTAStorePath;
- (id)getDbPath;
- (void)initDB;
- (void)launch;
- (void)dealloc;
- (id)init;

@end
