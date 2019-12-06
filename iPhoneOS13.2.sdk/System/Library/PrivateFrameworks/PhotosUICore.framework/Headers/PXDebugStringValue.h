//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXDebugValue.h>

@class NSString;

@interface PXDebugStringValue : PXDebugValue
{
    NSUInteger _highlightStyle;
    NSString *_string;
}

@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (NSUInteger)highlightStyle;
// - (void).cxx_destruct;
- (id)initWithLabel:(id)arg1 highlightedScore:(double)arg2;
- (id)initWithLabel:(id)arg1 doubleValue:(double)arg2;
- (id)initWithLabel:(id)arg1 integerValue:(long long)arg2;
- (id)initWithLabel:(id)arg1 boolValue:(BOOL)arg2 positiveValue:(BOOL)arg3 positiveHighlighted:(BOOL)arg4 negativeHighlighted:(BOOL)arg5;
- (id)initWithLabel:(id)arg1 string:(id)arg2 highlightStyle:(NSUInteger)arg3;

@end

