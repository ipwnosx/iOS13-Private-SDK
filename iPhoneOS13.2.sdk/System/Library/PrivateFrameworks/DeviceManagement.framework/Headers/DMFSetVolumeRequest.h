//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@interface DMFSetVolumeRequest : DMFTaskRequest
{
    float _volume;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) float volume; // @synthesize volume=_volume;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

