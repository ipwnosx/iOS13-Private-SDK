//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PMLSparseVector, SGModelSource;

@interface SGModelFeatures : NSObject
{
    SGModelSource *_source;
    PMLSparseVector *_vector;
}

// - (void).cxx_destruct;
- (id)sessionDescriptor;
- (id)source;
- (id)vector;
- (id)initWithSource:(id)arg1 vector:(id)arg2;

@end

