//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKThoughtBubbleAnnotation.h>

@interface AKSpeechBubbleAnnotation : AKThoughtBubbleAnnotation
{
    double _pointyBitBaseWidthAngle;
}

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
@property double pointyBitBaseWidthAngle; // @synthesize pointyBitBaseWidthAngle=_pointyBitBaseWidthAngle;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)displayName;

@end

