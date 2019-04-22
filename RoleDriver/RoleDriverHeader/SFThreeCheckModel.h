//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSMutableArray, NSNumber, NSString;
@protocol Optional, SFThreeCheckAtomicModel><Optional;

@interface SFThreeCheckModel : JSONModel
{
    NSString<Optional> *_itemcode;
    NSString<Optional> *_itemname;
    NSArray<SFThreeCheckAtomicModel><Optional> *_items;
    NSMutableArray<Optional> *_selectItems;
    NSNumber<Optional> *_isOther;
    NSString<Optional> *_subtitle;
    NSMutableArray<Optional> *_abnormalItems;
}

@property(retain, nonatomic) NSMutableArray<Optional> *abnormalItems; // @synthesize abnormalItems=_abnormalItems;
@property(copy, nonatomic) NSString<Optional> *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSNumber<Optional> *isOther; // @synthesize isOther=_isOther;
@property(retain, nonatomic) NSMutableArray<Optional> *selectItems; // @synthesize selectItems=_selectItems;
@property(retain, nonatomic) NSArray<SFThreeCheckAtomicModel><Optional> *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString<Optional> *itemname; // @synthesize itemname=_itemname;
@property(copy, nonatomic) NSString<Optional> *itemcode; // @synthesize itemcode=_itemcode;
- (void).cxx_destruct;

@end

