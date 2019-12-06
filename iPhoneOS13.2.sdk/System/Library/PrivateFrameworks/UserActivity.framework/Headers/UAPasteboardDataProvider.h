//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserActivity/UAPasteboardItemProviding-Protocol.h>

@class NSData, NSString, NSUUID;

@interface UAPasteboardDataProvider : NSObject <UAPasteboardItemProviding>
{
    NSString *_type;
    NSUUID *_uuid;
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (void)getDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithData:(id)arg1 type:(id)arg2;

@end

