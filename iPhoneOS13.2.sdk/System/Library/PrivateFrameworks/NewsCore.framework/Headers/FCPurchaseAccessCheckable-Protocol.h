//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NFCopying-Protocol.h>

@class NSString;
@protocol FCChannelProviding;

@protocol FCPurchaseAccessCheckable <NFCopying>
@property(readonly, copy, nonatomic) id <FCChannelProviding> sourceChannel;
@property(readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid;
@property(readonly, nonatomic, getter=isPaid) BOOL paid;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

