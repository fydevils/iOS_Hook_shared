//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SF_JSONKeyMapper : NSObject
{
    CDUnknownBlockType _SF_JSONToModelKeyBlock;
    CDUnknownBlockType _SF_modelToJSONKeyBlock;
    NSMutableDictionary *_toModelMap;
    NSMutableDictionary *_toJSONMap;
}

+ (id)mapperFromUpperCaseToLowerCase;
+ (id)mapperFromUnderscoreCaseToCamelCase;
@property(retain, nonatomic) NSMutableDictionary *toJSONMap; // @synthesize toJSONMap=_toJSONMap;
@property(retain, nonatomic) NSMutableDictionary *toModelMap; // @synthesize toModelMap=_toModelMap;
@property(readonly, nonatomic) CDUnknownBlockType SF_modelToJSONKeyBlock; // @synthesize SF_modelToJSONKeyBlock=_SF_modelToJSONKeyBlock;
@property(readonly, nonatomic) CDUnknownBlockType SF_JSONToModelKeyBlock; // @synthesize SF_JSONToModelKeyBlock=_SF_JSONToModelKeyBlock;
- (void).cxx_destruct;
- (id)convertValue:(id)arg1 isImportingToModel:(_Bool)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSONToModelBlock:(CDUnknownBlockType)arg1 modelToJSONBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

