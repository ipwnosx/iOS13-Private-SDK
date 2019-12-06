//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Montreal/MontrealNNDescription.h>

#import <Montreal/MontrealNNDescriptionProtocol-Protocol.h>

@class MontrealNNModelOptimizerParam, MontrealNNModelQuantization, NSArray, NSString;

@interface MontrealNNModelNetwork : MontrealNNDescription <MontrealNNDescriptionProtocol>
{
    NSArray *_nodes;
    NSArray *_inputs;
    NSArray *_outputs;
    MontrealNNModelQuantization *_quantization;
    NSString *_jsonDir;
    MontrealNNModelOptimizerParam *_optimizerParams;
}

@property(readonly) MontrealNNModelOptimizerParam *optimizerParams; // @synthesize optimizerParams=_optimizerParams;
@property(readonly) NSString *jsonDir; // @synthesize jsonDir=_jsonDir;
@property(readonly) MontrealNNModelQuantization *quantization; // @synthesize quantization=_quantization;
@property(retain) NSArray *outputs; // @synthesize outputs=_outputs;
@property(retain) NSArray *inputs; // @synthesize inputs=_inputs;
@property(retain) NSArray *nodes; // @synthesize nodes=_nodes;
// - (void).cxx_destruct;
- (void )generateModelContainer;
- (id)createDataContainer;
- (void)generateJSONAtPath:(id)arg1;
- (id)jsonDescription;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)removeView:(id)arg1 nodesToRemove:(id)arg2;
- (void)collapsePackUnpack:(id)arg1 nodesToRemove:(id)arg2;
- (void)validateNodeTensors;
- (void)collapseNodes;
- (void)validateNetworkTensors:(id)arg1;
- (id)initWithDictionary:(id)arg1 tensors:(id)arg2 quantization:(id)arg3 optimizerParams:(id)arg4 jsonDir:(id)arg5 optimization:(NSUInteger)arg6;
- (id)initWithModelContainer:(void )arg1 tensors:(id)arg2;
- (id)initWithJSONDir:(id)arg1;
- (id)init;
- (id)checkForValidity;

@end

