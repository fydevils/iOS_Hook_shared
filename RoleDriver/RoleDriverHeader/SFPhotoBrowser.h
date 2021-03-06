//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet, NSString, UILabel, UIPanGestureRecognizer, UIScrollView, UIView;
@protocol SFPhotoBrowserDelegate, SFWebImageProtocol;

@interface SFPhotoBrowser : UIViewController <UIScrollViewDelegate>
{
    UILabel *_countLabel;
    struct CGPoint _startLocation;
    _Bool _isStatusBarShowing;
    _Bool _isFullScreenDisabled;
    _Bool _isSingleTapDisabled;
    _Bool _isStatusBarShow;
    _Bool _isHideSourceView;
    _Bool _isResumePhotoZoom;
    _Bool _isShow;
    _Bool _isRotation;
    UIView *_contentView;
    NSArray *_photos;
    long long _currentIndex;
    unsigned long long _showStyle;
    unsigned long long _hideStyle;
    id <SFPhotoBrowserDelegate> _delegate;
    UIScrollView *_photoScrollView;
    NSMutableArray *_visiblePhotoViews;
    NSMutableSet *_reusablePhotoViews;
    UIViewController *_fromVC;
    NSArray *_coverViews;
    CDUnknownBlockType _layoutBlock;
    long long _originalOrientation;
    UIPanGestureRecognizer *_panGesture;
    id <SFWebImageProtocol> _imageProtocol;
}

+ (void)setImageManagerClass:(Class)arg1;
+ (id)photoBrowserWithPhotos:(id)arg1 currentIndex:(long long)arg2;
@property(retain, nonatomic) id <SFWebImageProtocol> imageProtocol; // @synthesize imageProtocol=_imageProtocol;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) _Bool isRotation; // @synthesize isRotation=_isRotation;
@property(nonatomic) long long originalOrientation; // @synthesize originalOrientation=_originalOrientation;
@property(copy, nonatomic) CDUnknownBlockType layoutBlock; // @synthesize layoutBlock=_layoutBlock;
@property(retain, nonatomic) NSArray *coverViews; // @synthesize coverViews=_coverViews;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) UIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(retain, nonatomic) NSMutableSet *reusablePhotoViews; // @synthesize reusablePhotoViews=_reusablePhotoViews;
@property(retain, nonatomic) NSMutableArray *visiblePhotoViews; // @synthesize visiblePhotoViews=_visiblePhotoViews;
@property(retain, nonatomic) UIScrollView *photoScrollView; // @synthesize photoScrollView=_photoScrollView;
@property(nonatomic) _Bool isResumePhotoZoom; // @synthesize isResumePhotoZoom=_isResumePhotoZoom;
@property(nonatomic) _Bool isHideSourceView; // @synthesize isHideSourceView=_isHideSourceView;
@property(nonatomic) _Bool isStatusBarShow; // @synthesize isStatusBarShow=_isStatusBarShow;
@property(nonatomic) _Bool isSingleTapDisabled; // @synthesize isSingleTapDisabled=_isSingleTapDisabled;
@property(nonatomic) _Bool isFullScreenDisabled; // @synthesize isFullScreenDisabled=_isFullScreenDisabled;
@property(nonatomic) __weak id <SFPhotoBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long hideStyle; // @synthesize hideStyle=_hideStyle;
@property(nonatomic) unsigned long long showStyle; // @synthesize showStyle=_showStyle;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)photoViewForIndex:(long long)arg1;
- (void)setupPhotoViews;
- (void)updateReusableViews;
- (void)deviceOrientationDidChange;
- (void)delDeviceOrientationObserver;
- (void)addDeviceOrientationObserver;
- (id)dequeueReusablePhotoView;
- (void)panEndedWillDisappear:(_Bool)arg1;
- (void)showCancelAnimation;
- (void)showSlideDismissAnimationWithPoint:(struct CGPoint)arg1;
- (void)showDismissAnimation;
- (void)recoverAnimation;
- (void)handlePanBegin;
- (void)handlePanZoomSlide:(id)arg1;
- (void)handlePanZoomScale:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (struct CGRect)frameWithWidth:(double)arg1 height:(double)arg2 center:(struct CGPoint)arg3;
- (void)handleDoubleTap:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)removePanGesture;
- (void)addPanGesture:(_Bool)arg1;
- (void)addGestureRecognizer;
- (void)dismissAnimated:(_Bool)arg1;
- (void)showFromVC:(id)arg1;
- (void)setupCoverViews:(id)arg1 layoutBlock:(CDUnknownBlockType)arg2;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateLabel;
- (void)browserZoomShow;
- (void)browserPushShow;
- (void)browserNoneShow;
- (void)addGestureAndObserver;
- (void)setupUI;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithPhotos:(id)arg1 currentIndex:(long long)arg2;
- (id)currentPhotoView;
- (id)currentPhoto;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

