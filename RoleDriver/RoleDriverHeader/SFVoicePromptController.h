//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSMutableArray, UIView;

@interface SFVoicePromptController : UIViewController
{
    UIView *_bgView;
    NSMutableArray *_dataArr;
}

@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)gatherGPSVoicePlay:(_Bool)arg1;
- (void)switchAction:(id)arg1;
- (void)viewDidLoad;

@end
