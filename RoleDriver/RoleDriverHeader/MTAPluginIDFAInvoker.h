//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTAIDFAProtocol;

@interface MTAPluginIDFAInvoker : NSObject
{
    NSObject<MTAIDFAProtocol> *_idfaProvider;
}

+ (id)getInstance;
@property(nonatomic) __weak NSObject<MTAIDFAProtocol> *idfaProvider; // @synthesize idfaProvider=_idfaProvider;
- (void).cxx_destruct;
- (id)getIDFA;
- (id)init;

@end
