//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SFSpeechRecognitionTaskDelegate-Protocol.h"

@class AVAudioRecorder, NSArray, NSString;
@protocol SFRecordDelegate;

@interface SFRecord : NSObject <SFSpeechRecognitionTaskDelegate>
{
    _Bool _isTarget;
    id <SFRecordDelegate> _delegate;
    long long _startTime;
    long long _endTime;
    double _maxTime;
    AVAudioRecorder *_recorder;
    NSArray *_exclamations;
    NSString *_fileName;
}

@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSArray *exclamations; // @synthesize exclamations=_exclamations;
@property(retain, nonatomic) AVAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic) double maxTime; // @synthesize maxTime=_maxTime;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool isTarget; // @synthesize isTarget=_isTarget;
@property(nonatomic) __weak id <SFRecordDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)punctuationOfCurrentSpeechString:(id)arg1;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(_Bool)arg2;
- (void)speechRecognitionTaskWasCancelled:(id)arg1;
- (void)speechRecognitionTaskFinishedReadingAudio:(id)arg1;
- (double)durationWithTwoTime:(id)arg1 andEndSegment:(id)arg2;
- (id)appendStringWithTwoTime:(id)arg1 andEndSegment:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
- (void)speechRecognitionDidDetectSpeech:(id)arg1;
- (void)deleteRecordAAC;
- (void)endRecord;
- (void)startRecord;
- (id)recordPath;
- (id)recordSettringParamter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

