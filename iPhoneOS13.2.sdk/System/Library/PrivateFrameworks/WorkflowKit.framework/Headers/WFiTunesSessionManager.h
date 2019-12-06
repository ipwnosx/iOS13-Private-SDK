//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSURLSession;

@interface WFiTunesSessionManager : NSObject
{
    NSURLSession *_session;
    NSURL *_baseURL;
}

@property(readonly, copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
// - (void).cxx_destruct;
- (void)getMediaWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)lookupMediaWithISBN:(NSUInteger)arg1 completion:(CDUnknownBlockType)arg2;
- (void)lookupMediaWithUPC:(NSUInteger)arg1 completion:(CDUnknownBlockType)arg2;
- (void)lookupMediaWithBundleIdentifier:(id)arg1 countryCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)lookupMediaWithIdentifiers:(id)arg1 countryCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)searchForMediaOfType:(id)arg1 limitedToEntityType:(id)arg2 withTerm:(id)arg3 forAttribute:(id)arg4 countryCode:(id)arg5 limit:(NSUInteger)arg6 completion:(CDUnknownBlockType)arg7;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)init;

@end

