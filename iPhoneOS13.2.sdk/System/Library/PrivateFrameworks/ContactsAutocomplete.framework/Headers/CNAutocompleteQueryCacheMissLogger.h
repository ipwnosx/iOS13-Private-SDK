//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteQueryCacheMissLogging-Protocol.h>

@class NSArray;

@interface CNAutocompleteQueryCacheMissLogger : NSObject <CNAutocompleteQueryCacheMissLogging>
{
    NSArray *_loggers;
}

@property(copy) NSArray *loggers; // @synthesize loggers=_loggers;
// - (void).cxx_destruct;
- (void)didReturnCacheFalsePositives:(id)arg1;
- (void)didReturnCacheFalseNegatives:(id)arg1;
- (id)initWithLoggers:(id)arg1;
- (id)init;

@end

