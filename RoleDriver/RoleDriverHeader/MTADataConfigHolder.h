//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTAOnlineConfigServiceProtocol-Protocol.h"

@class MTADataConfig, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MTADataConfigHolder : NSObject <MTAOnlineConfigServiceProtocol>
{
    NSObject<OS_dispatch_queue> *task_queue;
    struct sqlite3 *db;
    _Bool isUsed;
    MTADataConfig *_sdkCfg;
    MTADataConfig *_appCfg;
    NSMutableDictionary *_sdkProperties;
    NSMutableDictionary *_appProperties;
}

+ (id)getInstance;
+ (void)load;
@property(retain, nonatomic) NSMutableDictionary *appProperties; // @synthesize appProperties=_appProperties;
@property(retain, nonatomic) NSMutableDictionary *sdkProperties; // @synthesize sdkProperties=_sdkProperties;
@property(retain, nonatomic) MTADataConfig *appCfg; // @synthesize appCfg=_appCfg;
@property(retain, nonatomic) MTADataConfig *sdkCfg; // @synthesize sdkCfg=_sdkCfg;
@property(nonatomic) _Bool isUsed; // @synthesize isUsed;
- (void).cxx_destruct;
- (void)updateOnlineConfig:(id)arg1;
- (void)updateConfig:(id)arg1 Type:(unsigned int)arg2;
- (id)getConfig:(unsigned int)arg1;
- (void)encode:(id)arg1;
- (void)setConfig:(id)arg1;
- (id)getSDKProperty:(id)arg1;
- (id)getAppProperty:(id)arg1;
- (void)updateOnlineConfigSTD:(id)arg1;
- (void)initSingletonSTD:(CDUnknownBlockType)arg1;
- (id)getAppPropertySTD:(id)arg1;
- (void)encodeSTD:(id)arg1;
- (void)initSingleton:(CDUnknownBlockType)arg1;
- (void)initWithBlock:(CDUnknownBlockType)arg1;
- (void)checkFirstUse;

@end
