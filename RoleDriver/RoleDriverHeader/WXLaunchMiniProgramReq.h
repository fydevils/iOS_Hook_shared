//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseReq.h"

@class NSString;

@interface WXLaunchMiniProgramReq : BaseReq
{
    NSString *userName;
    NSString *path;
    unsigned long long _miniProgramType;
    NSString *_extMsg;
}

+ (id)object;
@property(retain, nonatomic) NSString *extMsg; // @synthesize extMsg=_extMsg;
@property(nonatomic) unsigned long long miniProgramType; // @synthesize miniProgramType=_miniProgramType;
@property(retain, nonatomic) NSString *path; // @synthesize path;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
- (void)dealloc;

@end

