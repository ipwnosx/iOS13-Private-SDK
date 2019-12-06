//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSourceInclusionPolicy-Protocol.h>

@interface _CNAutocompleteMutableSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>
{
    BOOL _includeContacts;
    BOOL _includeRecents;
    BOOL _includeSuggestions;
    BOOL _includeLocalExtensions;
    BOOL _includeDirectoryServers;
    BOOL _includeCalendarServers;
    BOOL _includeSupplementalResults;
    BOOL _includePredictions;
}

@property BOOL includePredictions; // @synthesize includePredictions=_includePredictions;
@property BOOL includeSupplementalResults; // @synthesize includeSupplementalResults=_includeSupplementalResults;
@property BOOL includeCalendarServers; // @synthesize includeCalendarServers=_includeCalendarServers;
@property BOOL includeDirectoryServers; // @synthesize includeDirectoryServers=_includeDirectoryServers;
@property BOOL includeLocalExtensions; // @synthesize includeLocalExtensions=_includeLocalExtensions;
@property BOOL includeSuggestions; // @synthesize includeSuggestions=_includeSuggestions;
@property BOOL includeRecents; // @synthesize includeRecents=_includeRecents;
@property BOOL includeContacts; // @synthesize includeContacts=_includeContacts;

@end

