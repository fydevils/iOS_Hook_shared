//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface SFZgaCostModel : JSONModel
{
    NSString *_tradeId;
    NSString *_manageId;
    NSString *_expenseCategory;
    NSString *_expenseCategoryStr;
    NSString *_paymentCategory;
    NSString *_expenseMoney;
    NSString *_explains;
    NSString *_expenseCount;
    NSString *_createUser;
    NSString *_createTm;
    NSString *_modifyUser;
    NSString *_modifyTm;
    NSString *_attachmentName;
    NSString *_attachmentPath;
}

+ (id)keyMapper;
+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSString *attachmentPath; // @synthesize attachmentPath=_attachmentPath;
@property(retain, nonatomic) NSString *attachmentName; // @synthesize attachmentName=_attachmentName;
@property(retain, nonatomic) NSString *modifyTm; // @synthesize modifyTm=_modifyTm;
@property(retain, nonatomic) NSString *modifyUser; // @synthesize modifyUser=_modifyUser;
@property(retain, nonatomic) NSString *createTm; // @synthesize createTm=_createTm;
@property(retain, nonatomic) NSString *createUser; // @synthesize createUser=_createUser;
@property(retain, nonatomic) NSString *expenseCount; // @synthesize expenseCount=_expenseCount;
@property(retain, nonatomic) NSString *explains; // @synthesize explains=_explains;
@property(retain, nonatomic) NSString *expenseMoney; // @synthesize expenseMoney=_expenseMoney;
@property(retain, nonatomic) NSString *paymentCategory; // @synthesize paymentCategory=_paymentCategory;
@property(retain, nonatomic) NSString *expenseCategoryStr; // @synthesize expenseCategoryStr=_expenseCategoryStr;
@property(retain, nonatomic) NSString *expenseCategory; // @synthesize expenseCategory=_expenseCategory;
@property(retain, nonatomic) NSString *manageId; // @synthesize manageId=_manageId;
@property(retain, nonatomic) NSString *tradeId; // @synthesize tradeId=_tradeId;
- (void).cxx_destruct;

@end

