//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRRequestMessage.h>

@class NSString;

@interface TRSetupConfigurationRequest : TRRequestMessage
{
    NSString *_deviceName;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

