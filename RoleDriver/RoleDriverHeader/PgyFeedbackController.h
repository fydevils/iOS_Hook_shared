//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AVAudioPlayerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class AVAudioPlayer, AVAudioRecorder, NSDictionary, NSString, NSTimer, PgyLoadingView, PgyMicrophoneView, UIColor;

@interface PgyFeedbackController : UIViewController <AVAudioPlayerDelegate, UITextViewDelegate, UITextFieldDelegate>
{
    AVAudioRecorder *recorder;
    NSString *voicePath;
    NSDictionary *recorderSettingsDict;
    AVAudioPlayer *player;
    long long voiceLength;
    _Bool recorded;
    _Bool viewAppeared;
    NSTimer *timer;
    NSTimer *recordTimer;
    long long recordCurrentLength;
    PgyMicrophoneView *microphoneView;
    _Bool _isImageZoomed;
    id _delegate;
    long long _originalOrientation;
    PgyLoadingView *_loadingView;
    UIColor *_headerColor;
    NSString *_originalSessionCategory;
    NSString *_agKey;
    struct CGRect _feedbackImageFrame;
}

@property(retain, nonatomic) NSString *agKey; // @synthesize agKey=_agKey;
@property(retain, nonatomic) NSString *originalSessionCategory; // @synthesize originalSessionCategory=_originalSessionCategory;
@property(retain, nonatomic) UIColor *headerColor; // @synthesize headerColor=_headerColor;
@property(retain, nonatomic) PgyLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) long long originalOrientation; // @synthesize originalOrientation=_originalOrientation;
@property(nonatomic) _Bool isImageZoomed; // @synthesize isImageZoomed=_isImageZoomed;
@property(nonatomic) struct CGRect feedbackImageFrame; // @synthesize feedbackImageFrame=_feedbackImageFrame;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)canRecord;
- (float)statusBarHeight;
- (id)getBoundary;
- (id)getParamEncodingWithName:(id)arg1 Value:(id)arg2;
- (void)sendFeedbackError;
- (void)removeSubViews:(id)arg1;
- (void)cleanView;
- (void)sendfeedbackSuccess;
- (void)showAlertViewWithMessage:(id)arg1;
- (void)setInputView;
- (void)inputButtonClicked:(id)arg1;
- (void)changeColorButtonClicked:(id)arg1;
- (id)compressForUpload:(id)arg1 scale:(double)arg2;
- (void)sendButtonClicked:(id)arg1;
- (_Bool)validEmail:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)addImage:(id)arg1 toImage:(id)arg2;
- (void)cancelFeedbackView;
- (void)cancelButtonClicked:(id)arg1;
- (void)drawViewDidEndDrawingInView:(id)arg1;
- (void)drawViewDidStartDrawingInView:(id)arg1;
- (void)removeDrawView;
- (void)endEditAreaTaped:(id)arg1;
- (void)playUserVoice;
- (void)recordFinished;
- (void)audioPlayerEndInterruption:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)recordeUserVoice;
- (void)detectionVoice;
- (void)checkTime;
- (void)recordButtonClicked;
- (void)deleteButtonClicked;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithThemeColor:(id)arg1 WithScreenshot:(id)arg2;
- (id)mainView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
