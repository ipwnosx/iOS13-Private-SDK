//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Network/NWEndpoint.h>

@class NSString;

@interface NWHostEndpoint : NWEndpoint
{
}

+ (id)endpointWithHostname:(id)arg1 port:(id)arg2;
+ (unsigned int)endpointType;
@property(readonly, nonatomic) NSString *port;
@property(readonly, nonatomic) NSString *hostname;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;

@end

