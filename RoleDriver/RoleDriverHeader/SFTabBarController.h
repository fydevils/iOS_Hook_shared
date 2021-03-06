//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFTrackTabBarVC.h"

#import "MyTabBarDelegate-Protocol.h"
#import "SFAbnormalHandelVCDelegate-Protocol.h"
#import "SFTempDriverEnterInfoViewControllerDelegate-Protocol.h"

@class NSString, SFDriverMineViewController, SFDriverTaskViewController, SFHistoryTaskViewController, SFInforModel, SFInformationViewController, SFScreenShotManager;

@interface SFTabBarController : SFTrackTabBarVC <MyTabBarDelegate, SFTempDriverEnterInfoViewControllerDelegate, SFAbnormalHandelVCDelegate>
{
    SFDriverTaskViewController *_driverTaskVC;
    SFHistoryTaskViewController *_historyTaskVC;
    SFInformationViewController *_infomationVC;
    SFDriverMineViewController *_driverMineVC;
    SFScreenShotManager *_screenShotManager;
    SFInforModel *_oldModel;
}

@property(retain, nonatomic) SFInforModel *oldModel; // @synthesize oldModel=_oldModel;
@property(retain, nonatomic) SFScreenShotManager *screenShotManager; // @synthesize screenShotManager=_screenShotManager;
@property(retain, nonatomic) SFDriverMineViewController *driverMineVC; // @synthesize driverMineVC=_driverMineVC;
@property(retain, nonatomic) SFInformationViewController *infomationVC; // @synthesize infomationVC=_infomationVC;
@property(retain, nonatomic) SFHistoryTaskViewController *historyTaskVC; // @synthesize historyTaskVC=_historyTaskVC;
@property(retain, nonatomic) SFDriverTaskViewController *driverTaskVC; // @synthesize driverTaskVC=_driverTaskVC;
- (void).cxx_destruct;
- (void)pushTaskDetailDict:(id)arg1;
- (void)refreshMessage:(id)arg1;
- (void)clean;
- (void)addButtonClick:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)addScreenShotShare;
- (void)removeFloatingSubView;
- (void)tempDriverEnterInfoBack;
- (void)tempDriverIsNeedToCompleteInformation;
- (void)unFinisDetailReload;
- (void)showNotificationInfo:(id)arg1;
- (void)clickMessage:(id)arg1;
- (void)addchildWithChildViewController:(id)arg1 title:(id)arg2 image:(id)arg3 selectedImage:(id)arg4;
- (void)addChildViewControllerFromMainController;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

