//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNTask.h>

@class NSString;

@interface CNEmailAddressSanitizationTask : CNTask
{
    NSString *_address;
}

// - (void).cxx_destruct;
- (void)removeMailtoPrefix;
- (id)run:(id )arg1;
- (id)description;
- (id)initWithAddress:(id)arg1;

@end

