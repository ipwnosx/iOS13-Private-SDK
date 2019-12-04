//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDStroke.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSDSmartStroke : TSDStroke
{
    NSString *mStrokeName;
    double mDeprecatedPatternOffsetDistance;
}

+ (id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3;
+ (Class)classForName:(id)arg1;
+ (id)p_mapOfStrokeNamesToAlternatesForOldVersions;
@property(readonly, nonatomic) double deprecatedPatternOffsetDistance; // @synthesize deprecatedPatternOffsetDistance=mDeprecatedPatternOffsetDistance;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (_Bool)shouldAntialiasDefeat;
- (unsigned long long)hash;
- (_Bool)canDrawWithOtherStroke:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)canApplyDirectlyToRepRenderable;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7;
@property(readonly, copy, nonatomic) NSString *strokeName;
-     // Error parsing type: v32@0:8^{StrokeArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Color}^{StrokePatternArchive}^{SmartStrokeArchive}^{FrameArchive}^{PatternedStrokeArchive}fiif}16@24, name: saveToArchive:archiver:
-     // Error parsing type: @32@0:8r^{StrokeArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Color}^{StrokePatternArchive}^{SmartStrokeArchive}^{FrameArchive}^{PatternedStrokeArchive}fiif}16@24, name: initWithArchive:unarchiver:

@end
