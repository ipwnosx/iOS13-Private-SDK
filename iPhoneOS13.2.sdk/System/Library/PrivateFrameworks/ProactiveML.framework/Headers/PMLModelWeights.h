//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLDictionarySerializableProtocol-Protocol.h>
#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class PMLMutableDenseVector;

@interface PMLModelWeights : NSObject <PMLDictionarySerializableProtocol, PMLPlistAndChunksSerializableProtocol>
{
    PMLMutableDenseVector *_data;
}

+ (id)weightsFromNumbers:(id)arg1;
+ (id)constWeightsOfLength:(int)arg1 value:(float)arg2;
+ (id)zeroWeightsOfLength:(int)arg1;
+ (id)modelWeightsOfLength:(int)arg1 rngSeed:(NSUInteger)arg2;
+ (id)modelWeightsOfLength:(int)arg1;
+ (id)modelWeightsOfLength:(int)arg1 rng:(id)arg2;
+ (id)modelWeightsFromFloats:(id)arg1;
// - (void).cxx_destruct;
- (id)copy;
- (id)sliceFrom:(int)arg1 to:(int)arg2;
- (id)weightsByAppendingWeights:(id)arg1;
- (void)processValuesInPlaceWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) int length;
- (id)asMutableDenseVector;
- (float )values;
- (id)initWithCount:(int)arg1;
- (id)initModelWeightsFromFloats:(id)arg1;
- (id)toDictionary;
- (id)initFromDictionary:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;

@end

