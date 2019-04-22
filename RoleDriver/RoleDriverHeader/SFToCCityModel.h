//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SFToCCityModel : NSObject <NSCopying, NSCoding>
{
    NSString *_cityName;
    NSString *_cityCode;
    NSString *_locationCityName;
    NSString *_latitude;
    NSString *_longitude;
}

@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *locationCityName; // @synthesize locationCityName=_locationCityName;
@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
- (void).cxx_destruct;
- (void)requestCityCode:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

