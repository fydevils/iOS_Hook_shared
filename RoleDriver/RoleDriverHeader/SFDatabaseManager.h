//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabaseQueue, NSString;

@interface SFDatabaseManager : NSObject
{
    FMDatabaseQueue *_databaseQueue;
    NSString *_databasePath;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(readonly, nonatomic) FMDatabaseQueue *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
- (id)init;

@end
