//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
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
//  (id)instanceWithArchive:(const struct Chart3DLightingPackageArchive )arg1 unarchiver:(id)arg2;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)didInitFromSOS;
@property(readonly, copy, nonatomic) NSString *localizedName;
- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4;
- (void)addLight:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;
//  (void)saveToArchive:(struct Chart3DLightingPackageArchive )arg1 archiver:(id)arg2;
//  (id)initWithArchive:(const struct Chart3DLightingPackageArchive )arg1 unarchiver:(id)arg2;

@end

