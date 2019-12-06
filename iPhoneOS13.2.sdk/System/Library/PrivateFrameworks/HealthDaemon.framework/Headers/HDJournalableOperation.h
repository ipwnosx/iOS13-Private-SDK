//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>


@interface HDJournalableOperation : HDJournalEntry <NSSecureCoding>
{
    BOOL _didJournal;
}

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL didJournal; // @synthesize didJournal=_didJournal;
- (BOOL)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id )arg3;
- (BOOL)performOrJournalWithProfile:(id)arg1 error:(id )arg2;

@end

