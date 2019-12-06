//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSHTTPURLResponse, NSString;

@interface IMMockURLResponse : NSObject <NSSecureCoding>
{
    NSHTTPURLResponse *_response;
    NSData *_data;
    NSString *_requestBodyKeyPath;
    NSString *_mockID;
}

+ (id)objectFromPlist:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(copy) NSString *mockID; // @synthesize mockID=_mockID;
@property(copy) NSString *requestBodyKeyPath; // @synthesize requestBodyKeyPath=_requestBodyKeyPath;
@property(retain) NSData *data; // @synthesize data=_data;
@property(retain) NSHTTPURLResponse *response; // @synthesize response=_response;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

