//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <iWorkImport/TSSPropertyValueArchiving-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSCH3DLightingPackage : NSObject <TSSPropertyValueArchiving, NSCopying>
{
    NSString *_name;
    NSArray *_lights;
}

+ (id)package;
+ (id)packageFromName:(id)arg1;
+ (id)allNamedPackages;
+ (id)localizedNameForName:(id)arg1;
+     // Error parsing type: @32@0:8r^{Chart3DLightingPackageArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSCH::Chart3DLightArchive>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}}16@24, name: instanceWithArchive:unarchiver:
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)didInitFromSOS;
@property(readonly, copy, nonatomic) NSString *localizedName;
- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4;
- (void)addLight:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
-     // Error parsing type: v32@0:8^{Chart3DLightingPackageArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSCH::Chart3DLightArchive>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}}16@24, name: saveToArchive:archiver:
-     // Error parsing type: @32@0:8r^{Chart3DLightingPackageArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSCH::Chart3DLightArchive>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}}16@24, name: initWithArchive:unarchiver:

@end
