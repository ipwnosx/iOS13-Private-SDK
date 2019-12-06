//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSProtobufSerializable-Protocol.h>

@class NSString;

@interface BKSHIDEventDisplay : NSObject <NSSecureCoding, BSProtobufSerializable, NSCopying>
{
    BOOL _builtin;
    NSString *_hardwareIdentifier;
}

+ (id)protobufSchema;
+ (BOOL)supportsSecureCoding;
+ (id)displayWithHardwareIdentifier:(id)arg1;
+ (id)builtinDisplay;
+ (id)nullDisplay;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_hardwareIdentifier;
- (BOOL)_isBuiltinDisplay;
- (BOOL)_isNullDisplay;
- (id)_initWithHardwareIdentifier:(id)arg1;
- (id)init;

@end

