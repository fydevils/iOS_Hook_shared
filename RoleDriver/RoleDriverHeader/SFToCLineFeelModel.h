//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface SFToCLineFeelModel : JSONModel
{
    NSString *_feeTypCode;
    NSString *_priceStr;
    NSString *_feeTypName;
    NSString *_fillUp;
    long long _status;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *fillUp; // @synthesize fillUp=_fillUp;
@property(retain, nonatomic) NSString *feeTypName; // @synthesize feeTypName=_feeTypName;
@property(retain, nonatomic) NSString *priceStr; // @synthesize priceStr=_priceStr;
@property(retain, nonatomic) NSString *feeTypCode; // @synthesize feeTypCode=_feeTypCode;
- (void).cxx_destruct;

@end

