//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLMultiLabelClassifierModelProtocol-Protocol.h>
#import <ProactiveML/PMLMultiLabelRegressionModelProtocol-Protocol.h>
#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSArray, PMLModelFullyConnectedLayer;

@interface PMLMultiLabelLogisticRegressionModel : NSObject <PMLMultiLabelRegressionModelProtocol, PMLMultiLabelClassifierModelProtocol, PMLPlistAndChunksSerializableProtocol>
{
    NSArray *_models;
    PMLModelFullyConnectedLayer *_layer;
}

+ (Class)pyClass;
// - (void).cxx_destruct;
- (id)serialize;
- (void)convertToLayerWithDataType:(int)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)classify:(id)arg1;
- (id)predict:(id)arg1;
- (NSUInteger)count;
- (id)initWithLayer:(id)arg1;
- (id)initWithModels:(id)arg1;
- (id)initWithWeightsArray:(id)arg1 andIntercept:(BOOL)arg2;

@end

