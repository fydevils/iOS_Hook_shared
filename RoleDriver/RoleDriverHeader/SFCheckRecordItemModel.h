//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;
@protocol Optional;

@interface SFCheckRecordItemModel : JSONModel
{
    NSString<Optional> *_checkItemId;
    NSString<Optional> *_checkId;
    NSString<Optional> *_itemCode;
    NSString<Optional> *_remark;
    NSString<Optional> *_itemname;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString<Optional> *itemname; // @synthesize itemname=_itemname;
@property(copy, nonatomic) NSString<Optional> *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString<Optional> *itemCode; // @synthesize itemCode=_itemCode;
@property(copy, nonatomic) NSString<Optional> *checkId; // @synthesize checkId=_checkId;
@property(copy, nonatomic) NSString<Optional> *checkItemId; // @synthesize checkItemId=_checkItemId;
- (void).cxx_destruct;

@end
