//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFBaseVC.h"

#import "SFChangeNomalCarControllerDelegate-Protocol.h"

@class NSString, SFChangeAbnormalCarController, SFChangeNomalCarController, SFDriverRouteModel, UIButton, UIImageView, UIView;

@interface SFChangeCarViewController : SFBaseVC <SFChangeNomalCarControllerDelegate>
{
    SFDriverRouteModel *_taskModel;
    CDUnknownBlockType _block;
    UIView *_bgView;
    SFChangeNomalCarController *_NomalChangeCarController;
    SFChangeAbnormalCarController *_AbnormalChangeCarController;
    UIButton *_selectedBtn;
    UIImageView *_selectImage;
}

@property(retain, nonatomic) UIImageView *selectImage; // @synthesize selectImage=_selectImage;
@property(nonatomic) __weak UIButton *selectedBtn; // @synthesize selectedBtn=_selectedBtn;
@property(retain, nonatomic) SFChangeAbnormalCarController *AbnormalChangeCarController; // @synthesize AbnormalChangeCarController=_AbnormalChangeCarController;
@property(retain, nonatomic) SFChangeNomalCarController *NomalChangeCarController; // @synthesize NomalChangeCarController=_NomalChangeCarController;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) SFDriverRouteModel *taskModel; // @synthesize taskModel=_taskModel;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)btnAction:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willPopTocurrentViewController;
- (void)disMissKeyboard;
- (void)removeViewControllerTocontent:(id)arg1;
- (void)addViewControllerToContent:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

