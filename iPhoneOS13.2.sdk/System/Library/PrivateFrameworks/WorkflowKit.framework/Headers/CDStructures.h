//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Allocator;

struct Array {
    /* void * CDUnknownFunctionPointerType _field1 */;
    struct VTable _field2;
    char _field3;
    long long _field4;
    long long _field5;
    NSUInteger _field6;
    NSUInteger _field7;
    struct Allocator _field8;
    NSUInteger _field9;
    struct ArrayParent _field10;
    NSUInteger _field11;
    unsigned char _field12;
    BOOL _field13;
    BOOL _field14;
    BOOL _field15;
};

struct ArrayInteger {
    /* void * CDUnknownFunctionPointerType _field1 */;
    struct VTable _field2;
    char _field3;
    long long _field4;
    long long _field5;
    NSUInteger _field6;
    NSUInteger _field7;
    struct Allocator _field8;
    NSUInteger _field9;
    struct ArrayParent _field10;
    NSUInteger _field11;
    unsigned char _field12;
    BOOL _field13;
    BOOL _field14;
    BOOL _field15;
};

struct ArrayParent;

struct ArrayString {
    /* void * CDUnknownFunctionPointerType _field1 */;
    struct VTable _field2;
    char _field3;
    long long _field4;
    long long _field5;
    NSUInteger _field6;
    NSUInteger _field7;
    struct Allocator _field8;
    NSUInteger _field9;
    struct ArrayParent _field10;
    NSUInteger _field11;
    unsigned char _field12;
    BOOL _field13;
    BOOL _field14;
    BOOL _field15;
    BOOL _field16;
};

struct AtomicSharedPtr<realm::_impl::CollectionNotifier, true> {
    struct shared_ptr<realm::_impl::CollectionNotifier> m_ptr;
};

struct BacklinkColumn;

struct BasicRow<const realm::Table> {
    struct BasicTableRef<realm::Table> m_table;
    NSUInteger m_row_ndx;
    struct RowBase m_prev;
    struct RowBase m_next;
};

struct BasicRow<realm::Table> {
    struct BasicTableRef<realm::Table> m_table;
    NSUInteger m_row_ndx;
    struct RowBase m_prev;
    struct RowBase m_next;
};

struct BasicTableRef<realm::Table> {
    struct Table m_ptr;
};

struct BinaryData {
    char m_data;
    NSUInteger m_size;
};

struct BpTree<long long> {
    struct unique_ptr<realm::Array, std::__1::default_delete<realm::Array>> m_root;
};

struct Chunk;

struct CollectionChangeSet {
    struct IndexSet deletions;
    struct IndexSet insertions;
    struct IndexSet modifications;
    struct IndexSet modifications_new;
    struct vector<realm::CollectionChangeSet::Move, std::__1::allocator<realm::CollectionChangeSet::Move>> moves;
    struct vector<realm::IndexSet, std::__1::allocator<realm::IndexSet>> columns;
};

struct CollectionNotifier;

struct Column<long long> {
    /* void * CDUnknownFunctionPointerType _vptr$ColumnBase */;
    NSUInteger m_column_ndx;
    struct unique_ptr<realm::StringIndex, std::__1::default_delete<realm::StringIndex>> m_search_index;
    struct BpTree<long long> m_tree;
};

struct Descriptor;

struct DescriptorOrdering {
    struct vector<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>, std::__1::allocator<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>>> m_descriptors;
};

struct Group {
    /* void * CDUnknownFunctionPointerType _field1 */;
    struct SlabAlloc _field2;
    int _field3;
    struct Array _field4;
    struct ArrayInteger _field5;
    struct ArrayString _field6;
    struct vector<realm::Table *, std::__1::allocator<realm::Table *>> _field7;
    BOOL _field8;
    BOOL _field9;
    struct function<void (const realm::Group::CascadeNotification &)> _field10;
    struct function<void ()> _field11;
    struct shared_ptr<realm::metrics::Metrics> _field12;
    NSUInteger _field13;
};

struct Handle<realm::_impl::CollectionNotifier> {
    struct CollectionNotifier __ptr_;
    struct __shared_weak_count __cntrl_;
};

struct Handle<realm::_impl::ObjectNotifier> {
    struct ObjectNotifier __ptr_;
    struct __shared_weak_count __cntrl_;
};

struct Handle<realm::_impl::ResultsNotifier> {
    struct ResultsNotifier __ptr_;
    struct __shared_weak_count __cntrl_;
};

struct IndexSet {
    struct vector<realm::_impl::ChunkedRangeVector::Chunk, std::__1::allocator<realm::_impl::ChunkedRangeVector::Chunk>> m_data;
};

struct LinkView;

struct List {
    shared_ptr_130f66cc m_realm;
    struct ObjectSchema m_object_schema;
    struct shared_ptr<realm::LinkView> m_link_view;
    struct BasicTableRef<realm::Table> m_table;
    struct Handle<realm::_impl::CollectionNotifier> m_notifier;
};

struct MappedFile;

struct Metrics;

struct Move;

struct NotificationToken {
    struct AtomicSharedPtr<realm::_impl::CollectionNotifier, true> m_notifier;
    NSUInteger m_token;
};

struct Object {
    shared_ptr_130f66cc m_realm;
    struct ObjectSchema m_object_schema;
    struct BasicRow<realm::Table> m_row;
    struct Handle<realm::_impl::ObjectNotifier> m_notifier;
};

struct ObjectNotifier;

struct ObjectSchema {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    struct vector<realm::Property, std::__1::allocator<realm::Property>> _field2;
    struct vector<realm::Property, std::__1::allocator<realm::Property>> _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
};

struct Optional<realm::Schema> {
    union {
        struct Schema m_value;
        char m_null_state;
    } ;
    BOOL m_engaged;
};

struct Optional<unsigned long long> {
    CDUnion_f76efdce ;
    BOOL m_engaged;
};

struct Optional<unsigned long> {
    CDUnion_f76efdce ;
    BOOL m_engaged;
};

struct OptionalBase;

struct Property {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned char _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field5;
    struct TaggedBool<realm::IsPrimaryTag> _field6;
    struct TaggedBool<realm::IsIndexedTag> _field7;
    NSUInteger _field8;
};

struct Query {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> error_code;
    struct vector<realm::QueryGroup, std::__1::allocator<realm::QueryGroup>> m_groups;
    struct vector<unsigned long, std::__1::allocator<unsigned long>> m_subtable_path;
    struct shared_ptr<const realm::Descriptor> m_current_descriptor;
    struct BasicTableRef<realm::Table> m_table;
    struct RowIndexes m_view;
    struct shared_ptr<realm::LinkView> m_source_link_view;
    struct TableViewBase m_source_table_view;
    struct unique_ptr<realm::TableViewBase, std::__1::default_delete<realm::TableViewBase>> m_owned_source_table_view;
};

struct QueryGroup;

struct RLMClassInfo {
    id _field1;
    id _field2;
    struct ObjectSchema _field3;
    struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *>> _field4;
    struct Table _field5;
    struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *>> _field6;
};

struct RLMObservationInfo {
    struct RLMObservationInfo _field1;
    struct RLMObservationInfo _field2;
    struct BasicRow<realm::Table> _field3;
    struct RLMClassInfo _field4;
    id _field5;
    BOOL _field6;
    NSUInteger _field7;
    id _field8;
    id _field9;
    id _field10;
};

struct RLMResultsSetInfo;

struct RLMSchemaInfo {
    struct unordered_map<NSString *, RLMClassInfo, std::__1::hash<NSString *>, std::__1::equal_to<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, RLMClassInfo>>> m_objects;
};

struct Realm;

struct Replication;

struct Results {
    shared_ptr_130f66cc m_realm;
    struct ObjectSchema m_object_schema;
    struct Query m_query;
    struct TableView m_table_view;
    struct shared_ptr<realm::LinkView> m_link_view;
    struct BasicTableRef<realm::Table> m_table;
    struct DescriptorOrdering m_descriptor_ordering;
    struct Handle<realm::_impl::ResultsNotifier> m_notifier;
    int m_mode;
    int m_update_policy;
    BOOL m_has_used_table_view;
    BOOL m_wants_background_updates;
};

struct ResultsNotifier;

struct RowBase;

struct RowIndexes;

struct Schema {
    struct ObjectSchema __begin_;
    struct ObjectSchema __end_;
    struct __compressed_pair<realm::ObjectSchema *, std::__1::allocator<realm::ObjectSchema>> {
        struct ObjectSchema __value_;
    } __end_cap_;
};

struct SipHasher {
    int _c;
    int _d;
    NSUInteger _v0;
    NSUInteger _v1;
    NSUInteger _v2;
    NSUInteger _v3;
    struct TailBuffer _buffer;
};

struct Slab;

struct SlabAlloc {
    /* void * CDUnknownFunctionPointerType _field1 */;
    NSUInteger _field2;
    struct Replication _field3;
    NSUInteger _field4;
    struct atomic<unsigned long long> _field5;
    struct atomic<unsigned long long> _field6;
    struct Config {
        BOOL _field1;
        BOOL _field2;
        BOOL _field3;
        BOOL _field4;
        BOOL _field5;
        BOOL _field6;
        BOOL _field7;
        char _field8;
    } _field7;
    struct map<int, realm::SlabAlloc::FreeBlock *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, realm::SlabAlloc::FreeBlock *>>> _field8;
    struct shared_ptr<realm::SlabAlloc::MappedFile> _field9;
    struct unique_ptr<std::__1::shared_ptr<const realm::util::File::Map<char>>[], std::__1::default_delete<std::__1::shared_ptr<const realm::util::File::Map<char>>[]>> _field10;
    NSUInteger _field11;
    char _field12;
    NSUInteger _field13;
    NSUInteger _field14;
    int _field15;
    struct unique_ptr<unsigned long [], std::__1::default_delete<unsigned long []>> _field16;
    NSUInteger _field17;
    int _field18;
    int _field19;
    struct vector<realm::SlabAlloc::Slab, std::__1::allocator<realm::SlabAlloc::Slab>> _field20;
    struct map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>> _field21;
    NSUInteger _field22;
    BOOL _field23;
    struct hash_entry _field24[256];
    NSUInteger _field25;
};

struct StringIndex;

struct SyncConfig;

struct Table;

struct TableView {
    /* void * CDUnknownFunctionPointerType _vptr$RowIndexes */;
    struct Column<long long> m_row_indexes;
    NSUInteger m_limit_count;
    NSUInteger m_debug_cookie;
    struct BasicTableRef<realm::Table> m_table;
    struct BacklinkColumn m_linked_column;
    struct BasicRow<const realm::Table> m_linked_row;
    struct shared_ptr<const realm::LinkView> m_linkview_source;
    NSUInteger m_distinct_column_source;
    struct DescriptorOrdering m_descriptor_ordering;
    struct Query m_query;
    NSUInteger m_start;
    NSUInteger m_end;
    NSUInteger m_limit;
    struct Optional<unsigned long long> m_last_seen_version;
    NSUInteger m_num_detached_refs;
};

struct TableViewBase;

struct TaggedBool<realm::IsIndexedTag> {
    BOOL _field1;
};

struct TaggedBool<realm::IsPrimaryTag> {
    BOOL _field1;
};

struct TailBuffer {
    NSUInteger value;
};

struct ThreadSafeReferenceBase;

struct VTable;

struct WFRowTemplateValueInfo {
    Class _field1;
    SEL _field2;
    SEL _field3;
    id _field4;
    id _field5;
};

struct _WFDatabaseResultsSlice {
    NSUInteger startIndex;
    NSUInteger endIndex;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*> __next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*> __next_;
};

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> _field1;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void _field3;
    void _field4;
};

struct atomic<unsigned long long> {
    _Atomic NSUInteger _field1;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    NSUInteger __cap_;
                    NSUInteger __size_;
                    char __data_;
                } __l;
                struct __short {
                    union {
                        unsigned char __size_;
                        char __lx;
                    } ;
                    char __data_[23];
                } __s;
                struct __raw {
                    NSUInteger __words[3];
                } __r;
            } ;
        } __value_;
    } __r_;
};

struct function<bool (unsigned long long, unsigned long long)> {
    struct __value_func<bool (unsigned long long, unsigned long long)> {
        struct type __buf_;
        struct __base<bool (unsigned long long, unsigned long long)> __f_;
    } __f_;
};

struct function<std::__1::shared_ptr<realm::AuditInterface>()> {
    struct __value_func<std::__1::shared_ptr<realm::AuditInterface>()> {
        struct type __buf_;
        struct __base<std::__1::shared_ptr<realm::AuditInterface>()> __f_;
    } __f_;
};

struct function<void ()> {
    struct __value_func<void ()> {
        struct type _field1;
        struct __base<void ()> _field2;
    } _field1;
};

struct function<void (const realm::Group::CascadeNotification &)> {
    struct __value_func<void (const realm::Group::CascadeNotification &)> {
        struct type _field1;
        struct __base<void (const realm::Group::CascadeNotification &)> _field2;
    } _field1;
};

struct function<void (std::__1::shared_ptr<realm::Realm>)> {
    struct __value_func<void (std::__1::shared_ptr<realm::Realm>)> {
        struct type __buf_;
        struct __base<void (std::__1::shared_ptr<realm::Realm>)> __f_;
    } __f_;
};

struct function<void (std::__1::shared_ptr<realm::Realm>, std::__1::shared_ptr<realm::Realm>, realm::Schema &)> {
    struct __value_func<void (std::__1::shared_ptr<realm::Realm>, std::__1::shared_ptr<realm::Realm>, realm::Schema &)> {
        struct type __buf_;
        struct __base<void (std::__1::shared_ptr<realm::Realm>, std::__1::shared_ptr<realm::Realm>, realm::Schema &)> __f_;
    } __f_;
};

struct hash_entry {
    NSUInteger _field1;
    char _field2;
    NSUInteger _field3;
};

struct map<int, realm::SlabAlloc::FreeBlock *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, realm::SlabAlloc::FreeBlock *>>> {
    struct __tree<std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *>, std::__1::__map_value_compare<int, std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *>, std::__1::less<int>, true>> {
            NSUInteger _field1;
        } _field3;
    } _field1;
};

struct map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>> {
    struct __tree<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, unsigned long>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true>> {
            NSUInteger _field1;
        } _field3;
    } _field1;
};

struct shared_ptr<const realm::Descriptor> {
    struct Descriptor __ptr_;
    struct __shared_weak_count __cntrl_;
};

struct shared_ptr<const realm::LinkView> {
    struct LinkView __ptr_;
    struct __shared_weak_count __cntrl_;
};

struct shared_ptr<const realm::util::File::Map<char>>;

struct shared_ptr<realm::LinkView> {
    struct LinkView __ptr_;
    struct __shared_weak_count __cntrl_;
};

struct shared_ptr<realm::Realm> {
    struct Realm __ptr_;
    struct __shared_weak_count __cntrl_;
};

struct shared_ptr<realm::SlabAlloc::MappedFile> {
    struct MappedFile _field1;
    struct __shared_weak_count _field2;
};

struct shared_ptr<realm::SyncConfig> {
    struct SyncConfig __ptr_;
    struct __shared_weak_count __cntrl_;
};

struct shared_ptr<realm::_impl::CollectionNotifier> {
    struct CollectionNotifier __ptr_;
    struct __shared_weak_count __cntrl_;
};

struct shared_ptr<realm::metrics::Metrics> {
    struct Metrics _field1;
    struct __shared_weak_count _field2;
};

struct type {
    unsigned char __lx[32];
};

struct unique_ptr<(anonymous namespace)::OptionalBase, std::__1::default_delete<(anonymous namespace)::OptionalBase>> {
    struct __compressed_pair<(anonymous namespace)::OptionalBase *, std::__1::default_delete<(anonymous namespace)::OptionalBase>> {
        struct OptionalBase __value_;
    } __ptr_;
};

struct unique_ptr<RLMObservationInfo, std::__1::default_delete<RLMObservationInfo>> {
    struct __compressed_pair<RLMObservationInfo *, std::__1::default_delete<RLMObservationInfo>> {
        struct RLMObservationInfo __value_;
    } __ptr_;
};

struct unique_ptr<RLMResultsSetInfo, std::__1::default_delete<RLMResultsSetInfo>> {
    struct __compressed_pair<RLMResultsSetInfo *, std::__1::default_delete<RLMResultsSetInfo>> {
        struct RLMResultsSetInfo __value_;
    } __ptr_;
};

struct unique_ptr<id [], std::__1::default_delete<id []>> {
    struct __compressed_pair<__strong id *, std::__1::default_delete<id []>> {
        id __value_;
    } __ptr_;
};

struct unique_ptr<realm::Array, std::__1::default_delete<realm::Array>> {
    struct __compressed_pair<realm::Array *, std::__1::default_delete<realm::Array>> {
        struct Array __value_;
    } __ptr_;
};

struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>;

struct unique_ptr<realm::StringIndex, std::__1::default_delete<realm::StringIndex>> {
    struct __compressed_pair<realm::StringIndex *, std::__1::default_delete<realm::StringIndex>> {
        struct StringIndex __value_;
    } __ptr_;
};

struct unique_ptr<realm::TableViewBase, std::__1::default_delete<realm::TableViewBase>> {
    struct __compressed_pair<realm::TableViewBase *, std::__1::default_delete<realm::TableViewBase>> {
        struct TableViewBase __value_;
    } __ptr_;
};

struct unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase>> {
    struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::__1::default_delete<realm::ThreadSafeReferenceBase>> {
        struct ThreadSafeReferenceBase __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*> __value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*>*>> {
                NSUInteger __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*> __value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*>*>> {
                NSUInteger __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::shared_ptr<const realm::util::File::Map<char>>[], std::__1::default_delete<std::__1::shared_ptr<const realm::util::File::Map<char>>[]>> {
    struct __compressed_pair<std::__1::shared_ptr<const realm::util::File::Map<char>>*, std::__1::default_delete<std::__1::shared_ptr<const realm::util::File::Map<char>>[]>> {
        struct shared_ptr<const realm::util::File::Map<char>> _field1;
    } _field1;
};

struct unique_ptr<unsigned long [], std::__1::default_delete<unsigned long []>> {
    struct __compressed_pair<unsigned long *, std::__1::default_delete<unsigned long []>> {
        NSUInteger _field1;
    } _field1;
};

struct unordered_map<NSString *, RLMClassInfo, std::__1::hash<NSString *>, std::__1::equal_to<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, RLMClassInfo>>> {
    struct __hash_table<std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::hash<NSString *>, true>, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::equal_to<NSString *>, true>, std::__1::allocator<std::__1::__hash_value_type<NSString *, RLMClassInfo>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::hash<NSString *>, true>> {
            NSUInteger __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::equal_to<NSString *>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<NSString *, realm::IndexSet, std::__1::hash<NSString *>, std::__1::equal_to<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, realm::IndexSet>>> {
    struct __hash_table<std::__1::__hash_value_type<NSString *, realm::IndexSet>, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, realm::IndexSet>, std::__1::hash<NSString *>, true>, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, realm::IndexSet>, std::__1::equal_to<NSString *>, true>, std::__1::allocator<std::__1::__hash_value_type<NSString *, realm::IndexSet>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, realm::IndexSet>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, realm::IndexSet>, std::__1::hash<NSString *>, true>> {
            NSUInteger __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, realm::IndexSet>, std::__1::equal_to<NSString *>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *>> {
    struct RLMClassInfo _field1;
    struct RLMClassInfo _field2;
    struct __compressed_pair<RLMClassInfo **, std::__1::allocator<RLMClassInfo *>> {
        struct RLMClassInfo _field1;
    } _field3;
};

struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *>> {
    struct RLMObservationInfo _field1;
    struct RLMObservationInfo _field2;
    struct __compressed_pair<RLMObservationInfo **, std::__1::allocator<RLMObservationInfo *>> {
        struct RLMObservationInfo _field1;
    } _field3;
};

struct vector<char, std::__1::allocator<char>> {
    char __begin_;
    char __end_;
    struct __compressed_pair<char *, std::__1::allocator<char>> {
        char __value_;
    } __end_cap_;
};

struct vector<realm::CollectionChangeSet::Move, std::__1::allocator<realm::CollectionChangeSet::Move>> {
    struct Move __begin_;
    struct Move __end_;
    struct __compressed_pair<realm::CollectionChangeSet::Move *, std::__1::allocator<realm::CollectionChangeSet::Move>> {
        struct Move __value_;
    } __end_cap_;
};

struct vector<realm::IndexSet, std::__1::allocator<realm::IndexSet>> {
    struct IndexSet __begin_;
    struct IndexSet __end_;
    struct __compressed_pair<realm::IndexSet *, std::__1::allocator<realm::IndexSet>> {
        struct IndexSet __value_;
    } __end_cap_;
};

struct vector<realm::Property, std::__1::allocator<realm::Property>> {
    struct Property _field1;
    struct Property _field2;
    struct __compressed_pair<realm::Property *, std::__1::allocator<realm::Property>> {
        struct Property _field1;
    } _field3;
};

struct vector<realm::QueryGroup, std::__1::allocator<realm::QueryGroup>> {
    struct QueryGroup __begin_;
    struct QueryGroup __end_;
    struct __compressed_pair<realm::QueryGroup *, std::__1::allocator<realm::QueryGroup>> {
        struct QueryGroup __value_;
    } __end_cap_;
};

struct vector<realm::SlabAlloc::Slab, std::__1::allocator<realm::SlabAlloc::Slab>> {
    struct Slab _field1;
    struct Slab _field2;
    struct __compressed_pair<realm::SlabAlloc::Slab *, std::__1::allocator<realm::SlabAlloc::Slab>> {
        struct Slab _field1;
    } _field3;
};

struct vector<realm::Table *, std::__1::allocator<realm::Table *>> {
    struct Table _field1;
    struct Table _field2;
    struct __compressed_pair<realm::Table **, std::__1::allocator<realm::Table *>> {
        struct Table _field1;
    } _field3;
};

struct vector<realm::_impl::ChunkedRangeVector::Chunk, std::__1::allocator<realm::_impl::ChunkedRangeVector::Chunk>> {
    struct Chunk __begin_;
    struct Chunk __end_;
    struct __compressed_pair<realm::_impl::ChunkedRangeVector::Chunk *, std::__1::allocator<realm::_impl::ChunkedRangeVector::Chunk>> {
        struct Chunk __value_;
    } __end_cap_;
};

struct vector<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>, std::__1::allocator<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>>> {
    struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>> __begin_;
    struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>> __end_;
    struct __compressed_pair<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>*, std::__1::allocator<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>>> {
        struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>> __value_;
    } __end_cap_;
};

struct vector<unsigned long, std::__1::allocator<unsigned long>> {
    NSUInteger __begin_;
    NSUInteger __end_;
    struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> {
        NSUInteger __value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    NSUInteger _field1;
    id _field2;
    NSUInteger _field3;
    NSUInteger _field4[5];
} CDStruct_70511ce9;

// Template types
typedef struct shared_ptr<realm::Realm> {
    struct Realm __ptr_;
    struct __shared_weak_count __cntrl_;
} shared_ptr_130f66cc;

typedef struct unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase>> {
    struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::__1::default_delete<realm::ThreadSafeReferenceBase>> {
        struct ThreadSafeReferenceBase __value_;
    } __ptr_;
} unique_ptr_d0e912ad;

#pragma mark Typedef'd Unions

typedef union {
    NSUInteger m_value;
    char m_null_state;
} CDUnion_f76efdce;

