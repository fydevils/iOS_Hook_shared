//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol MTAMainServiceDelegate <NSObject>
+ (_Bool)isEqualToMagic:(NSData *)arg1;
+ (NSData *)filterBodyData:(NSData *)arg1 configData:(NSData *)arg2;
+ (NSData *)getSendData:(NSData *)arg1;
+ (NSString *)getSDKProperty:(NSString *)arg1;
+ (NSString *)getAppProperty:(NSString *)arg1;
+ (NSString *)getMccMnc;
+ (NSString *)getMTAVersion;
+ (NSString *)getNetworkType;
+ (NSString *)getAppKey;
+ (NSString *)getAppVersion;
+ (NSString *)getMTAConfigIDFA;
+ (NSString *)getIDFV;
+ (NSString *)getBundleID;
+ (NSString *)getOpenUDID;
@end
