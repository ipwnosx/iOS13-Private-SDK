//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface HMICameraVideoAnalyzerConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _transcodeFragment;
    BOOL _useScheduler;
    BOOL _inMediaAnalysis;
    NSUInteger _posterFrameGenerationInterval;
    NSUInteger _posterFrameHeight;
    double _maxFragmentAnalysisDuration;
    double _maxFragmentDuration;
    NSUInteger _serviceType;
    NSUInteger _startingMediaIntegritySequenceNumber;
}

+ (BOOL)supportsSecureCoding;
@property BOOL inMediaAnalysis; // @synthesize inMediaAnalysis=_inMediaAnalysis;
@property BOOL useScheduler; // @synthesize useScheduler=_useScheduler;
@property BOOL transcodeFragment; // @synthesize transcodeFragment=_transcodeFragment;
@property NSUInteger startingMediaIntegritySequenceNumber; // @synthesize startingMediaIntegritySequenceNumber=_startingMediaIntegritySequenceNumber;
@property NSUInteger serviceType; // @synthesize serviceType=_serviceType;
@property(readonly) double maxFragmentDuration; // @synthesize maxFragmentDuration=_maxFragmentDuration;
@property(readonly) double maxFragmentAnalysisDuration; // @synthesize maxFragmentAnalysisDuration=_maxFragmentAnalysisDuration;
@property(readonly) NSUInteger posterFrameHeight; // @synthesize posterFrameHeight=_posterFrameHeight;
@property(readonly) NSUInteger posterFrameGenerationInterval; // @synthesize posterFrameGenerationInterval=_posterFrameGenerationInterval;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)getAnalysisServiceTypePreference;
- (id)initWithPosterFrameGenerationInterval:(NSUInteger)arg1 posterFrameHeight:(NSUInteger)arg2 maxFragmentAnalysisDuration:(double)arg3 maxFragmentDuration:(double)arg4;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

