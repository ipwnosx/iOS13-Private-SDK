//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ResponseKit/RKPolarityDataProvider-Protocol.h>

@class NSMutableDictionary;

@interface RKLinguisticDataProvider : NSObject <RKPolarityDataProvider>
{
    NSMutableDictionary *_polarityMapsByLanguageID;
}

@property(retain) NSMutableDictionary *polarityMapsByLanguageID; // @synthesize polarityMapsByLanguageID=_polarityMapsByLanguageID;
// - (void).cxx_destruct;
- (id)init;

@end

