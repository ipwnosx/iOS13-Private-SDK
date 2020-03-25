//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUtilities/AXMutableReplayableGesture.h>

@class NSString;

@interface AXNamedReplayableGesture : AXMutableReplayableGesture
{
    BOOL _hasLocalizableName;
    BOOL _shouldPerformAtOriginalLocation;
    NSString *_name;
}

+ (id)gestureWithPoints:(id)arg1 times:(id)arg2 forces:(id)arg3;
+ (id)gestureWithLegacyFormatDictionary:(id)arg1;
+ (id)_fingerIdentifierForFingerAtIndex:(NSUInteger)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL shouldPerformAtOriginalLocation; // @synthesize shouldPerformAtOriginalLocation=_shouldPerformAtOriginalLocation;
@property(nonatomic) BOOL hasLocalizableName; // @synthesize hasLocalizableName=_hasLocalizableName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)gestureShiftedByOffset:(CGPoint)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
