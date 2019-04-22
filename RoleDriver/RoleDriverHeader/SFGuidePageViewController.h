//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFBaseVC.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UIScrollView;
@protocol SFGuidePageViewControllerDelegate;

@interface SFGuidePageViewController : SFBaseVC <UIScrollViewDelegate>
{
    id <SFGuidePageViewControllerDelegate> _delegate;
    UIScrollView *_bgScrollView;
    UIButton *_nextBtn;
    NSArray *_imageArr;
}

@property(retain, nonatomic) NSArray *imageArr; // @synthesize imageArr=_imageArr;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) UIScrollView *bgScrollView; // @synthesize bgScrollView=_bgScrollView;
@property(nonatomic) __weak id <SFGuidePageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)nextBtnAction;
- (void)tapAciton:(id)arg1;
- (void)initUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

