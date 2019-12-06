//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IKAppDocument, IKAppPlayerBridge, NSArray, NSDate, NSDictionary, NSNumber, NSString;
@protocol IKAppMediaItem, IKAppPlaylist;

@protocol IKAppPlayer <NSObject>
@property(copy, nonatomic) NSDictionary *userInfo;
@property(copy, nonatomic) NSDictionary *contextMenuData;
@property(readonly, nonatomic) NSArray *currentMediaItemErrorLogs;
@property(readonly, nonatomic) NSArray *currentMediaItemAccessLogs;
@property(nonatomic) BOOL interactiveOverlayDismissable;
@property(retain, nonatomic) IKAppDocument *interactiveOverlayDocument;
@property(retain, nonatomic) IKAppDocument *overlayDocument;
@property(readonly, nonatomic) id <IKAppMediaItem> previousMediaItem;
@property(readonly, nonatomic) id <IKAppMediaItem> nextMediaItem;
@property(nonatomic) BOOL showsResumeMenu;
@property(nonatomic) BOOL muted;
@property(readonly, nonatomic) double scanRate;
@property(readonly, nonatomic) id <IKAppMediaItem> currentMediaItem;
@property(readonly, nonatomic) NSDate *currentMediaItemDate;
@property(readonly, nonatomic) NSNumber *currentMediaItemDuration;
@property(retain, nonatomic) id <IKAppPlaylist> playlist;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) IKAppPlayerBridge *bridge;
- (void)cleanup;
- (void)stopObservingEvent:(NSString *)arg1;
- (void)startObservingEvent:(NSString *)arg1 extraInfo:(NSDictionary *)arg2;
- (void)setElapsedTime:(double)arg1;
- (void)scan:(double)arg1;
- (void)changeToMediaAtIndex:(long long)arg1;
- (void)previous;
- (void)next;
- (void)stop;
- (void)pause;
- (void)play;
- (void)present;
@end

