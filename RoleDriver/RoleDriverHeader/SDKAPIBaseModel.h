//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SF_JSONModel.h"

@class NSString;
@protocol Optional;

@interface SDKAPIBaseModel : SF_JSONModel
{
    NSString *_serviceName;
    NSString *_charset;
    NSString<Optional> *_sign;
}

@property(retain, nonatomic) NSString<Optional> *sign; // @synthesize sign=_sign;
@property(retain, nonatomic) NSString *charset; // @synthesize charset=_charset;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;

@end

