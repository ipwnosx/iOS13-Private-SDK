//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Network/NWConnection.h>

@interface NWStreamConnection : NWConnection
{
}

+ (id)connectionWithConnectedSocket:(int)arg1;
- (BOOL)writeCloseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)writeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)readDataWithMinimumLength:(NSUInteger)arg1 maximumLength:(NSUInteger)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

