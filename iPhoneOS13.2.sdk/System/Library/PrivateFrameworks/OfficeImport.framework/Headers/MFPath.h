//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface MFPath : NSObject <NSCopying>
{
}

- (int)fill:(id)arg1;
- (int)stroke:(id)arg1;
- (int)widen:(id)arg1;
- (int)flatten;
- (int)closeFigure;
- (CGPoint)currentPoint;
- (int)abort;
- (int)end;
- (int)begin;
- (BOOL)isOpen;
- (int)state;
// - (id)copyWithZone:(_NSZone )arg1;

@end

