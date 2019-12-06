//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsML/PMLTransformerProtocol-Protocol.h>

@class SGStringLabelingTransformer, SGStringPreprocessingTransformer;

@interface SGTextLabelTransformer : NSObject <PMLTransformerProtocol>
{
    SGStringPreprocessingTransformer *_preprocessor;
    SGStringLabelingTransformer *_labeler;
}

+ (id)_preprocessedLabelsWithLabels:(id)arg1 andPreprocessor:(id)arg2;
+ (id)withMethods:(id)arg1 withLabelStrings:(id)arg2;
// - (void).cxx_destruct;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTextLabelTransformer:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;
- (id)initWithPreprocessor:(id)arg1 labeler:(id)arg2;
- (id)initWithMethods:(id)arg1 withLabelStrings:(id)arg2;

@end

