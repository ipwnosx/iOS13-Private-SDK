//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSData;

@interface AAUpgradeiOSTermsResponse : AAResponse
{
    NSData *_xmlUIData;
}

@property(readonly, nonatomic) NSData *xmlUIData; // @synthesize xmlUIData=_xmlUIData;
// - (void).cxx_destruct;
- (BOOL)bodyIsPlist;
- (id)responseXMLData;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

