//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SFToCTodayNewArrivalVC;

@interface SFToCTodayNewArrivalVM : NSObject
{
    SFToCTodayNewArrivalVC *_todayNewArrivalVC;
    NSMutableArray *_dataArray;
    NSString *_source;
}

@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) SFToCTodayNewArrivalVC *todayNewArrivalVC; // @synthesize todayNewArrivalVC=_todayNewArrivalVC;
- (void).cxx_destruct;
- (id)getDataArray;
- (void)cancelRemindWithModel:(id)arg1;
- (void)remindMeWithModel:(id)arg1;
- (id)alreadyStartByArray:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (id)aboutToStartByArray:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (id)todayNewArrivalByArray:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 status:(unsigned long long)arg4 source:(id)arg5;
- (void)requestDateWithParam:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)init;

@end
