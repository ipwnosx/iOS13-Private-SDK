//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, PKContactlessCardIngester;

@protocol PKContactlessCardIngesterDelegate <NSObject>
- (void)contactlessCardIngester:(PKContactlessCardIngester *)arg1 didFailToIngestCardWithError:(NSError *)arg2 resetProvisioning:(BOOL)arg3 isRecoverable:(BOOL)arg4;
- (void)contactlessCardIngester:(PKContactlessCardIngester *)arg1 didUpdateCardIngestionStatus:(NSUInteger)arg2;
@end

