//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class EMObjectID, NSSet;

@protocol EMVIPManagerObserver <NSObject>
- (void)observer:(EMObjectID *)arg1 updatedVIPs:(NSSet *)arg2 removedVIPs:(NSSet *)arg3;
- (void)observer:(EMObjectID *)arg1 gotVIPs:(NSSet *)arg2;
@end

