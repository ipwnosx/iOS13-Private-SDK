//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalCalendarDataContainerProvider-Protocol.h>

@interface CalUMCalendarDataContainerProvider : NSObject <CalCalendarDataContainerProvider>
{
}

+ (id)sharedInstance;
- (id)_calendarGroupContainer;
- (void)_performBlockAsPersonaWithIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_containerForPersonaIdentifier:(id)arg1 containerProviderBlock:(CDUnknownBlockType)arg2;
- (id)containerForPersonaIdentifier:(id)arg1;

@end

