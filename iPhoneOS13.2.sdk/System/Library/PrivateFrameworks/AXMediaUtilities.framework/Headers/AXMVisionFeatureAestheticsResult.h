//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface AXMVisionFeatureAestheticsResult : NSObject <NSSecureCoding>
{
    float _aestheticScore;
    float _wellFramedSubjectScore;
    float _pleasantCompositionScore;
    float _wellChosenBackgroundScore;
    float _noiseScore;
    float _failureScore;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) float failureScore; // @synthesize failureScore=_failureScore;
@property(readonly, nonatomic) float noiseScore; // @synthesize noiseScore=_noiseScore;
@property(readonly, nonatomic) float wellChosenBackgroundScore; // @synthesize wellChosenBackgroundScore=_wellChosenBackgroundScore;
@property(readonly, nonatomic) float pleasantCompositionScore; // @synthesize pleasantCompositionScore=_pleasantCompositionScore;
@property(readonly, nonatomic) float wellFramedSubjectScore; // @synthesize wellFramedSubjectScore=_wellFramedSubjectScore;
@property(readonly, nonatomic) float aestheticScore; // @synthesize aestheticScore=_aestheticScore;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVisionAestheticsObservation:(id)arg1;

@end

