//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CNChangeHistoryEventVisitor-Protocol.h>

@class NSMutableArray;

@interface CalChangeHistoryCollector : NSObject <CNChangeHistoryEventVisitor>
{
    BOOL _didReset;
    BOOL _hasChanges;
    NSMutableArray *_insertedContacts;
    NSMutableArray *_updatedContacts;
    NSMutableArray *_deletedContactIdentifiers;
}

@property(retain) NSMutableArray *deletedContactIdentifiers; // @synthesize deletedContactIdentifiers=_deletedContactIdentifiers;
@property(retain) NSMutableArray *updatedContacts; // @synthesize updatedContacts=_updatedContacts;
@property(retain) NSMutableArray *insertedContacts; // @synthesize insertedContacts=_insertedContacts;
@property BOOL hasChanges; // @synthesize hasChanges=_hasChanges;
@property BOOL didReset; // @synthesize didReset=_didReset;
// - (void).cxx_destruct;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (id)init;

@end

