//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSWPTextWrap-Protocol.h>

@interface TSWPInteriorTextWrapController : NSObject <TSWPTextWrap>
{
}

+ (id)sharedInteriorTextWrapController;
- (double)nextUnobstructedSpanStartingAt:(CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3;
- (unsigned int)splitLine:(CGRect)arg1 lineSegmentRects:(CGRect [128])arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(BOOL)arg4 floatingCausedWrap:(BOOL )arg5 skipHint:(double )arg6 userInfo:(id)arg7;
- (id)beginWrappingToColumn:(id)arg1 target:(id)arg2 hasWrapables:(BOOL )arg3;

@end

