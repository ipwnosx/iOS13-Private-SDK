//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADBulletProperties.h>

__attribute__((visibility("hidden")))
@interface OADAutoNumberBulletProperties : OADBulletProperties
{
    int mSchemeType;
    NSUInteger mStartIndex;
}

- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)startIndex;
- (int)autoNumberSchemeType;
- (id)initWithAutoNumberSchemeType:(int)arg1 startIndex:(NSUInteger)arg2;

@end

