//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSURL;

@interface ISURLResolverOperation : ISOperation
{
//    struct __CFHost _host;
    NSURL *_url;
    NSURL *_URL;
}

@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
// - (void).cxx_destruct;
- (void)_runLookupForHostname:(id)arg1;
- (void)_resolutionCompletedWithError:(id)arg1;
- (void)run;
- (id)url;
- (void)setUrl:(id)arg1;
@property(readonly) NSArray *resolvedAddressStrings;
@property(readonly) NSArray *resolvedAddresses;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

