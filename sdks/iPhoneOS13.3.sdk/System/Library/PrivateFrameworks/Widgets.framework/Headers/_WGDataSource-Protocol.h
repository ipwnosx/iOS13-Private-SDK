//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Widgets/WGDataSource-Protocol.h>

@class NSString;
@protocol WGDatum;

@protocol _WGDataSource <WGDataSource>
- (void)removeDatumWithIdentifier:(NSString *)arg1;
- (void)replaceWithDatum:(id <WGDatum>)arg1;
@end
