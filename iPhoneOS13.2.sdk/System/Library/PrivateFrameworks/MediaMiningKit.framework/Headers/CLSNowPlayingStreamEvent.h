//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSNowPlayingStreamEventMetadata, NSDate;

@interface CLSNowPlayingStreamEvent : NSObject
{
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    CLSNowPlayingStreamEventMetadata *_metadata;
}

+ (id)playbackStreamEventDateSortDescriptors;
@property(readonly, copy, nonatomic) CLSNowPlayingStreamEventMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDate *localEndDate; // @synthesize localEndDate=_localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate; // @synthesize localStartDate=_localStartDate;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithDuetKnowledgeEvent:(id)arg1;

@end

