//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSearch-Protocol.h>

@class CLSDataStore;

@interface CNAutocompleteLocalExtensionSearch : NSObject <CNAutocompleteSearch>
{
    CLSDataStore *_dataStore;
}

@property(readonly, nonatomic) CLSDataStore *dataStore; // @synthesize dataStore=_dataStore;
// - (void).cxx_destruct;
- (id)fetchContactsForFetchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)executeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDataStore:(id)arg1;
- (id)init;

@end

