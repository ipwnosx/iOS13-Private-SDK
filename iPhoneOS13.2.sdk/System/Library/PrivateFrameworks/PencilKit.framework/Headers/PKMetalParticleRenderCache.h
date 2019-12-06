//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKStrokeRenderCache-Protocol.h>

@class NSArray, NSMutableArray;

@interface PKMetalParticleRenderCache : NSObject <PKStrokeRenderCache>
{
    NSMutableArray *_buffers;
    NSUInteger _totalCost;
    NSUInteger _inkVersion;
}

@property(readonly, nonatomic) NSUInteger inkVersion; // @synthesize inkVersion=_inkVersion;
// - (void).cxx_destruct;
- (BOOL)lockPurgeableResourcesAddToSet:(id)arg1;
- (BOOL)needsCompute;
- (NSUInteger)cacheCost;
@property(readonly, nonatomic) NSArray *buffers; // @dynamic buffers;
- (void)addBuffer:(id)arg1;
- (id)initWithDevice:(id)arg1 inkVersion:(NSUInteger)arg2;

@end

