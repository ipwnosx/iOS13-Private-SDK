//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (CoreRecentsUtilities)
- (id)cr_lowercaseStringWithStandardLocale;
- (id)cr_uniqueFilenameWithRespectToFilenames:(id)arg1;
- (id)cr_copyIDNAEncodedEmailAddress;
- (id)cr_copyIDNADecodedEmailAddress;
- (id)cr_copyStringByEncodingIDNAInRange:(NSRange)arg1;
- (id)cr_copyStringByDecodingIDNAInRange:(NSRange)arg1;
- (NSRange)cr_rangeOfAddressDomain;
@end

