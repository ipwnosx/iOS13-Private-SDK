//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFDASyncResponseConsumer-Protocol.h>

@class MFError, NSString;

@interface MFDAStoreDraftConsumer : NSObject <MFDASyncResponseConsumer>
{
    BOOL _success;
    NSString *_serverId;
    MFError *_error;
}

@property(readonly, nonatomic) BOOL success; // @synthesize success=_success;
@property(readonly, nonatomic) MFError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *serverId; // @synthesize serverId=_serverId;
// - (void).cxx_destruct;
- (void)handleResponse:(id)arg1 error:(id)arg2;

@end

