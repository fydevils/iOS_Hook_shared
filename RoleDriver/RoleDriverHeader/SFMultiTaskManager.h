//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CTCallCenter;

@interface SFMultiTaskManager : NSObject
{
    CTCallCenter *_callCenter;
}

+ (id)manager;
- (void).cxx_destruct;
- (void)appEnterForegroundOrBackground:(long long)arg1;
- (void)dealloc;
- (void)fetchTaskConfigFromServerSuccess:(CDUnknownBlockType)arg1;
- (void)fetchTaskConfigFromServer;
- (void)monitorCellPhoneCalls;
- (void)uploadedLog;
- (void)login_or_exit:(_Bool)arg1;
- (void)aFNetworkReachabilityStatus;
- (void)applicationDidBecomeActive;
- (void)applicationEnterBackground;
- (void)applicationBecomeActive;
- (id)init;

@end

