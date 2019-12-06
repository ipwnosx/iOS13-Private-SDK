//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface PLUUIDString : NSString
{
    unsigned char _uuid[16];
    char _uuidString[37];
}

+ (BOOL)parseUUIDString:(id)arg1 uuidBuffer:(char )arg2;
+ (id)UUIDString;
- (const char )UTF8String;
- (long long)compare:(id)arg1 options:(NSUInteger)arg2 range:(NSRange *)arg3 locale:(id)arg4;
- (BOOL)isEqualToString:(id)arg1;
- (void)getCharacters:(unsigned short )arg1 range:(NSRange *)arg2;
- (unsigned short)characterAtIndex:(NSUInteger)arg1;
- (NSUInteger)length;
// - (CDStruct_bd2f613f)UUIDBytes;
- (id)UUIDData;
- (id)initWithUUID:(unsigned char [16])arg1;
// - (id)initWithCFUUIDBytes:(CDStruct_bd2f613f)arg1;
// - (id)initWithCFUUID:(struct __CFUUID )arg1;
- (id)initWithUUIDData:(id)arg1;
- (id)init;

@end

