//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSMutableArray, NSString;

@interface SFProviesModel : JSONModel
{
    NSString *_proviceName;
    NSMutableArray *_cities;
}

@property(retain, nonatomic) NSMutableArray *cities; // @synthesize cities=_cities;
@property(retain, nonatomic) NSString *proviceName; // @synthesize proviceName=_proviceName;
- (void).cxx_destruct;

@end

