//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADPathElement.h>

__attribute__((visibility("hidden")))
@interface OADVectorArcPathElement : OADPathElement
{
//     struct OADAdjustCoord mLeft;
//     struct OADAdjustCoord mTop;
//     struct OADAdjustCoord mRight;
//     struct OADAdjustCoord mBottom;
//     struct OADAdjustPoint mStartVector;
//     struct OADAdjustPoint mEndVector;
    BOOL mClockwise;
    BOOL mConnectedToPrevious;
}

- (BOOL)connectedToPrevious;
- (BOOL)clockwise;
// - (struct OADAdjustPoint)endVector;
// - (struct OADAdjustPoint)startVector;
// - (struct OADAdjustCoord)bottom;
// - (struct OADAdjustCoord)right;
// - (struct OADAdjustCoord)top;
// - (struct OADAdjustCoord)left;
// - (id)initWithLeft:(struct OADAdjustCoord)arg1 top:(struct OADAdjustCoord)arg2 right:(struct OADAdjustCoord)arg3 bottom:(struct OADAdjustCoord)arg4 startVector:(struct OADAdjustPoint)arg5 endVector:(struct OADAdjustPoint)arg6 clockwise:(BOOL)arg7 connectedToPrevious:(BOOL)arg8;

@end

