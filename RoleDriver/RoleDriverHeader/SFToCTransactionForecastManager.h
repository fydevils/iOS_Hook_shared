//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SFToCMarketBidNoticeVM;

@interface SFToCTransactionForecastManager : NSObject
{
    SFToCMarketBidNoticeVM *_bidNoticeVM;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SFToCMarketBidNoticeVM *bidNoticeVM; // @synthesize bidNoticeVM=_bidNoticeVM;
- (void).cxx_destruct;
- (void)cancelRemindWithModel:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)remindWithModel:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end

