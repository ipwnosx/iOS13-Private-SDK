//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol TSCEReferenceResolving;

@protocol TSCETableResolverFactoryProtocol <NSObject>
// - (vector_4115f7f8)unorderedCellRefsForCategoryRef:(const struct TSCECategoryRef )arg1 atRowUid:(const UUIDData_5fbc143e )arg2;
// - (vector_2431c21e)categoryRefsForSpanningCategoryRef:(const struct TSCECategoryRef )arg1;
// - (vector_4115f7f8)cellRefsForCategoryRef:(const struct TSCECategoryRef )arg1 atRowUid:(const UUIDData_5fbc143e )arg2;
// - (vector_a1208d01)valuesForCategoryRef:(const struct TSCECategoryRef )arg1 atRowUid:(const UUIDData_5fbc143e )arg2 error:(id )arg3;
// - (unsigned char)aggregateTypeForCategoryRef:(const struct TSCECategoryRef )arg1;
- (UUIDData_5fbc143e)mapOwnerUID:(const UUIDData_5fbc143e )arg1;
// - (struct TSCETableResolver )newTableResolverForResolver:(id <TSCEReferenceResolving>)arg1;
// - (id)initWithCalcEngine:(struct TSCECalcEngine )arg1;
@end

