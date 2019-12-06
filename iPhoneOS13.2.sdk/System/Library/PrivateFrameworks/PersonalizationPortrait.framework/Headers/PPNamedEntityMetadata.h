//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveSupport/_PASZonedObject.h>


@interface PPNamedEntityMetadata : _PASZonedObject <NSCopying, NSSecureCoding>
{
    unsigned short _impressionCount;
    unsigned short _occurrencesInSource;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned short occurrencesInSource; // @synthesize occurrencesInSource=_occurrencesInSource;
@property(readonly, nonatomic) unsigned short impressionCount; // @synthesize impressionCount=_impressionCount;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNamedEntityMetadata:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImpressionCount:(unsigned short)arg1 occurrencesInSource:(unsigned short)arg2;
- (id)init;

@end

