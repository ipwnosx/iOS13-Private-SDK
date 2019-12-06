//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKTextProvider.h>

@class NSMutableArray, NSString;

@interface CLKCompoundTextProvider : CLKTextProvider
{
    NSMutableArray *_textProviders;
    NSMutableArray *_segments;
    NSString *_sessionCacheKey;
}

+ (BOOL)supportsSecureCoding;
+ (id)compoundTextProviderCurrentlyFormattingOnThisThread;
+ (id)compoundProviderWithLocalizedFormat:(id)arg1 localizedTextProviders:(id)arg2;
// - (void).cxx_destruct;
// - (void)_processFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (id)_arrayOfTextProviderJSONObjectRepresentations;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (long long)_updateFrequency;
- (void)_validate;
- (void)_endSession;
- (id)_replacementForTextProvider:(id)arg1 index:(NSUInteger)arg2 withStyle:(id)arg3;
- (id)_attributedStringForSegment:(id)arg1 withStyle:(id)arg2;
- (id)_sessionAttributedTextForIndex:(NSUInteger)arg1 withStyle:(id)arg2;
- (id)_sessionCacheKey;
- (void)_startSessionWithDate:(id)arg1;
- (long long)timeTravelUpdateFrequency;
- (id)description;
- (void)addTextProvider:(id)arg1 andGetPlaceholderString:(id )arg2;
- (id)initWithSegments:(id)arg1 textProviders:(id)arg2;
// - (id)initWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;

@end

