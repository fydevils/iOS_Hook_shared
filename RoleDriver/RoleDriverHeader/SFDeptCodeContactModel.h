//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface SFDeptCodeContactModel : JSONModel
{
    NSString *_deptName;
    NSString *_deptAddress;
    NSString *_telephoneOne;
    NSString *_telephoneTwo;
    double _cellHeight;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) NSString *telephoneTwo; // @synthesize telephoneTwo=_telephoneTwo;
@property(retain, nonatomic) NSString *telephoneOne; // @synthesize telephoneOne=_telephoneOne;
@property(retain, nonatomic) NSString *deptAddress; // @synthesize deptAddress=_deptAddress;
@property(retain, nonatomic) NSString *deptName; // @synthesize deptName=_deptName;
- (void).cxx_destruct;
- (double)getHeight;

@end
