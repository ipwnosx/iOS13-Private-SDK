//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, NSURL;

@protocol VCShortcutSyncService <NSObject>
@property(readonly, copy, nonatomic) NSURL *directoryURL;
@property(readonly, copy, nonatomic) NSString *syncServiceIdentifier;
- (void)requestFullResync;
- (void)requestSync;
@end

