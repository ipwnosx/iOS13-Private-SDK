//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVContainerInfoTaskGroup.h>

@interface CalDAVCalendarInfoTaskGroup : CoreDAVContainerInfoTaskGroup
{
    BOOL _fetchSharees;
}

@property(nonatomic) BOOL fetchSharees; // @synthesize fetchSharees=_fetchSharees;
- (id)containerForURL:(id)arg1;
- (id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2;
- (id)_copyContainerParserMappings;
- (id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3;

@end

