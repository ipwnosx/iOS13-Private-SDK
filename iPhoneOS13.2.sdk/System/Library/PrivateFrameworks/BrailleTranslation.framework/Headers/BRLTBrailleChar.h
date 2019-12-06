//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface BRLTBrailleChar : NSObject <NSCopying>
{
    unsigned char _bits;
}

+ (id)charWithBrf:(id)arg1;
+ (id)charWithUnichar:(unsigned short)arg1;
+ (id)charWithUnicode:(id)arg1;
+ (id)charWithBits:(unsigned char)arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToBrailleChar:(id)arg1;
- (BOOL)_dotUp:(int)arg1;
- (void)_setDot:(int)arg1 up:(BOOL)arg2;
@property BOOL dot8;
@property BOOL dot7;
@property BOOL dot6;
@property BOOL dot5;
@property BOOL dot4;
@property BOOL dot3;
@property BOOL dot2;
@property BOOL dot1;
@property(readonly) unsigned char bits;
@property(readonly) NSString *unicode;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithBrf:(id)arg1;
- (id)initWithUnichar:(unsigned short)arg1;
- (id)initWithUnicode:(id)arg1;
- (id)initWithBits:(unsigned char)arg1;

@end

