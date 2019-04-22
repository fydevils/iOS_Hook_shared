//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SFItem, UIView;

@interface SFCustomView : NSObject
{
    _Bool _isAutoWidth;
    UIView *_view;
    long long _positionType;
    SFItem *_item;
    CDUnknownBlockType _sizeChangedBlock;
    struct CGSize _size;
}

@property(copy, nonatomic) CDUnknownBlockType sizeChangedBlock; // @synthesize sizeChangedBlock=_sizeChangedBlock;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) SFItem *item; // @synthesize item=_item;
@property(nonatomic) _Bool isAutoWidth; // @synthesize isAutoWidth=_isAutoWidth;
@property(nonatomic) long long positionType; // @synthesize positionType=_positionType;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

@end
