//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AXMAudioDataSource : NSObject
{
    BOOL _circular;
    vector_3203cf93 _sampleBuffer;
    NSUInteger _length;
    NSUInteger _currentSampleIndex;
    double _level;
    NSArray *_effectsChain;
    NSString *_name;
    double _sampleRate;
}

@property(readonly, nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *effectsChain; // @synthesize effectsChain=_effectsChain;
@property(nonatomic) double level; // @synthesize level=_level;
@property(nonatomic, getter=isCircular) BOOL circular; // @synthesize circular=_circular;
@property(nonatomic) NSUInteger currentSampleIndex; // @synthesize currentSampleIndex=_currentSampleIndex;
@property(nonatomic) NSUInteger length; // @synthesize length=_length;
@property(readonly, nonatomic) vector_3203cf93 sampleBuffer; // @synthesize sampleBuffer=_sampleBuffer;
// - (void).cxx_destruct;
- (void)normalizeAudio;
- (id)description;
- (void)processEffects:(NSUInteger)arg1;
- (void)removeEffectFromChain:(id)arg1;
- (void)addEffectToChain:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 sampleRate:(double)arg2 circular:(BOOL)arg3;
- (id)init;

@end
