//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentLayoutAttributeDescriptor.h>

@class STTextExclusionPath;

@interface SXTextComponentLayoutAttributeDescriptor : SXComponentLayoutAttributeDescriptor
{
    STTextExclusionPath *_resultingExclusionPath;
    NSRange * _range;
}

+ (id)descriptorWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(BOOL)arg3 withRange:(NSRange *)arg4;
@property(retain, nonatomic) STTextExclusionPath *resultingExclusionPath; // @synthesize resultingExclusionPath=_resultingExclusionPath;
@property(nonatomic) NSRange * range; // @synthesize range=_range;
// - (void).cxx_destruct;

@end

