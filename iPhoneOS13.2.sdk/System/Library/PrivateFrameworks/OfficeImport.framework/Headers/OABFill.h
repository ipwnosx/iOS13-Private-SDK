//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABFill : NSObject
{
}

// + (id)patternFromBlipId:(unsigned int)arg1 blipName:(id)arg2 blipDataReference:(struct EshBlip )arg3 state:(id)arg4;
+ (id)readFillFromFillPropertiesManager:(id)arg1 state:(id)arg2;
+ (void)readImageFill:(id)arg1 fromFillPropertiesManager:(id)arg2 state:(id)arg3;
+ (void)readGradientFill:(id)arg1 fromFillPropertiesManager:(id)arg2 state:(id)arg3;
// + (void)addStopsFromArray:(const struct OABGradientStop )arg1 stopCount:(int)arg2 inverted:(BOOL)arg3 startPos:(float)arg4 endPos:(float)arg5 toStopArray:(id)arg6 fillPropertiesManager:(id)arg7;

@end

