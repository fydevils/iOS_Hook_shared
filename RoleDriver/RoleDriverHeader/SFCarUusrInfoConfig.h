//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SFCarUusrInfoConfig : NSObject
{
    _Bool _driver;
    _Bool _currentDriver;
    _Bool _exitLogin;
    _Bool _isExistIdCard;
    _Bool _hasInitPwd;
    _Bool _hasPlusPrivilege;
    _Bool _isAuthUser;
    _Bool _isComplete;
    NSString *_creator;
    NSString *_ID;
    NSString *_userId;
    NSString *_usersId;
    NSString *_userName;
    NSString *_passWord;
    NSString *_token;
    NSString *_deviceId;
    NSString *_serial;
    long long _typeCode;
    NSString *_mobilePhone;
    long long _driverRole;
    NSString *_idCardNum;
    NSString *_serverTime;
    long long _district;
}

+ (id)sharedInstance;
@property(nonatomic) long long district; // @synthesize district=_district;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(nonatomic) _Bool isAuthUser; // @synthesize isAuthUser=_isAuthUser;
@property(nonatomic) _Bool hasPlusPrivilege; // @synthesize hasPlusPrivilege=_hasPlusPrivilege;
@property(nonatomic) _Bool hasInitPwd; // @synthesize hasInitPwd=_hasInitPwd;
@property(retain, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
@property(retain, nonatomic) NSString *idCardNum; // @synthesize idCardNum=_idCardNum;
@property(nonatomic) _Bool isExistIdCard; // @synthesize isExistIdCard=_isExistIdCard;
@property(nonatomic) long long driverRole; // @synthesize driverRole=_driverRole;
@property(nonatomic) _Bool exitLogin; // @synthesize exitLogin=_exitLogin;
@property(nonatomic) _Bool currentDriver; // @synthesize currentDriver=_currentDriver;
@property(nonatomic) _Bool driver; // @synthesize driver=_driver;
@property(copy, nonatomic) NSString *mobilePhone; // @synthesize mobilePhone=_mobilePhone;
@property(nonatomic) long long typeCode; // @synthesize typeCode=_typeCode;
@property(retain, nonatomic) NSString *serial; // @synthesize serial=_serial;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *passWord; // @synthesize passWord=_passWord;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *usersId; // @synthesize usersId=_usersId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(retain, nonatomic) NSString *creator; // @synthesize creator=_creator;
- (void).cxx_destruct;
- (void)saveContext;
- (void)loadData;
- (id)init;

@end
