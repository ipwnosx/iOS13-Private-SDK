//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/DAAction.h>

@interface DAResponse : DAAction
{
    long long _status;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemChangeType:(NSUInteger)arg1 changedItem:(id)arg2 serverId:(id)arg3 status:(long long)arg4;

@end

