//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface STVersionVectorNode : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSUInteger _count;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger count; // @synthesize count=_count;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNode:(id)arg1;
- (id)debugDescription;
- (id)description;
- (long long)compare:(id)arg1;
- (void)join:(id)arg1;
- (void)increment;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
