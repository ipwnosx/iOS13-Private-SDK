//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDContactShadow.h>

#import <iWorkImport/TSDMutableShadow-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSDMutableContactShadow : TSDContactShadow <TSDMutableShadow>
{
}

// - (id)copyWithZone:(_NSZone )arg1;
@property(nonatomic) double perspective; // @dynamic perspective;
@property(nonatomic) double height; // @dynamic height;
- (void)setColor:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setOpacity:(double)arg1;
- (void)setRadius:(double)arg1;
- (void)setOffset:(double)arg1;
- (void)setAngle:(double)arg1;

@end

