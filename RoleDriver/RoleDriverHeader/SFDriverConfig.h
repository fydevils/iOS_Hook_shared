//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SFDriverConfig : NSObject
{
    long long _timeLimit;
    long long _beginTime;
    long long _gpsUploadTime;
    long long _upGpsTime;
    NSString *_gpsPilotArea;
    NSString *_taskRetentionProof;
    NSString *_customsDeptCode;
    long long _force_fill_information;
    NSString *_feedbackSwitch;
    NSString *_feedbackPhone;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *feedbackPhone; // @synthesize feedbackPhone=_feedbackPhone;
@property(copy, nonatomic) NSString *feedbackSwitch; // @synthesize feedbackSwitch=_feedbackSwitch;
@property(nonatomic) long long force_fill_information; // @synthesize force_fill_information=_force_fill_information;
@property(copy, nonatomic) NSString *customsDeptCode; // @synthesize customsDeptCode=_customsDeptCode;
@property(copy, nonatomic) NSString *taskRetentionProof; // @synthesize taskRetentionProof=_taskRetentionProof;
@property(copy, nonatomic) NSString *gpsPilotArea; // @synthesize gpsPilotArea=_gpsPilotArea;
@property(nonatomic) long long upGpsTime; // @synthesize upGpsTime=_upGpsTime;
@property(nonatomic) long long gpsUploadTime; // @synthesize gpsUploadTime=_gpsUploadTime;
@property(nonatomic) long long beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) long long timeLimit; // @synthesize timeLimit=_timeLimit;
- (void).cxx_destruct;
- (id)init;

@end

