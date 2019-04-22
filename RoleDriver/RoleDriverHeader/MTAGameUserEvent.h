//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTAEvent.h"

#import "MTAEventProtocol-Protocol.h"

@class NSString;

@interface MTAGameUserEvent : MTAEvent <MTAEventProtocol>
{
    NSString *_uid;
    NSString *_world;
    NSString *_level;
}

@property(copy, nonatomic) NSString *level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *world; // @synthesize world=_world;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)init;
- (void)encode:(id)arg1;
- (int)getType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

