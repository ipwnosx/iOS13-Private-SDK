//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PKInkParticleDescriptor;

@interface PKInkRenderingDescriptor : NSObject
{
    NSString *_identifier;
    NSUInteger _version;
    NSUInteger _type;
    NSUInteger _blendMode;
    PKInkParticleDescriptor *_particleDescriptor;
}

@property(retain, nonatomic) PKInkParticleDescriptor *particleDescriptor; // @synthesize particleDescriptor=_particleDescriptor;
@property(nonatomic) NSUInteger blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) NSUInteger type; // @synthesize type=_type;
@property(nonatomic) NSUInteger version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;

@end

