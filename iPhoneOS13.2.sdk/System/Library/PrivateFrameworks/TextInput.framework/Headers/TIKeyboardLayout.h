//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface TIKeyboardLayout : NSObject <NSSecureCoding>
{
    BOOL _usesTwoHands;
    NSUInteger _count;
//    struct _ShortRect _frames;
    NSUInteger _framesCapacity;
    char _strings;
    NSUInteger _stringsSize;
    NSUInteger _stringsCapacity;
    CGRect _frame;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) BOOL usesTwoHands; // @synthesize usesTwoHands=_usesTwoHands;
- (id)description;
- (long long)keyContainingPoint:(CGPoint)arg1;
- (const char )firstKeyString;
- (void)enumerateKeysUsingBlock:(CDUnknownBlockType)arg1;
- (void)addKeyWithString:(id)arg1 frame:(CGRect)arg2;
- (void)ensureStringCapacity:(NSUInteger)arg1;
- (void)ensureFrameCapacity:(NSUInteger)arg1;
- (CGRect)_decodeCGRectForKey:(id)arg1 withDecoder:(id)arg2;
- (void)_encodeCGRect:(CGRect)arg1 forKey:(id)arg2 withCoder:(id)arg3;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCapacity:(NSUInteger)arg1;
- (void)dealloc;

@end

