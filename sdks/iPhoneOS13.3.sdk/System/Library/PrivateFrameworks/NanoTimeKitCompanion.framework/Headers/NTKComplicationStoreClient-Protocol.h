//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CLKComplicationTemplate, NSDictionary, NSNumber, NSString;

@protocol NTKComplicationStoreClient <NSObject>
- (void)removeComplicationForClientIdentifier:(NSString *)arg1 seqId:(NSNumber *)arg2;
- (void)updateLocalizableSampleTemplate:(CLKComplicationTemplate *)arg1 forClientIdentifier:(NSString *)arg2 family:(long long)arg3 seqId:(NSNumber *)arg4;
- (void)loadFullCollectionWithLocalizableSampleTemplates:(NSDictionary *)arg1 seqId:(NSNumber *)arg2;
@end
