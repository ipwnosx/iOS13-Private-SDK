//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface HFWallpaperHomeKitObjectKey : NSObject
{
    NSUInteger _type;
    NSUUID *_uniqueIdentifier;
}

+ (id)stringFromHomeKitObjectType:(NSUInteger)arg1;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithType:(NSUInteger)arg1 uniqueIdentifier:(id)arg2;
- (id)initWithHomeKitObject:(id)arg1;
- (id)init;

@end

