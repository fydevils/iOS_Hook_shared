//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SFTaskTypeModel : NSObject
{
    NSString *_taskTypeName;
    long long _taskTypeCode;
    NSString *_taskTypeImageName;
}

@property(retain, nonatomic) NSString *taskTypeImageName; // @synthesize taskTypeImageName=_taskTypeImageName;
@property(nonatomic) long long taskTypeCode; // @synthesize taskTypeCode=_taskTypeCode;
@property(retain, nonatomic) NSString *taskTypeName; // @synthesize taskTypeName=_taskTypeName;
- (void).cxx_destruct;

@end

