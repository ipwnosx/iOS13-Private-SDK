//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdContextProvider-Protocol.h>

@class NSDate, NSString, NUAdBannerView;

@interface NUAd : NSObject <NUAdContextProvider>
{
    NSString *_identifier;
    NUAdBannerView *_bannerView;
    NSString *_opportunityIdentifier;
    NSDate *_creationDate;
    NSDate *_loadDate;
    NSDate *_unloadDate;
    NSUInteger _state;
}

@property(nonatomic) NSUInteger state; // @synthesize state=_state;
@property(retain, nonatomic) NSDate *unloadDate; // @synthesize unloadDate=_unloadDate;
@property(retain, nonatomic) NSDate *loadDate; // @synthesize loadDate=_loadDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSString *opportunityIdentifier; // @synthesize opportunityIdentifier=_opportunityIdentifier;
@property(nonatomic) __weak NUAdBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)initWithBanner:(id)arg1 identifier:(id)arg2;

@end

