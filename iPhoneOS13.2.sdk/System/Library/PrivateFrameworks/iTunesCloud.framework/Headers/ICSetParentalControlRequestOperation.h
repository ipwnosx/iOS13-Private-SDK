//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICStoreURLRequest;

@interface ICSetParentalControlRequestOperation : ICRequestOperation
{
    BOOL _allowsExplicitContent;
    BOOL _automatic;
    ICStoreRequestContext *_requestContext;
    ICStoreURLRequest *_storeURLRequest;
}

@property(retain, nonatomic) ICStoreURLRequest *storeURLRequest; // @synthesize storeURLRequest=_storeURLRequest;
@property(retain, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(nonatomic, getter=isAutomatic) BOOL automatic; // @synthesize automatic=_automatic;
@property(nonatomic) BOOL allowsExplicitContent; // @synthesize allowsExplicitContent=_allowsExplicitContent;
// - (void).cxx_destruct;
- (void)_getURLFromBagAndSendRequest;
- (void)_buildAndSendRequestForURL:(id)arg1;
- (void)cancel;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 allowsExplicitContent:(BOOL)arg2 isAutomatic:(BOOL)arg3;

@end

