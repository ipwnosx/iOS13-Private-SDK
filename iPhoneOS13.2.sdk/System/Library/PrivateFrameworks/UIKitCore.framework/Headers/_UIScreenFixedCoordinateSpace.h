//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIScreen;

__attribute__((visibility("hidden")))
@interface _UIScreenFixedCoordinateSpace : NSObject <UICoordinateSpace>
{
    UIScreen *_screen;
}

@property(nonatomic, setter=_setScreen:) UIScreen *_screen; // @synthesize _screen;
@property(readonly, nonatomic) CGRect bounds;
- (CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2;
- (CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2;

@end

