//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMapLocationSearchManagerCommom : NSObject
{
}

+ (id)buildPOISearchItemWithOperation:(id)arg1 data:(id)arg2 error:(id *)arg3;
+ (id)buildDistrictItemWithOperation:(id)arg1 data:(id)arg2 error:(id *)arg3;
+ (double)calculateDistanceFromPoint:(id)arg1 toLine:(id)arg2 and:(id)arg3;
+ (id)reducer_RDP:(id)arg1 threshHold:(float)arg2;
+ (long long)errorCodeWithServerInfoCode:(long long)arg1;
+ (id)errorWithErrorCode:(long long)arg1 info:(id)arg2;

@end
