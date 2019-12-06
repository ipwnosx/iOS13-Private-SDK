//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface GEOTileEditionUpdate : NSObject
{
    NSMutableArray *_entries;
    BOOL _flushEverything;
    BOOL _invalidateEverything;
}

@property(nonatomic) BOOL invalidateEverything; // @synthesize invalidateEverything=_invalidateEverything;
@property(nonatomic) BOOL flushEverything; // @synthesize flushEverything=_flushEverything;
// - (void).cxx_destruct;
- (void)tileset:(unsigned int )arg1 edition:(unsigned int )arg2 provider:(unsigned int )arg3 invalidateOnly:(BOOL )arg4 atIndex:(NSUInteger)arg5;
- (NSUInteger)tilesetCount;
- (void)addTileset:(unsigned int)arg1 edition:(unsigned int)arg2 provider:(unsigned int)arg3 invalidateOnly:(BOOL)arg4;
- (id)init;

@end

