//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface SFToCEmptyModel : JSONModel
{
    NSString *_idleStartTime;
    NSString *_idleEndTime;
    NSString *_from;
    NSString *_to;
    long long _type;
    long long _idleDay;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) long long idleDay; // @synthesize idleDay=_idleDay;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *to; // @synthesize to=_to;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(copy, nonatomic) NSString *idleEndTime; // @synthesize idleEndTime=_idleEndTime;
@property(copy, nonatomic) NSString *idleStartTime; // @synthesize idleStartTime=_idleStartTime;
- (void).cxx_destruct;

@end

