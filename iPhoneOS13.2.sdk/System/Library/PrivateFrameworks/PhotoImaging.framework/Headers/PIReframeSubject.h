//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PIReframeSubject : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;
    long long _identifier;
    double _confidence;
    long long _source;
    long long _edgeBleed;
    CGRect _bounds;
    CGRect _expandedBounds;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long edgeBleed; // @synthesize edgeBleed=_edgeBleed;
@property(nonatomic) CGRect expandedBounds; // @synthesize expandedBounds=_expandedBounds;
@property(nonatomic) CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) BOOL isAnimal;
@property(readonly, nonatomic) BOOL isHuman;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (id)initWithType:(long long)arg1 source:(long long)arg2 identifier:(long long)arg3 confidence:(double)arg4;

@end

