//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString;

@interface SFTrackVC : UIViewController
{
    long long _beginTime;
    NSString *_pageRef;
}

@property(copy, nonatomic) NSString *pageRef; // @synthesize pageRef=_pageRef;
@property(nonatomic) long long beginTime; // @synthesize beginTime=_beginTime;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)trackEventPageName:(id)arg1 trackType:(unsigned long long)arg2 timeDuration:(long long)arg3;
- (void)trackPageEvent:(unsigned long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

