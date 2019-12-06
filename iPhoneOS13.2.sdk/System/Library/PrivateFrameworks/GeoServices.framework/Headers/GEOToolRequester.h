//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOToolProxy-Protocol.h>

@interface GEOToolRequester : NSObject <GEOToolProxy>
{
}

+ (id)sharedRequester;
- (BOOL)notifyNetworkDefaultsChanged;
- (void)invalidateTileCache;
- (NSUInteger)freePurgableSpace:(NSUInteger)arg1 forUrgency:(int)arg2;
- (NSUInteger)calculatePurgableSpaceForUrgency:(int)arg1;
- (id)getDefault:(id)arg1 source:(long long )arg2;
- (void)lockDBs;
- (void)unlockDBs;
- (id)ping;

@end

