//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKVisitManager.h>

@interface NTKSimulatedVisitManager : NTKVisitManager
{
}

- (id)previousVisit;
- (id)currentVisit;
- (void)stopVisitUpdatesForToken:(NSString *)arg1;
- (NSString *)startVisitUpdatesWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;

@end

