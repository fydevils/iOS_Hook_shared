//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFToCBaseVC.h"

@class SFToCOrderVC, SFToCTaskVC, UISegmentedControl;

@interface SFToCOrderSegmentVC : SFToCBaseVC
{
    UISegmentedControl *_segMentCtr;
    SFToCTaskVC *_taskVC;
    SFToCOrderVC *_orderVC;
}

@property(retain, nonatomic) SFToCOrderVC *orderVC; // @synthesize orderVC=_orderVC;
@property(retain, nonatomic) SFToCTaskVC *taskVC; // @synthesize taskVC=_taskVC;
@property(retain, nonatomic) UISegmentedControl *segMentCtr; // @synthesize segMentCtr=_segMentCtr;
- (void).cxx_destruct;
- (void)historyList:(id)arg1;
- (void)segMentCtrChange:(id)arg1;
- (void)setSelectedSegmentIndex:(long long)arg1;
- (void)segChange;
- (void)viewDidLoad;

@end

