//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TimeSync/TSgPTPFDPtPPort.h>

@interface TSgPTPUnicastUDPv6PtPPort : TSgPTPFDPtPPort
{
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andIPv6Address:(char )arg2;
- (void)dealloc;
- (int)portType;
- (id)_destinationAddressString;
- (id)_sourceAddressString;
- (id)initWithInterfaceName:(id)arg1 andIPv6Address:(char )arg2;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;

@end

