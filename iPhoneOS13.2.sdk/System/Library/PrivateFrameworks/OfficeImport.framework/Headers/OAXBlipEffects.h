//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXBlipEffects : NSObject
{
}

+ (void)writeBlipEffects:(id)arg1 to:(id)arg2;
//  (void)readBlipEffectsFromBlipRef:(struct _xmlNode )arg1 toBlipRef:(id)arg2 drawingState:(id)arg3;
+ (id)duotoneTransferModeEnumMap;
+ (void)writeDuotoneEffect:(id)arg1 to:(id)arg2;
//  (id)readDuotoneEffect:(struct _xmlNode )arg1;
+ (void)writeAlphaModFixEffect:(id)arg1 to:(id)arg2;
//  (id)readAlphaModFixEffect:(struct _xmlNode )arg1;
+ (void)writeColorChangeEffect:(id)arg1 to:(id)arg2;
//  (id)readColorChangeEffect:(struct _xmlNode )arg1 drawingState:(id)arg2;
+ (void)writeBiLevelEffect:(id)arg1 to:(id)arg2;
//  (id)readBiLevelEffect:(struct _xmlNode )arg1;
+ (void)writeGrayscaleEffect:(id)arg1 to:(id)arg2;
//  (id)readGrayscaleEffect:(struct _xmlNode )arg1;
+ (void)writeLuminanceEffect:(id)arg1 to:(id)arg2;
//  (id)readLuminanceEffect:(struct _xmlNode )arg1;

@end

