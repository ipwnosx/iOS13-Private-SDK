//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UISEGestureFeature.h>

#import <UIKitCore/_UISEGestureFeatureDelegate-Protocol.h>

@class NSArray, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _UISEAllGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate>
{
    NSMutableIndexSet *_unrecognizedIndexes;
    NSArray *_subfeatures;
}

@property(readonly, nonatomic) NSArray *subfeatures; // @synthesize subfeatures=_subfeatures;
// - (void).cxx_destruct;
// - (void)_incorporateSample:(const struct _UISEGestureFeatureSample )arg1;
- (id)debugDictionary;
- (void)featureDidChangeState:(id)arg1;
- (id)initWithSubfeatures:(id)arg1;

@end

