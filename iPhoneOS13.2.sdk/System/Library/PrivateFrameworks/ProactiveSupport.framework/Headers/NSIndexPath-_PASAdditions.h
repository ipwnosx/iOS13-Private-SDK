//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <ProactiveSupport/_PASDistilledString-Protocol.h>

@interface NSIndexPath (_PASAdditions) <_PASDistilledString>
+ (id)_pas_fromVersionString:(id)arg1 withExceptions:(BOOL)arg2;
+ (id)_pas_fromVersionStringIfPossible:(id)arg1;
+ (id)_pas_fromVersionString:(id)arg1;
- (BOOL)_pas_isGreaterThanVersionString:(id)arg1;
- (BOOL)_pas_isGreaterThanOrEqualToVersionString:(id)arg1;
- (BOOL)_pas_isEqualToVersionString:(id)arg1;
- (BOOL)_pas_isLessThanOrEqualToVersionString:(id)arg1;
- (BOOL)_pas_isLessThanVersionString:(id)arg1;
- (id)_pas_asVersionString;
- (id)_pas_revivedString;
@end

