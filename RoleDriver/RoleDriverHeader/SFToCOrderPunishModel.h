//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface SFToCOrderPunishModel : JSONModel
{
    NSString *_punishDesc;
    NSString *_punishType;
    NSString *_sceneCode;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSString *sceneCode; // @synthesize sceneCode=_sceneCode;
@property(retain, nonatomic) NSString *punishType; // @synthesize punishType=_punishType;
@property(retain, nonatomic) NSString *punishDesc; // @synthesize punishDesc=_punishDesc;
- (void).cxx_destruct;

@end
