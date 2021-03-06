//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SFToCBaseVC, SFToCBidModel, SFToCMarketBidDetailVM;

@interface SFToCMarketBidManager : NSObject
{
    SFToCBaseVC *_baseVC;
    SFToCBidModel *_model;
    NSString *_pushSource;
    SFToCMarketBidDetailVM *_bidDetailVM;
    NSString *_vehicleCode;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *vehicleCode; // @synthesize vehicleCode=_vehicleCode;
@property(retain, nonatomic) SFToCMarketBidDetailVM *bidDetailVM; // @synthesize bidDetailVM=_bidDetailVM;
@property(retain, nonatomic) NSString *pushSource; // @synthesize pushSource=_pushSource;
@property(retain, nonatomic) SFToCBidModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SFToCBaseVC *baseVC; // @synthesize baseVC=_baseVC;
- (void).cxx_destruct;
- (void)thinkPriceActionWithController:(id)arg1 model:(id)arg2 pushSource:(id)arg3;
- (void)showPermitAlertViewMessage:(id)arg1;
- (void)protocalAction;
- (void)trackEventWithEventID:(id)arg1 isSuccess:(_Bool)arg2;
- (void)bidReq;
- (void)showBidConfirmAlert;
- (void)bid;
- (void)directGrabActionWithController:(id)arg1 model:(id)arg2 pushSource:(id)arg3;

@end

