//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabase, NSString;
@protocol OS_dispatch_queue;

@interface FMDatabaseQueue : NSObject
{
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    FMDatabase *_db;
    int _openFlags;
}

+ (Class)databaseClass;
+ (id)databaseQueueWithPath:(id)arg1 flags:(int)arg2;
+ (id)databaseQueueWithPath:(id)arg1;
@property(readonly) int openFlags; // @synthesize openFlags=_openFlags;
@property(retain) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)inSavePoint:(CDUnknownBlockType)arg1;
- (void)inTransaction:(CDUnknownBlockType)arg1;
- (void)inDeferredTransaction:(CDUnknownBlockType)arg1;
- (void)beginTransaction:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)inDatabase:(CDUnknownBlockType)arg1;
- (id)database;
- (void)close;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 flags:(int)arg2;
- (id)initWithPath:(id)arg1 flags:(int)arg2 vfs:(id)arg3;

@end

