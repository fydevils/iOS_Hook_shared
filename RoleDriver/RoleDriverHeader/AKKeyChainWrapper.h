//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKKeyChainWrapper : NSObject
{
}

+ (void)deleteKeychainByServiceID:(id)arg1;
+ (id)loadKeyChainWithServiceID:(id)arg1;
+ (void)saveObject:(id)arg1 toService:(id)arg2;
+ (id)getKeyChainQueryByServiceID:(id)arg1;

@end

