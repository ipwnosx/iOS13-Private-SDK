//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailAddressing/EFLoggable-Protocol.h>

@interface EAEmailAddressParser : NSObject <EFLoggable>
{
}

+ (id)_stringByEncodingIDNAString:(id)arg1 inRange:(NSRange *)arg2;
+ (id)_stringByDecodingIDNAString:(id)arg1 inRange:(NSRange *)arg2;
+ (NSRange *)rangeOfAddressDomainFromAddress:(id)arg1;
+ (id)idnaEncodedAddressForAddress:(id)arg1;
+ (id)idnaDecodedAddressForAddress:(id)arg1;
+ (void)insertPreviousRoute:(unsigned short )arg1 ofLength:(NSUInteger)arg2 toBuffer:(unsigned short )arg3 ofLength:(NSUInteger)arg4 atPosition:(unsigned short )arg5 addSpace:(BOOL)arg6;
+ (id)displayNameFromAddress:(id)arg1 cacheResults:(BOOL)arg2;
+ (id)displayNameFromAddress:(id)arg1;
+ (void)_componentsForFullAddress:(id)arg1 rawAddressIndexes:(id )arg2 localPartIndexes:(id )arg3 domainIndexes:(id )arg4;
+ (id)addressDomainFromAddress:(id)arg1;
+ (id)localPartFromAddress:(id)arg1;
+ (id)rawAddressRespectingGroupsFromFullAddress:(id)arg1;
+ (id)rawAddressFromFullAddress:(id)arg1 cacheResults:(BOOL)arg2;
+ (id)rawAddressFromFullAddress:(id)arg1;
+ (BOOL)addressIsEmptyGroup:(id)arg1;
+ (BOOL)isLegalEmailAddress:(id)arg1;
+ (id)log;

@end

