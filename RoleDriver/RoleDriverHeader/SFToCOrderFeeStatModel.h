//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface SFToCOrderFeeStatModel : JSONModel
{
    NSString *_userId;
    NSString *_priceIncomeStr;
    NSString *_pricePreEarnStr;
    NSString *_priceFuelStr;
    NSString *_priceRoadStr;
    NSString *_days;
    NSString *_priceIdleStr;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSString *priceIdleStr; // @synthesize priceIdleStr=_priceIdleStr;
@property(retain, nonatomic) NSString *days; // @synthesize days=_days;
@property(retain, nonatomic) NSString *priceRoadStr; // @synthesize priceRoadStr=_priceRoadStr;
@property(retain, nonatomic) NSString *priceFuelStr; // @synthesize priceFuelStr=_priceFuelStr;
@property(retain, nonatomic) NSString *pricePreEarnStr; // @synthesize pricePreEarnStr=_pricePreEarnStr;
@property(retain, nonatomic) NSString *priceIncomeStr; // @synthesize priceIncomeStr=_priceIncomeStr;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end
