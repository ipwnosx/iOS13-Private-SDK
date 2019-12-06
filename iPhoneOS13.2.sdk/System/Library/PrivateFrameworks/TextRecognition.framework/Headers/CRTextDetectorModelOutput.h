//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextRecognition/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface CRTextDetectorModelOutput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_f_score_act_sigmoid_output;
    MLMultiArray *_geometry_output;
}

@property(retain, nonatomic) MLMultiArray *geometry_output; // @synthesize geometry_output=_geometry_output;
@property(retain, nonatomic) MLMultiArray *f_score_act_sigmoid_output; // @synthesize f_score_act_sigmoid_output=_f_score_act_sigmoid_output;
// - (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithF_score_act_sigmoid_output:(id)arg1 geometry_output:(id)arg2;

@end

