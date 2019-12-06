//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSError;

@interface AFSiriActivationResult : NSObject <NSCopying, NSSecureCoding>
{
    long long _actionType;
    NSError *_error;
}

+ (BOOL)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long actionType; // @synthesize actionType=_actionType;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)_descriptionWithIndent:(NSUInteger)arg1;
- (id)description;
- (id)initWithActionType:(long long)arg1 error:(id)arg2;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

