//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSError (HFErrorHandlerAdditions)
+ (id)hf_errorWithCode:(long long)arg1 operation:(id)arg2 options:(id)arg3;
+ (id)hf_internalErrorWithDescription:(id)arg1;
// + (id)hf_errorWithCode:(long long)arg1 descriptionFormat:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
+ (id)hf_errorWithCode:(long long)arg1 descriptionFormat:(id)arg2;
+ (id)hf_errorWithCode:(long long)arg1;
- (id)hf_errorWithOperationType:(id)arg1 failedItemName:(id)arg2;
- (id)hf_errorWithOperationType:(id)arg1 options:(id)arg2;
- (BOOL)hf_isHMErrorWithCodePrivate:(long long)arg1;
- (BOOL)hf_isHMErrorWithCode:(long long)arg1;
- (BOOL)hf_isHFErrorWithCode:(long long)arg1;
@property(readonly, nonatomic) BOOL hf_isHomeKitUnreachableError;
@property(readonly, nonatomic) BOOL hf_isHomeKitNamingError;
@end

