//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

@interface MCDeviceUploadCredentials : NSObject <NSSecureCoding>
{
    NSString *_dsid;
    NSString *_dsToken;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *dsToken; // @synthesize dsToken=_dsToken;
@property(readonly, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDsid:(id)arg1 dsToken:(id)arg2;

@end
