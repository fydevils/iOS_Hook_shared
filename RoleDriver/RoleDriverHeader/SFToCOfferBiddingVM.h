//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SFToCOfferBiddingVM : NSObject
{
    NSMutableArray *_dataArray;
}

@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (id)getDataArray;
- (void)requestDateWithParam:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)init;

@end

