//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class MATraceRequest, NSArray, NSDate, NSError, NSMutableArray;

@interface MATraceQueryOperation : NSOperation
{
    double _timeOut;
    MATraceRequest *_request;
    long long _opertationTag;
    NSDate *_beginDate;
    NSArray *_subRequests;
    NSMutableArray *_pendingNetworkOpArr;
    NSError *_lastNetworkError;
    unsigned long long _nextProcessingCallbackIndex;
}

@property(nonatomic) unsigned long long nextProcessingCallbackIndex; // @synthesize nextProcessingCallbackIndex=_nextProcessingCallbackIndex;
@property(retain, nonatomic) NSError *lastNetworkError; // @synthesize lastNetworkError=_lastNetworkError;
@property(retain, nonatomic) NSMutableArray *pendingNetworkOpArr; // @synthesize pendingNetworkOpArr=_pendingNetworkOpArr;
@property(retain, nonatomic) NSArray *subRequests; // @synthesize subRequests=_subRequests;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(nonatomic) long long opertationTag; // @synthesize opertationTag=_opertationTag;
@property(retain, nonatomic) MATraceRequest *request; // @synthesize request=_request;
@property(nonatomic) double timeOut; // @synthesize timeOut=_timeOut;
- (void).cxx_destruct;
- (_Bool)isTimeOut;
- (id)asyncSingleQueryProcessedTraceWith:(id)arg1 completeCallback:(CDUnknownBlockType)arg2;
- (void)loopCheckResponses;
- (void)cancel;
- (void)main;
- (id)init;

@end

