//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABChangeStoreRowInfo : NSObject
{
    int _consumedSequenceNumber;
    NSString *_clientIdentifier;
}

@property(nonatomic) int consumedSequenceNumber; // @synthesize consumedSequenceNumber=_consumedSequenceNumber;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void)dealloc;
- (id)description;

@end

