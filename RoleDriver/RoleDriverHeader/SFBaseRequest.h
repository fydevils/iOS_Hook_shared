//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SGSHTTP/SGSHttpRequest.h>

@class NSDictionary, NSString;

@interface SFBaseRequest : SGSHttpRequest
{
    NSString *_url;
    NSString *_base_url;
    NSDictionary *_params;
}

@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *base_url; // @synthesize base_url=_base_url;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)statusCodeValidator;
- (id)requestArgument;
- (id)createHeadField;
- (long long)requestMethod;
- (id)requestPath;
- (id)baseUrl;

@end

