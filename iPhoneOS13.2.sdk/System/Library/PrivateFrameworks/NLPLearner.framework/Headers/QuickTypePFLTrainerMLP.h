//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface QuickTypePFLTrainerMLP : NSObject
{
    NSURL *_seedModelPath;
//     struct CFScopedPtr<void *> _model;
    NSNumber *_initialLoss;
    NSNumber *_trainingLoss;
    NSUInteger _batchSize;
    NSNumber *_learningRate;
    NSNumber *_gradientClipMin;
    NSNumber *_gradientClipMax;
    NSNumber *_clippingNorm;
    NSUInteger _normBinCount;
    NSString *_privacyIdentifier;
}

+ (id)reportingStringForModelUpdates:(float )arg1 count:(NSUInteger)arg2;
// + (struct __CFData )copyToFlatBuffer:(void )arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSString *privacyIdentifier; // @synthesize privacyIdentifier=_privacyIdentifier;
@property(readonly, nonatomic) NSNumber *trainingLoss; // @synthesize trainingLoss=_trainingLoss;
@property(readonly, nonatomic) NSNumber *initialLoss; // @synthesize initialLoss=_initialLoss;
@property(nonatomic) NSUInteger normBinCount; // @synthesize normBinCount=_normBinCount;
@property(retain, nonatomic) NSNumber *clippingNorm; // @synthesize clippingNorm=_clippingNorm;
@property(retain, nonatomic) NSNumber *gradientClipMax; // @synthesize gradientClipMax=_gradientClipMax;
@property(retain, nonatomic) NSNumber *gradientClipMin; // @synthesize gradientClipMin=_gradientClipMin;
@property(retain, nonatomic) NSNumber *learningRate; // @synthesize learningRate=_learningRate;
@property(nonatomic) NSUInteger batchSize; // @synthesize batchSize=_batchSize;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)writeModelToURL:(id)arg1;
- (id)getWeightUpdatesAddNoise:(BOOL)arg1 encryptionKey:(id)arg2;
- (BOOL)trainOn:(id)arg1 forNEpochs:(NSUInteger)arg2;
- (id)initWithSeedModelPath:(id)arg1 andPrivacyIdentifier:(id)arg2;

@end

