//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/_SFKey.h>

@interface _SFSymmetricKey : _SFKey
{
    id _symmetricKeyInternal;
}

+ (Class)_attributesClass;
// - (void).cxx_destruct;
- (id)_keyData;
- (id)keyData;
- (id)initWithData:(id)arg1 specifier:(id)arg2 error:(id )arg3;
- (id)initRandomKeyWithSpecifier:(id)arg1 error:(id )arg2;

@end

