//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@interface CalDAVCalendarServerCollectionUpdatesElement : CalDAVCalendarServerResourceChangeElement
{
    int _state;
}

@property(readonly, nonatomic) int state; // @synthesize state=_state;
- (id)copyParseRules;
- (void)setUnpublish:(id)arg1;
- (void)setPublish:(id)arg1;

@end

