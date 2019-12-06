//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFSignatures : NSObject
{
}

+ (id)signaturePlainTextFormat:(id)arg1;
+ (id)signatureMarkupFormat:(id)arg1;
+ (id)sharedInstance;
- (id)signaturePlainTextForSendingEmailAddress:(id)arg1;
- (id)signatureMarkupForSendingEmailAddress:(id)arg1;
- (void)setSignature:(id)arg1 forEmailAddress:(id)arg2;
- (id)signatureForSendingEmailAddress:(id)arg1;
- (void)setSignature:(id)arg1 forAccount:(id)arg2;
- (id)signatureForAccount:(id)arg1;
- (void)setUseAccountSignatures:(BOOL)arg1;
- (BOOL)useAccountSignatures;
- (void)clearSignature;
- (void)setSignature:(id)arg1;
- (id)signature;
- (id)_getValue:(id)arg1;
- (id)defaultSignature;
- (id)_modelSpecificLocalizedStringKeyForKey:(id)arg1;
- (id)init;

@end

