//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKCloudUserProvider-Protocol.h>

@class CRKCloudUser;

@interface CRKMockCloudUserProvider : NSObject <CRKCloudUserProvider>
{
    CRKCloudUser *_cloudUser;
}

+ (id)providerWithUser:(id)arg1;
@property(retain, nonatomic) CRKCloudUser *cloudUser; // @synthesize cloudUser=_cloudUser;
// - (void).cxx_destruct;

@end

