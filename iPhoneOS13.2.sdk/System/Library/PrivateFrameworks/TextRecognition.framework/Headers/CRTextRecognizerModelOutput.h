//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextRecognition/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface CRTextRecognizerModelOutput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_output_label_prob_map;
}

@property(retain, nonatomic) MLMultiArray *output_label_prob_map; // @synthesize output_label_prob_map=_output_label_prob_map;
// - (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithOutput_label_prob_map:(id)arg1;

@end

