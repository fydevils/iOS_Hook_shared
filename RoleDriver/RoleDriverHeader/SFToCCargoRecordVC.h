//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFToCBaseVC.h"

#import "SFToCCargoRecordHeaderViewDelegate-Protocol.h"

@class NSString, SFToCCargoFeedBackVC, SFToCCargoForecastVC, SFToCCargoRecordHeaderView;

@interface SFToCCargoRecordVC : SFToCBaseVC <SFToCCargoRecordHeaderViewDelegate>
{
    SFToCCargoRecordHeaderView *_headerView;
    SFToCCargoFeedBackVC *_feedBackVC;
    SFToCCargoForecastVC *_forecastVC;
}

@property(retain, nonatomic) SFToCCargoForecastVC *forecastVC; // @synthesize forecastVC=_forecastVC;
@property(retain, nonatomic) SFToCCargoFeedBackVC *feedBackVC; // @synthesize feedBackVC=_feedBackVC;
@property(retain, nonatomic) SFToCCargoRecordHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)changeMenuVC:(long long)arg1;
- (void)addSubVC;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

