//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SFToCBidModel;

@interface SFToCMarketGroupDetailVM : NSObject
{
    NSMutableArray *_carriageArray;
    NSMutableArray *_serviceArray;
    NSMutableArray *_profileArray;
    NSMutableArray *_sumArray;
    NSMutableArray *_settleArray;
    SFToCBidModel *_model;
    long long _bidDetailState;
}

@property(nonatomic) long long bidDetailState; // @synthesize bidDetailState=_bidDetailState;
@property(retain, nonatomic) SFToCBidModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSMutableArray *settleArray; // @synthesize settleArray=_settleArray;
@property(retain, nonatomic) NSMutableArray *sumArray; // @synthesize sumArray=_sumArray;
@property(retain, nonatomic) NSMutableArray *profileArray; // @synthesize profileArray=_profileArray;
@property(retain, nonatomic) NSMutableArray *serviceArray; // @synthesize serviceArray=_serviceArray;
@property(retain, nonatomic) NSMutableArray *carriageArray; // @synthesize carriageArray=_carriageArray;
- (void).cxx_destruct;
- (void)requestBidDeatilWithParam:(id)arg1 distance:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)init;

@end

