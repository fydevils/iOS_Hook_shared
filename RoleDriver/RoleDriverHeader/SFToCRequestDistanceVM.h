//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SFToCRequestDistanceVM : NSObject
{
    NSMutableDictionary *_distanceMdict;
    NSString *_latitude;
    NSString *_longitude;
}

@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSMutableDictionary *distanceMdict; // @synthesize distanceMdict=_distanceMdict;
- (void).cxx_destruct;
- (void)requestDistanceDataArray:(id)arg1 success:(CDUnknownBlockType)arg2;

@end

