//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PgyUpdateCloudClient;

@interface PgyUpdateManager : NSObject
{
    id checkUpdateDelegate;
    SEL updateMethod;
    NSString *_updateUrl;
    NSString *_downloadUrl;
    NSString *_latestBuildNumber;
    NSString *_latestBuildNumberWithDelegate;
    NSString *_agKey;
    PgyUpdateCloudClient *_getBuildNumberCloudClient;
    PgyUpdateCloudClient *_checkUpdateCloudClient;
    PgyUpdateCloudClient *_checkUpdateWithDelegateCloudClient;
}

+ (id)sharedPgyManager;
@property(retain, nonatomic) NSString *agKey; // @synthesize agKey=_agKey;
- (void).cxx_destruct;
- (void)checkUpdateError:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateLocalBuildNumber;
- (void)checkUpdateSuccess:(id)arg1;
- (void)checkUpdateWithDelegateError:(id)arg1;
- (void)checkUpdateWithDelegateSuccess:(id)arg1;
- (void)checkUpdateWithDelegete:(id)arg1 selector:(SEL)arg2;
- (void)checkUpdate;
- (void)getLastBuildNumberError:(id)arg1;
- (void)getLastBuildNumberSuccess:(id)arg1;
- (void)getLastBuildNumber;
- (void)startManagerWithAppId:(id)arg1;

@end

