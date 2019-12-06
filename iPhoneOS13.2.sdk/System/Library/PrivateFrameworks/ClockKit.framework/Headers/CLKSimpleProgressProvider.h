//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKProgressProvider.h>

@interface CLKSimpleProgressProvider : CLKProgressProvider
{
    double _progress;
}

+ (BOOL)supportsSecureCoding;
+ (id)simpleProgressProviderWithProgress:(double)arg1;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (id)JSONObjectRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)_validate;
- (BOOL)_needsUpdates;
- (double)_progressFractionForNow:(id)arg1;

@end

