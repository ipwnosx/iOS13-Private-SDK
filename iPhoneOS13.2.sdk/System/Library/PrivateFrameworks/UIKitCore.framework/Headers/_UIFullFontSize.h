//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIFullFontSize : NSObject
{
    double _value;
    BOOL _isDefault;
    BOOL _needsEvaluation;
}

+ (id)defaultValue;
+ (id)valued:(double)arg1;
- (BOOL)isEqual:(id)arg1;
- (double)valueWithEvaluationIfNeeded:(CDUnknownBlockType)arg1;
- (BOOL)setNeedsEvaluation;
- (BOOL)needsEvaluation;
- (id)overrideUnlessDefault:(double)arg1;
- (id)initWithValue:(double)arg1 isDefault:(BOOL)arg2;

@end

