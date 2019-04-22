//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SFPaySDK_GTMBase64 : NSObject
{
}

+ (id)webSafeDecodeString:(id)arg1;
+ (id)stringByWebSafeEncodingBytes:(const void *)arg1 length:(unsigned long long)arg2 padded:(_Bool)arg3;
+ (id)stringByWebSafeEncodingData:(id)arg1 padded:(_Bool)arg2;
+ (id)webSafeDecodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)webSafeEncodeBytes:(const void *)arg1 length:(unsigned long long)arg2 padded:(_Bool)arg3;
+ (id)webSafeDecodeData:(id)arg1;
+ (id)webSafeEncodeData:(id)arg1 padded:(_Bool)arg2;
+ (id)stringByDecodeData:(id)arg1;
+ (id)decodeString:(id)arg1;
+ (id)stringByEncodingBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)stringByEncodingData:(id)arg1;
+ (id)decodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)decodeData:(id)arg1;
+ (id)encodeData:(id)arg1;
+ (unsigned long long)baseDecode:(const char *)arg1 srcLen:(unsigned long long)arg2 destBytes:(char *)arg3 destLen:(unsigned long long)arg4 charset:(const char *)arg5 requirePadding:(_Bool)arg6;
+ (unsigned long long)baseEncode:(const char *)arg1 srcLen:(unsigned long long)arg2 destBytes:(char *)arg3 destLen:(unsigned long long)arg4 charset:(const char *)arg5 padded:(_Bool)arg6;
+ (id)baseDecode:(const void *)arg1 length:(unsigned long long)arg2 charset:(const char *)arg3 requirePadding:(_Bool)arg4;
+ (id)baseEncode:(const void *)arg1 length:(unsigned long long)arg2 charset:(const char *)arg3 padded:(_Bool)arg4;

@end

