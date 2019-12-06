//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface NTKExplorerDotLayoutConstraints : NSObject <NSCopying, NSSecureCoding>
{
    double _dotDiameter;
    double _dotBorderWidth;
    double _dotSpacing;
    double _noServiceDotHeight;
}

+ (BOOL)supportsSecureCoding;
@property double noServiceDotHeight; // @synthesize noServiceDotHeight=_noServiceDotHeight;
@property double dotSpacing; // @synthesize dotSpacing=_dotSpacing;
@property double dotBorderWidth; // @synthesize dotBorderWidth=_dotBorderWidth;
@property double dotDiameter; // @synthesize dotDiameter=_dotDiameter;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLayoutConstraints:(id)arg1;

@end

