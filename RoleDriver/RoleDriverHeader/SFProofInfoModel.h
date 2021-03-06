//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface SFProofInfoModel : JSONModel
{
    NSString *_createTime;
    NSString *_creator;
    NSString *_currentDeptCode;
    NSString *_driverAccount;
    NSString *_fvpSealLogo;
    NSString *_gpsIsValid;
    NSString *_id;
    NSString *_modifier;
    NSString *_modifyTm;
    NSString *_ownDeptCode;
    NSString *_passType;
    NSString *_proofDeptCode;
    NSString *_proofGivenNumber;
    NSString *_proofRemark;
    NSString *_proofTime;
    NSString *_proofTm;
    NSString *_proofUser;
    NSString *_sealLogo;
    NSString *_sealLogoIsValid;
    NSString *_taskDetailId;
    NSString *_taskExceptionId;
    NSString *_taskId;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSString *taskExceptionId; // @synthesize taskExceptionId=_taskExceptionId;
@property(retain, nonatomic) NSString *taskDetailId; // @synthesize taskDetailId=_taskDetailId;
@property(retain, nonatomic) NSString *sealLogoIsValid; // @synthesize sealLogoIsValid=_sealLogoIsValid;
@property(retain, nonatomic) NSString *sealLogo; // @synthesize sealLogo=_sealLogo;
@property(retain, nonatomic) NSString *proofUser; // @synthesize proofUser=_proofUser;
@property(retain, nonatomic) NSString *proofTm; // @synthesize proofTm=_proofTm;
@property(retain, nonatomic) NSString *proofTime; // @synthesize proofTime=_proofTime;
@property(retain, nonatomic) NSString *proofRemark; // @synthesize proofRemark=_proofRemark;
@property(retain, nonatomic) NSString *proofGivenNumber; // @synthesize proofGivenNumber=_proofGivenNumber;
@property(retain, nonatomic) NSString *proofDeptCode; // @synthesize proofDeptCode=_proofDeptCode;
@property(retain, nonatomic) NSString *passType; // @synthesize passType=_passType;
@property(retain, nonatomic) NSString *ownDeptCode; // @synthesize ownDeptCode=_ownDeptCode;
@property(retain, nonatomic) NSString *modifyTm; // @synthesize modifyTm=_modifyTm;
@property(retain, nonatomic) NSString *modifier; // @synthesize modifier=_modifier;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
@property(retain, nonatomic) NSString *gpsIsValid; // @synthesize gpsIsValid=_gpsIsValid;
@property(retain, nonatomic) NSString *fvpSealLogo; // @synthesize fvpSealLogo=_fvpSealLogo;
@property(retain, nonatomic) NSString *driverAccount; // @synthesize driverAccount=_driverAccount;
@property(retain, nonatomic) NSString *currentDeptCode; // @synthesize currentDeptCode=_currentDeptCode;
@property(retain, nonatomic) NSString *creator; // @synthesize creator=_creator;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
- (void).cxx_destruct;

@end

