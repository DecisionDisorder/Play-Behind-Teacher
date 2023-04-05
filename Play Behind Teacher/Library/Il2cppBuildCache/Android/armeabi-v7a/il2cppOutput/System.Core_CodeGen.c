#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000A System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000C TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000010 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000012 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000014 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000015 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000016 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000017 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000018 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001B System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001C System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001D System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000020 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000021 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000023 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000026 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000027 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000028 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002B System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000002F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000030 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000031 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000034 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000003F System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000040 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000041 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000042 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000043 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000044 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000045 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000046 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x00000047 TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000048 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x00000049 System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000004A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000004B System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000004C System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x0000004D System.Boolean System.Linq.Set`1::Add(TElement)
// 0x0000004E System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x0000004F System.Void System.Linq.Set`1::Resize()
// 0x00000050 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000051 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000052 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000054 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000055 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000056 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000057 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000058 System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x00000059 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000005A System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000005B System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000005C System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000005D System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000005E System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000005F System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000060 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000061 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000062 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000063 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000064 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000065 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000066 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000067 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000068 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000069 System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x0000006A System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x0000006B System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000006C System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000006D System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000006E System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000006F System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x00000070 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x00000071 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000072 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000073 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000074 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000075 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000076 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000077 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[119] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[119] = 
{
	1995,
	2079,
	2079,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[35] = 
{
	{ 0x02000004, { 57, 4 } },
	{ 0x02000005, { 61, 9 } },
	{ 0x02000006, { 72, 7 } },
	{ 0x02000007, { 81, 10 } },
	{ 0x02000008, { 93, 11 } },
	{ 0x02000009, { 107, 9 } },
	{ 0x0200000A, { 119, 12 } },
	{ 0x0200000B, { 134, 1 } },
	{ 0x0200000C, { 135, 2 } },
	{ 0x0200000D, { 137, 12 } },
	{ 0x0200000E, { 149, 8 } },
	{ 0x02000010, { 157, 4 } },
	{ 0x02000011, { 161, 34 } },
	{ 0x02000013, { 195, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 1 } },
	{ 0x06000009, { 31, 2 } },
	{ 0x0600000A, { 33, 1 } },
	{ 0x0600000B, { 34, 5 } },
	{ 0x0600000C, { 39, 3 } },
	{ 0x0600000D, { 42, 2 } },
	{ 0x0600000E, { 44, 4 } },
	{ 0x0600000F, { 48, 3 } },
	{ 0x06000010, { 51, 1 } },
	{ 0x06000011, { 52, 3 } },
	{ 0x06000012, { 55, 2 } },
	{ 0x06000022, { 70, 2 } },
	{ 0x06000027, { 79, 2 } },
	{ 0x0600002C, { 91, 2 } },
	{ 0x06000032, { 104, 3 } },
	{ 0x06000037, { 116, 3 } },
	{ 0x0600003C, { 131, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[197] = 
{
	{ (Il2CppRGCTXDataType)2, 1307 },
	{ (Il2CppRGCTXDataType)3, 3280 },
	{ (Il2CppRGCTXDataType)2, 2008 },
	{ (Il2CppRGCTXDataType)2, 1725 },
	{ (Il2CppRGCTXDataType)3, 5619 },
	{ (Il2CppRGCTXDataType)2, 1371 },
	{ (Il2CppRGCTXDataType)2, 1732 },
	{ (Il2CppRGCTXDataType)3, 5637 },
	{ (Il2CppRGCTXDataType)2, 1727 },
	{ (Il2CppRGCTXDataType)3, 5626 },
	{ (Il2CppRGCTXDataType)2, 1308 },
	{ (Il2CppRGCTXDataType)3, 3281 },
	{ (Il2CppRGCTXDataType)2, 2019 },
	{ (Il2CppRGCTXDataType)2, 1734 },
	{ (Il2CppRGCTXDataType)3, 5644 },
	{ (Il2CppRGCTXDataType)2, 1385 },
	{ (Il2CppRGCTXDataType)2, 1742 },
	{ (Il2CppRGCTXDataType)3, 5674 },
	{ (Il2CppRGCTXDataType)2, 1738 },
	{ (Il2CppRGCTXDataType)3, 5658 },
	{ (Il2CppRGCTXDataType)2, 510 },
	{ (Il2CppRGCTXDataType)3, 122 },
	{ (Il2CppRGCTXDataType)3, 123 },
	{ (Il2CppRGCTXDataType)2, 909 },
	{ (Il2CppRGCTXDataType)3, 2480 },
	{ (Il2CppRGCTXDataType)2, 511 },
	{ (Il2CppRGCTXDataType)3, 126 },
	{ (Il2CppRGCTXDataType)3, 127 },
	{ (Il2CppRGCTXDataType)2, 913 },
	{ (Il2CppRGCTXDataType)3, 2482 },
	{ (Il2CppRGCTXDataType)3, 6826 },
	{ (Il2CppRGCTXDataType)2, 518 },
	{ (Il2CppRGCTXDataType)3, 170 },
	{ (Il2CppRGCTXDataType)3, 6816 },
	{ (Il2CppRGCTXDataType)3, 2184 },
	{ (Il2CppRGCTXDataType)2, 816 },
	{ (Il2CppRGCTXDataType)2, 1055 },
	{ (Il2CppRGCTXDataType)2, 1120 },
	{ (Il2CppRGCTXDataType)2, 1172 },
	{ (Il2CppRGCTXDataType)2, 660 },
	{ (Il2CppRGCTXDataType)3, 598 },
	{ (Il2CppRGCTXDataType)3, 599 },
	{ (Il2CppRGCTXDataType)2, 1372 },
	{ (Il2CppRGCTXDataType)3, 3620 },
	{ (Il2CppRGCTXDataType)2, 1256 },
	{ (Il2CppRGCTXDataType)2, 984 },
	{ (Il2CppRGCTXDataType)2, 1061 },
	{ (Il2CppRGCTXDataType)2, 1121 },
	{ (Il2CppRGCTXDataType)2, 1062 },
	{ (Il2CppRGCTXDataType)2, 1122 },
	{ (Il2CppRGCTXDataType)3, 2481 },
	{ (Il2CppRGCTXDataType)2, 1052 },
	{ (Il2CppRGCTXDataType)2, 1053 },
	{ (Il2CppRGCTXDataType)2, 1119 },
	{ (Il2CppRGCTXDataType)3, 2479 },
	{ (Il2CppRGCTXDataType)2, 983 },
	{ (Il2CppRGCTXDataType)2, 1060 },
	{ (Il2CppRGCTXDataType)3, 3282 },
	{ (Il2CppRGCTXDataType)3, 3284 },
	{ (Il2CppRGCTXDataType)2, 335 },
	{ (Il2CppRGCTXDataType)3, 3283 },
	{ (Il2CppRGCTXDataType)3, 3292 },
	{ (Il2CppRGCTXDataType)2, 1311 },
	{ (Il2CppRGCTXDataType)2, 1728 },
	{ (Il2CppRGCTXDataType)3, 5627 },
	{ (Il2CppRGCTXDataType)3, 3293 },
	{ (Il2CppRGCTXDataType)2, 1093 },
	{ (Il2CppRGCTXDataType)2, 1142 },
	{ (Il2CppRGCTXDataType)3, 2487 },
	{ (Il2CppRGCTXDataType)3, 6799 },
	{ (Il2CppRGCTXDataType)2, 1739 },
	{ (Il2CppRGCTXDataType)3, 5659 },
	{ (Il2CppRGCTXDataType)3, 3285 },
	{ (Il2CppRGCTXDataType)2, 1310 },
	{ (Il2CppRGCTXDataType)2, 1726 },
	{ (Il2CppRGCTXDataType)3, 5620 },
	{ (Il2CppRGCTXDataType)3, 2486 },
	{ (Il2CppRGCTXDataType)3, 3286 },
	{ (Il2CppRGCTXDataType)3, 6798 },
	{ (Il2CppRGCTXDataType)2, 1735 },
	{ (Il2CppRGCTXDataType)3, 5645 },
	{ (Il2CppRGCTXDataType)3, 3299 },
	{ (Il2CppRGCTXDataType)2, 1312 },
	{ (Il2CppRGCTXDataType)2, 1733 },
	{ (Il2CppRGCTXDataType)3, 5638 },
	{ (Il2CppRGCTXDataType)3, 3656 },
	{ (Il2CppRGCTXDataType)3, 1810 },
	{ (Il2CppRGCTXDataType)3, 2488 },
	{ (Il2CppRGCTXDataType)3, 1809 },
	{ (Il2CppRGCTXDataType)3, 3300 },
	{ (Il2CppRGCTXDataType)3, 6800 },
	{ (Il2CppRGCTXDataType)2, 1743 },
	{ (Il2CppRGCTXDataType)3, 5675 },
	{ (Il2CppRGCTXDataType)3, 3313 },
	{ (Il2CppRGCTXDataType)2, 1314 },
	{ (Il2CppRGCTXDataType)2, 1741 },
	{ (Il2CppRGCTXDataType)3, 5661 },
	{ (Il2CppRGCTXDataType)3, 3314 },
	{ (Il2CppRGCTXDataType)2, 1096 },
	{ (Il2CppRGCTXDataType)2, 1145 },
	{ (Il2CppRGCTXDataType)3, 2492 },
	{ (Il2CppRGCTXDataType)3, 2491 },
	{ (Il2CppRGCTXDataType)2, 1730 },
	{ (Il2CppRGCTXDataType)3, 5629 },
	{ (Il2CppRGCTXDataType)3, 6803 },
	{ (Il2CppRGCTXDataType)2, 1740 },
	{ (Il2CppRGCTXDataType)3, 5660 },
	{ (Il2CppRGCTXDataType)3, 3306 },
	{ (Il2CppRGCTXDataType)2, 1313 },
	{ (Il2CppRGCTXDataType)2, 1737 },
	{ (Il2CppRGCTXDataType)3, 5647 },
	{ (Il2CppRGCTXDataType)3, 2490 },
	{ (Il2CppRGCTXDataType)3, 2489 },
	{ (Il2CppRGCTXDataType)3, 3307 },
	{ (Il2CppRGCTXDataType)2, 1729 },
	{ (Il2CppRGCTXDataType)3, 5628 },
	{ (Il2CppRGCTXDataType)3, 6802 },
	{ (Il2CppRGCTXDataType)2, 1736 },
	{ (Il2CppRGCTXDataType)3, 5646 },
	{ (Il2CppRGCTXDataType)3, 3320 },
	{ (Il2CppRGCTXDataType)2, 1315 },
	{ (Il2CppRGCTXDataType)2, 1745 },
	{ (Il2CppRGCTXDataType)3, 5677 },
	{ (Il2CppRGCTXDataType)3, 3657 },
	{ (Il2CppRGCTXDataType)3, 1812 },
	{ (Il2CppRGCTXDataType)3, 2494 },
	{ (Il2CppRGCTXDataType)3, 2493 },
	{ (Il2CppRGCTXDataType)3, 1811 },
	{ (Il2CppRGCTXDataType)3, 3321 },
	{ (Il2CppRGCTXDataType)2, 1731 },
	{ (Il2CppRGCTXDataType)3, 5630 },
	{ (Il2CppRGCTXDataType)3, 6804 },
	{ (Il2CppRGCTXDataType)2, 1744 },
	{ (Il2CppRGCTXDataType)3, 5676 },
	{ (Il2CppRGCTXDataType)3, 2484 },
	{ (Il2CppRGCTXDataType)3, 2485 },
	{ (Il2CppRGCTXDataType)3, 2495 },
	{ (Il2CppRGCTXDataType)3, 172 },
	{ (Il2CppRGCTXDataType)3, 173 },
	{ (Il2CppRGCTXDataType)2, 1622 },
	{ (Il2CppRGCTXDataType)3, 5164 },
	{ (Il2CppRGCTXDataType)2, 1088 },
	{ (Il2CppRGCTXDataType)2, 1138 },
	{ (Il2CppRGCTXDataType)3, 5165 },
	{ (Il2CppRGCTXDataType)3, 175 },
	{ (Il2CppRGCTXDataType)2, 333 },
	{ (Il2CppRGCTXDataType)2, 519 },
	{ (Il2CppRGCTXDataType)3, 171 },
	{ (Il2CppRGCTXDataType)3, 174 },
	{ (Il2CppRGCTXDataType)3, 2217 },
	{ (Il2CppRGCTXDataType)2, 830 },
	{ (Il2CppRGCTXDataType)2, 2073 },
	{ (Il2CppRGCTXDataType)3, 5161 },
	{ (Il2CppRGCTXDataType)3, 5162 },
	{ (Il2CppRGCTXDataType)2, 1186 },
	{ (Il2CppRGCTXDataType)3, 5163 },
	{ (Il2CppRGCTXDataType)2, 265 },
	{ (Il2CppRGCTXDataType)2, 985 },
	{ (Il2CppRGCTXDataType)2, 2022 },
	{ (Il2CppRGCTXDataType)2, 1072 },
	{ (Il2CppRGCTXDataType)2, 1123 },
	{ (Il2CppRGCTXDataType)3, 2200 },
	{ (Il2CppRGCTXDataType)2, 824 },
	{ (Il2CppRGCTXDataType)3, 2652 },
	{ (Il2CppRGCTXDataType)3, 2653 },
	{ (Il2CppRGCTXDataType)2, 971 },
	{ (Il2CppRGCTXDataType)3, 2656 },
	{ (Il2CppRGCTXDataType)2, 971 },
	{ (Il2CppRGCTXDataType)3, 2657 },
	{ (Il2CppRGCTXDataType)2, 986 },
	{ (Il2CppRGCTXDataType)3, 2661 },
	{ (Il2CppRGCTXDataType)3, 2665 },
	{ (Il2CppRGCTXDataType)3, 2664 },
	{ (Il2CppRGCTXDataType)2, 2071 },
	{ (Il2CppRGCTXDataType)3, 2655 },
	{ (Il2CppRGCTXDataType)3, 2654 },
	{ (Il2CppRGCTXDataType)3, 2662 },
	{ (Il2CppRGCTXDataType)2, 1181 },
	{ (Il2CppRGCTXDataType)3, 2659 },
	{ (Il2CppRGCTXDataType)3, 7039 },
	{ (Il2CppRGCTXDataType)2, 802 },
	{ (Il2CppRGCTXDataType)3, 1803 },
	{ (Il2CppRGCTXDataType)1, 1039 },
	{ (Il2CppRGCTXDataType)2, 2028 },
	{ (Il2CppRGCTXDataType)3, 2658 },
	{ (Il2CppRGCTXDataType)1, 2028 },
	{ (Il2CppRGCTXDataType)1, 1181 },
	{ (Il2CppRGCTXDataType)2, 2071 },
	{ (Il2CppRGCTXDataType)2, 2028 },
	{ (Il2CppRGCTXDataType)2, 1074 },
	{ (Il2CppRGCTXDataType)2, 1125 },
	{ (Il2CppRGCTXDataType)3, 2663 },
	{ (Il2CppRGCTXDataType)3, 2660 },
	{ (Il2CppRGCTXDataType)3, 2666 },
	{ (Il2CppRGCTXDataType)2, 224 },
	{ (Il2CppRGCTXDataType)3, 1813 },
	{ (Il2CppRGCTXDataType)2, 344 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	119,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	35,
	s_rgctxIndices,
	197,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
