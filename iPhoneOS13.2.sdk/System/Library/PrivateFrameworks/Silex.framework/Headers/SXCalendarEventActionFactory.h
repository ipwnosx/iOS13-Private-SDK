//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionFactory-Protocol.h>

@protocol SXDateParser;

@interface SXCalendarEventActionFactory : NSObject <SXActionFactory>
{
    id <SXDateParser> _dateParser;
}

@property(readonly, nonatomic) id <SXDateParser> dateParser; // @synthesize dateParser=_dateParser;
// - (void).cxx_destruct;
- (id)actionForStartDate:(id)arg1 endDate:(id)arg2;
- (id)actionForURL:(id)arg1;
- (id)actionForAddition:(id)arg1;
- (id)initWithDateParser:(id)arg1;

@end

