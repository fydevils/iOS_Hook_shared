//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SFItem : NSObject
{
    long long _type;
    CDUnknownBlockType _block;
    CDUnknownBlockType _updateBlock;
    struct UIEdgeInsets _insets;
}

@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)update;

@end

