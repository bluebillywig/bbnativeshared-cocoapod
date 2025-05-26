#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class BbnativesharedAction, BbnativesharedActionCompanion, BbnativesharedAdMacroHelperCompanion, BbnativesharedAdSchedulingControllerCompanion, BbnativesharedAdSchedulingData, BbnativesharedAdSchedulingDataCompanion, BbnativesharedAdUnit, BbnativesharedAdUnitCompanion, BbnativesharedApiMethod, BbnativesharedApiProperty, BbnativesharedAppConfig, BbnativesharedAppConfigCompanion, BbnativesharedAudiotrack, BbnativesharedAudiotrackCompanion, BbnativesharedAutoPlayNextTimerCompanion, BbnativesharedBBModel, BbnativesharedBlueBillywigLoggerCompanion, BbnativesharedCapabilitiesCompanion, BbnativesharedChapter, BbnativesharedChapterCompanion, BbnativesharedCondition, BbnativesharedConditionCompanion, BbnativesharedContentItem, BbnativesharedContentItemCompanion, BbnativesharedContentItemFactoryCompanion, BbnativesharedContentLoaderCompanion, BbnativesharedDates, BbnativesharedDatesCompanion, BbnativesharedEmbedControllerCompanion, BbnativesharedEmbedData, BbnativesharedEmbedDataCompanion, BbnativesharedEmbedObject, BbnativesharedEmbedObjectCompanion, BbnativesharedEventHandler, BbnativesharedEventHandlerCompanion, BbnativesharedEventName, BbnativesharedFitMode, BbnativesharedHighlight, BbnativesharedHighlightCompanion, BbnativesharedInstantFactoryCompanion, BbnativesharedKotlinAbstractCoroutineContextElement, BbnativesharedKotlinAbstractCoroutineContextKey<B, E>, BbnativesharedKotlinArray<T>, BbnativesharedKotlinCancellationException, BbnativesharedKotlinEnum<E>, BbnativesharedKotlinEnumCompanion, BbnativesharedKotlinException, BbnativesharedKotlinIllegalStateException, BbnativesharedKotlinNothing, BbnativesharedKotlinRuntimeException, BbnativesharedKotlinThrowable, BbnativesharedKotlinUnit, BbnativesharedKotlinx_coroutines_coreCoroutineDispatcher, BbnativesharedKotlinx_coroutines_coreCoroutineDispatcherKey, BbnativesharedKotlinx_datetimeInstant, BbnativesharedKotlinx_datetimeInstantCompanion, BbnativesharedKotlinx_serialization_coreSerialKind, BbnativesharedKotlinx_serialization_coreSerializersModule, BbnativesharedKotlinx_serialization_jsonJsonElement, BbnativesharedKotlinx_serialization_jsonJsonElementCompanion, BbnativesharedLanguage, BbnativesharedLanguages, BbnativesharedLanguagesCompanion, BbnativesharedLineItem_, BbnativesharedLineItem_Companion, BbnativesharedLogger, BbnativesharedMasterController, BbnativesharedMasterControllerCompanion, BbnativesharedMediaAsset, BbnativesharedMediaAssetCompanion, BbnativesharedMediaClip, BbnativesharedMediaClipCompanion, BbnativesharedMediaClipList, BbnativesharedMediaClipListCompanion, BbnativesharedMsasController, BbnativesharedMsasControllerCompanion, BbnativesharedParameter, BbnativesharedParameterCompanion, BbnativesharedPhase, BbnativesharedPlatformCompanion, BbnativesharedPlayer, BbnativesharedPlayerCompanion, BbnativesharedPlayerSettings, BbnativesharedPlayerSettingsCompanion, BbnativesharedPlayout, BbnativesharedPlayoutCompanion, BbnativesharedPosType, BbnativesharedProcedure, BbnativesharedProcedureCompanion, BbnativesharedProgramController, BbnativesharedProgramControllerCompanion, BbnativesharedProject, BbnativesharedProjectCompanion, BbnativesharedPublication, BbnativesharedPublicationCompanion, BbnativesharedQuality, BbnativesharedRelatedItemsHelperCompanion, BbnativesharedRequestParams, BbnativesharedRequestParamsCompanion, BbnativesharedShortsEngineCompanion, BbnativesharedSoftEmbargoTimerCompanion, BbnativesharedState, BbnativesharedStep, BbnativesharedStepCompanion, BbnativesharedSubtitle, BbnativesharedSubtitleCompanion, BbnativesharedThumbnail, BbnativesharedThumbnailCompanion, BbnativesharedTimeline, BbnativesharedTimelineCompanion, BbnativesharedTypedObject, BbnativesharedTypedObjectCompanion, BbnativesharedVersioningData, BbnativesharedVersioningDataCompanion, BbnativesharedVideoTrack, BbnativesharedVideoTrackCompanion;

@protocol BbnativesharedAdControllerInterface, BbnativesharedContentItemInterface, BbnativesharedEventBusInterface, BbnativesharedEventListenerInterface, BbnativesharedKotlinAnnotation, BbnativesharedKotlinComparable, BbnativesharedKotlinContinuation, BbnativesharedKotlinContinuationInterceptor, BbnativesharedKotlinCoroutineContext, BbnativesharedKotlinCoroutineContextElement, BbnativesharedKotlinCoroutineContextKey, BbnativesharedKotlinIterator, BbnativesharedKotlinKAnnotatedElement, BbnativesharedKotlinKClass, BbnativesharedKotlinKClassifier, BbnativesharedKotlinKDeclarationContainer, BbnativesharedKotlinSequence, BbnativesharedKotlinx_coroutines_coreChildHandle, BbnativesharedKotlinx_coroutines_coreChildJob, BbnativesharedKotlinx_coroutines_coreCompletableJob, BbnativesharedKotlinx_coroutines_coreCoroutineScope, BbnativesharedKotlinx_coroutines_coreDisposableHandle, BbnativesharedKotlinx_coroutines_coreFlow, BbnativesharedKotlinx_coroutines_coreFlowCollector, BbnativesharedKotlinx_coroutines_coreJob, BbnativesharedKotlinx_coroutines_coreMutableSharedFlow, BbnativesharedKotlinx_coroutines_coreMutableStateFlow, BbnativesharedKotlinx_coroutines_coreParentJob, BbnativesharedKotlinx_coroutines_coreRunnable, BbnativesharedKotlinx_coroutines_coreSelectClause, BbnativesharedKotlinx_coroutines_coreSelectClause0, BbnativesharedKotlinx_coroutines_coreSelectInstance, BbnativesharedKotlinx_coroutines_coreSharedFlow, BbnativesharedKotlinx_coroutines_coreStateFlow, BbnativesharedKotlinx_serialization_coreCompositeDecoder, BbnativesharedKotlinx_serialization_coreCompositeEncoder, BbnativesharedKotlinx_serialization_coreDecoder, BbnativesharedKotlinx_serialization_coreDeserializationStrategy, BbnativesharedKotlinx_serialization_coreEncoder, BbnativesharedKotlinx_serialization_coreKSerializer, BbnativesharedKotlinx_serialization_coreSerialDescriptor, BbnativesharedKotlinx_serialization_coreSerializationStrategy, BbnativesharedKotlinx_serialization_coreSerializersModuleCollector, BbnativesharedMediaControllerInterface, BbnativesharedNetworkInterface, BbnativesharedPosterControllerInterface;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface BbnativesharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface BbnativesharedBase (BbnativesharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface BbnativesharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface BbnativesharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorBbnativesharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface BbnativesharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface BbnativesharedByte : BbnativesharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface BbnativesharedUByte : BbnativesharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface BbnativesharedShort : BbnativesharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface BbnativesharedUShort : BbnativesharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface BbnativesharedInt : BbnativesharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface BbnativesharedUInt : BbnativesharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface BbnativesharedLong : BbnativesharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface BbnativesharedULong : BbnativesharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface BbnativesharedFloat : BbnativesharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface BbnativesharedDouble : BbnativesharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface BbnativesharedBoolean : BbnativesharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdMacroHelper")))
@interface BbnativesharedAdMacroHelper : BbnativesharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BbnativesharedAdMacroHelperCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)resolveBracketMacroMacro:(NSString *)macro __attribute__((swift_name("resolveBracketMacro(macro:)")));
- (NSString * _Nullable)resolveMacroMacro:(NSString *)macro __attribute__((swift_name("resolveMacro(macro:)")));
- (NSString * _Nullable)resolvePercentMacroMacro:(NSString *)macro __attribute__((swift_name("resolvePercentMacro(macro:)")));
- (void)updateSettingsSettings:(NSDictionary<NSString *, id> *)settings __attribute__((swift_name("updateSettings(settings:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdMacroHelper.Companion")))
@interface BbnativesharedAdMacroHelperCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedAdMacroHelperCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("EventListenerInterface")))
@protocol BbnativesharedEventListenerInterface
@required
- (void)onEventEventType:(BbnativesharedEventName *)eventType data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("onEvent(eventType:data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoPlayNextTimer")))
@interface BbnativesharedAutoPlayNextTimer : BbnativesharedBase <BbnativesharedEventListenerInterface>
- (instancetype)initWithEventBus:(id<BbnativesharedEventBusInterface> _Nullable)eventBus pc:(BbnativesharedProgramController * _Nullable)pc __attribute__((swift_name("init(eventBus:pc:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedAutoPlayNextTimerCompanion *companion __attribute__((swift_name("companion")));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)onEventEventType:(BbnativesharedEventName *)eventType data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("onEvent(eventType:data:)")));
- (void)pause __attribute__((swift_name("pause()")));
- (void)resume __attribute__((swift_name("resume()")));
- (void)start __attribute__((swift_name("start()")));
@property (readonly) id<BbnativesharedKotlinx_coroutines_coreCoroutineScope> mainScope __attribute__((swift_name("mainScope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoPlayNextTimer.Companion")))
@interface BbnativesharedAutoPlayNextTimerCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedAutoPlayNextTimerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Capabilities")))
@interface BbnativesharedCapabilities : BbnativesharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BbnativesharedCapabilitiesCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Capabilities.Companion")))
@interface BbnativesharedCapabilitiesCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedCapabilitiesCompanion *shared __attribute__((swift_name("shared")));
- (BOOL)canPlayTypeType:(NSString *)type __attribute__((swift_name("canPlayType(type:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstantFactory")))
@interface BbnativesharedInstantFactory : BbnativesharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BbnativesharedInstantFactoryCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstantFactory.Companion")))
@interface BbnativesharedInstantFactoryCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedInstantFactoryCompanion *shared __attribute__((swift_name("shared")));
- (BbnativesharedKotlinx_datetimeInstant * _Nullable)tryCreateOfDateTimeStr:(NSString *)str __attribute__((swift_name("tryCreateOfDateTime(str:)")));
- (BbnativesharedKotlinx_datetimeInstant * _Nullable)tryCreateOfFullDateTimeStr:(NSString *)str __attribute__((swift_name("tryCreateOfFullDateTime(str:)")));
- (BbnativesharedKotlinx_datetimeInstant * _Nullable)tryCreateOfIso8601DateTimeStr:(NSString *)str __attribute__((swift_name("tryCreateOfIso8601DateTime(str:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMTimer")))
@interface BbnativesharedKMMTimer : BbnativesharedBase
- (instancetype)initWithName:(NSString * _Nullable)name interval:(int64_t)interval delay:(int64_t)delay action:(void (^)(void))action __attribute__((swift_name("init(name:interval:delay:action:)"))) __attribute__((objc_designated_initializer));
- (void)cancel __attribute__((swift_name("cancel()")));
- (BOOL)isRunning __attribute__((swift_name("isRunning()")));
- (void)start __attribute__((swift_name("start()")));
@property (readonly) int64_t delay __attribute__((swift_name("delay")));
@property (readonly) int64_t interval __attribute__((swift_name("interval")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logger")))
@interface BbnativesharedLogger : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)logger __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedLogger *shared __attribute__((swift_name("shared")));
- (void)dTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("d(tag:message:)")));
- (void)eTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("e(tag:message:)")));
- (void)wTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("w(tag:message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface BbnativesharedPlatform : BbnativesharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BbnativesharedPlatformCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform.Companion")))
@interface BbnativesharedPlatformCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedPlatformCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@property (readonly) NSString *resolution __attribute__((swift_name("resolution")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelatedItemsHelper")))
@interface BbnativesharedRelatedItemsHelper : BbnativesharedBase <BbnativesharedEventListenerInterface>
- (instancetype)initWithEventBus:(id<BbnativesharedEventBusInterface> _Nullable)eventBus pc:(BbnativesharedProgramController * _Nullable)pc __attribute__((swift_name("init(eventBus:pc:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedRelatedItemsHelperCompanion *companion __attribute__((swift_name("companion")));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (void)loadMode:(NSString * _Nullable)mode __attribute__((swift_name("load(mode:)")));
- (void)onEventEventType:(BbnativesharedEventName *)eventType data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("onEvent(eventType:data:)")));
- (BOOL)setItemsItems:(NSArray<id<BbnativesharedContentItemInterface>> * _Nullable)items __attribute__((swift_name("setItems(items:)")));
@property id<BbnativesharedNetworkInterface> _Nullable network __attribute__((swift_name("network")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelatedItemsHelper.Companion")))
@interface BbnativesharedRelatedItemsHelperCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedRelatedItemsHelperCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShortsEngine")))
@interface BbnativesharedShortsEngine : BbnativesharedBase <BbnativesharedEventListenerInterface>
- (instancetype)initWithEventBus:(id<BbnativesharedEventBusInterface> _Nullable)eventBus opts:(BbnativesharedEmbedObject * _Nullable)opts options:(NSDictionary<NSString *, id> * _Nullable)options __attribute__((swift_name("init(eventBus:opts:options:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedShortsEngineCompanion *companion __attribute__((swift_name("companion")));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (void)onEventEventType:(BbnativesharedEventName *)eventType data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("onEvent(eventType:data:)")));
@property BbnativesharedMsasController * _Nullable msasController __attribute__((swift_name("msasController")));
@property BbnativesharedProgramController * _Nullable programController __attribute__((swift_name("programController")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShortsEngine.Companion")))
@interface BbnativesharedShortsEngineCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedShortsEngineCompanion *shared __attribute__((swift_name("shared")));
- (int32_t)findIndexForItemIdList:(NSMutableArray<id<BbnativesharedContentItemInterface>> * _Nullable)list itemId:(NSString * _Nullable)itemId __attribute__((swift_name("findIndexForItemId(list:itemId:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SoftEmbargoTimer")))
@interface BbnativesharedSoftEmbargoTimer : BbnativesharedBase
- (instancetype)initWithEventBus:(id<BbnativesharedEventBusInterface> _Nullable)eventBus pc:(BbnativesharedProgramController * _Nullable)pc __attribute__((swift_name("init(eventBus:pc:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedSoftEmbargoTimerCompanion *companion __attribute__((swift_name("companion")));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)startEndDate:(BbnativesharedKotlinx_datetimeInstant *)endDate __attribute__((swift_name("start(endDate:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SoftEmbargoTimer.Companion")))
@interface BbnativesharedSoftEmbargoTimerCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedSoftEmbargoTimerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdSchedulingController")))
@interface BbnativesharedAdSchedulingController : BbnativesharedBase <BbnativesharedEventListenerInterface>
- (instancetype)initWithEventBus:(id<BbnativesharedEventBusInterface> _Nullable)eventBus opts:(BbnativesharedEmbedObject * _Nullable)opts options:(NSDictionary<NSString *, id> * _Nullable)options __attribute__((swift_name("init(eventBus:opts:options:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedAdSchedulingControllerCompanion *companion __attribute__((swift_name("companion")));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (id _Nullable)getPropertyName:(NSString *)propertyName __attribute__((swift_name("get(propertyName:)")));
- (BOOL)loadPhase:(BbnativesharedPhase *)phase __attribute__((swift_name("load(phase:)")));
- (void)onEventEventType:(BbnativesharedEventName *)eventType data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("onEvent(eventType:data:)")));
- (BOOL)pause __attribute__((swift_name("pause()")));
- (BOOL)playPhase:(BbnativesharedPhase *)phase __attribute__((swift_name("play(phase:)")));
- (void)resetAdCounter_load __attribute__((swift_name("resetAdCounter_load()")));
- (BOOL)resume __attribute__((swift_name("resume()")));
- (BOOL)setPropertyName:(NSString *)propertyName propertyValue:(id _Nullable)propertyValue __attribute__((swift_name("set(propertyName:propertyValue:)")));
@property id<BbnativesharedAdControllerInterface> _Nullable adController __attribute__((swift_name("adController")));
@property id<BbnativesharedEventBusInterface> _Nullable eventBus __attribute__((swift_name("eventBus")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdSchedulingController.Companion")))
@interface BbnativesharedAdSchedulingControllerCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedAdSchedulingControllerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmbedController")))
@interface BbnativesharedEmbedController : BbnativesharedBase
- (instancetype)initWithEventBus:(id<BbnativesharedEventBusInterface> _Nullable)eventBus jsonEmbedUrl:(NSString * _Nullable)jsonEmbedUrl __attribute__((swift_name("init(eventBus:jsonEmbedUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedEmbedControllerCompanion *companion __attribute__((swift_name("companion")));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (void)loadJsonEmbedUrl:(NSString *)jsonEmbedUrl options:(NSDictionary<NSString *, id> * _Nullable)options __attribute__((swift_name("load(jsonEmbedUrl:options:)")));
@property NSString *appId __attribute__((swift_name("appId")));
@property NSString *appIndicator __attribute__((swift_name("appIndicator")));
@property NSString *baseUrl __attribute__((swift_name("baseUrl")));
@property BbnativesharedMediaClip * _Nullable clip __attribute__((swift_name("clip")));
@property BbnativesharedMediaClipList * _Nullable cliplist __attribute__((swift_name("cliplist")));
@property NSString * _Nullable contentId __attribute__((swift_name("contentId")));
@property NSString * _Nullable contentIndicator __attribute__((swift_name("contentIndicator")));
@property id<BbnativesharedEventBusInterface> _Nullable eventBus __attribute__((swift_name("eventBus")));
@property id<BbnativesharedNetworkInterface> _Nullable network __attribute__((swift_name("network")));
@property BbnativesharedPlayout * _Nullable playout __attribute__((swift_name("playout")));
@property BbnativesharedProject * _Nullable project __attribute__((swift_name("project")));
@property BbnativesharedPublication * _Nullable publication __attribute__((swift_name("publication")));
@property NSString *publicationName __attribute__((swift_name("publicationName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmbedController.Companion")))
@interface BbnativesharedEmbedControllerCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedEmbedControllerCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)createJsonEmbedUrlBaseUrl:(NSString *)baseUrl appIndicator:(NSString *)appIndicator appId:(NSString *)appId __attribute__((swift_name("createJsonEmbedUrl(baseUrl:appIndicator:appId:)")));
- (NSString *)createJsonEmbedUrlBaseUrl:(NSString *)baseUrl appIndicator:(NSString *)appIndicator appId:(NSString *)appId contentIndicator:(NSString * _Nullable)contentIndicator contentId:(NSString * _Nullable)contentId __attribute__((swift_name("createJsonEmbedUrl(baseUrl:appIndicator:appId:contentIndicator:contentId:)")));
- (NSString *)publicationNameFromBaseUrlBaseUrl:(NSString *)baseUrl __attribute__((swift_name("publicationNameFromBaseUrl(baseUrl:)")));
@end

__attribute__((swift_name("InViewController")))
@interface BbnativesharedInViewController : BbnativesharedBase <BbnativesharedEventListenerInterface>
- (instancetype)initWithEventBus:(id<BbnativesharedEventBusInterface> _Nullable)eventBus pc:(BbnativesharedProgramController * _Nullable)pc mc:(BbnativesharedMasterController * _Nullable)mc __attribute__((swift_name("init(eventBus:pc:mc:)"))) __attribute__((objc_designated_initializer));
- (void)__destruct __attribute__((swift_name("__destruct()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)_ingestOptsOpts:(BbnativesharedEmbedObject * _Nullable)opts __attribute__((swift_name("_ingestOpts(opts:)")));
- (BOOL)getInView __attribute__((swift_name("getInView()")));
- (void)onEventEventType:(BbnativesharedEventName *)eventType data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("onEvent(eventType:data:)")));
- (void)setInViewInView:(BbnativesharedBoolean * _Nullable)inView __attribute__((swift_name("setInView(inView:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property BOOL _autoPlay __attribute__((swift_name("_autoPlay")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property BOOL _autoPlay_override __attribute__((swift_name("_autoPlay_override")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property id<BbnativesharedEventBusInterface> _Nullable _eventBus __attribute__((swift_name("_eventBus")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property BOOL _inView __attribute__((swift_name("_inView")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property NSString *_inViewAction __attribute__((swift_name("_inViewAction")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property int32_t _inViewMargin __attribute__((swift_name("_inViewMargin")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property BbnativesharedBoolean * _Nullable _inView_forced __attribute__((swift_name("_inView_forced")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property NSString *_outViewAction __attribute__((swift_name("_outViewAction")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property BOOL _outViewOnce __attribute__((swift_name("_outViewOnce")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MasterController")))
@interface BbnativesharedMasterController : BbnativesharedBase <BbnativesharedEventListenerInterface>
- (instancetype)initWithEventBus:(id<BbnativesharedEventBusInterface> _Nullable)eventBus __attribute__((swift_name("init(eventBus:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedMasterControllerCompanion *companion __attribute__((swift_name("companion")));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (void)onEventEventType:(BbnativesharedEventName *)eventType data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("onEvent(eventType:data:)")));
@property BOOL muted __attribute__((swift_name("muted")));
@property double volume __attribute__((swift_name("volume")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MasterController.Companion")))
@interface BbnativesharedMasterControllerCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedMasterControllerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MsasController")))
@interface BbnativesharedMsasController : BbnativesharedBase <BbnativesharedEventListenerInterface>
- (instancetype)initWithEventBus:(id<BbnativesharedEventBusInterface> _Nullable)eventBus opts:(BbnativesharedEmbedObject * _Nullable)opts options:(NSDictionary<NSString *, id> * _Nullable)options __attribute__((swift_name("init(eventBus:opts:options:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedMsasControllerCompanion *companion __attribute__((swift_name("companion")));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (id _Nullable)getPropertyName:(NSString *)propertyName __attribute__((swift_name("get(propertyName:)")));
- (BOOL)loadPhase:(BbnativesharedPhase *)phase __attribute__((swift_name("load(phase:)")));
- (void)loadContentContent:(NSArray<BbnativesharedAdUnit *> * _Nullable)content __attribute__((swift_name("loadContent(content:)")));
- (void)onEventEventType:(BbnativesharedEventName *)eventType data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("onEvent(eventType:data:)")));
- (BOOL)pause __attribute__((swift_name("pause()")));
- (BOOL)playPhase:(BbnativesharedPhase *)phase shouldPause:(BOOL)shouldPause __attribute__((swift_name("play(phase:shouldPause:)")));
- (void)resetAdCounter_load __attribute__((swift_name("resetAdCounter_load()")));
- (BOOL)resume __attribute__((swift_name("resume()")));
- (BOOL)setPropertyName:(NSString *)propertyName propertyValue:(id _Nullable)propertyValue __attribute__((swift_name("set(propertyName:propertyValue:)")));
- (NSString *)test_preprocessVastUrlVastUrl:(NSString *)vastUrl __attribute__((swift_name("test_preprocessVastUrl(vastUrl:)")));
@property id<BbnativesharedAdControllerInterface> _Nullable adController __attribute__((swift_name("adController")));
@property id<BbnativesharedEventBusInterface> _Nullable eventBus __attribute__((swift_name("eventBus")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MsasController.Companion")))
@interface BbnativesharedMsasControllerCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedMsasControllerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProgramController")))
@interface BbnativesharedProgramController : BbnativesharedBase <BbnativesharedEventListenerInterface>
- (instancetype)initWithEventBus:(id<BbnativesharedEventBusInterface> _Nullable)eventBus __attribute__((swift_name("init(eventBus:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedProgramControllerCompanion *companion __attribute__((swift_name("companion")));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (BOOL)autoPlayNextCancel __attribute__((swift_name("autoPlayNextCancel()")));
- (void)autoPlayNextPause __attribute__((swift_name("autoPlayNextPause()")));
- (void)autoPlayNextProceed __attribute__((swift_name("autoPlayNextProceed()")));
- (void)autoPlayNextResume __attribute__((swift_name("autoPlayNextResume()")));
- (NSArray<id<BbnativesharedContentItemInterface>> *)getContentList __attribute__((swift_name("getContentList()")));
- (int32_t)getContentListIndex __attribute__((swift_name("getContentListIndex()")));
- (NSString * _Nullable)getFirstFrameUrlContent:(id<BbnativesharedContentItemInterface> _Nullable)content __attribute__((swift_name("getFirstFrameUrl(content:)")));
- (float)getPlaybackRate __attribute__((swift_name("getPlaybackRate()")));
- (NSString * _Nullable)getPosterUrlContent:(id<BbnativesharedContentItemInterface> _Nullable)content __attribute__((swift_name("getPosterUrl(content:)")));
- (NSString * _Nullable)getRawJsonString __attribute__((swift_name("getRawJsonString()")));
- (BbnativesharedState *)getState __attribute__((swift_name("getState()")));
- (void)loadAdServicesDataAdServicesData:(NSArray<BbnativesharedAdUnit *> *)adServicesData initiator:(NSString * _Nullable)initiator autoPlay:(BbnativesharedBoolean * _Nullable)autoPlay seekPosition:(id _Nullable)seekPosition __attribute__((swift_name("loadAdServicesData(adServicesData:initiator:autoPlay:seekPosition:)")));
- (void)loadContentContent:(id<BbnativesharedContentItemInterface>)content initiator:(NSString * _Nullable)initiator autoPlay:(BbnativesharedBoolean * _Nullable)autoPlay seekPosition:(id _Nullable)seekPosition listOffset:(BbnativesharedInt * _Nullable)listOffset __attribute__((swift_name("loadContent(content:initiator:autoPlay:seekPosition:listOffset:)")));
- (void)loadContentByIdContentId:(NSString *)contentId contentIndicator:(NSString * _Nullable)contentIndicator initiator:(NSString * _Nullable)initiator autoPlay:(BbnativesharedBoolean * _Nullable)autoPlay seekPosition:(id _Nullable)seekPosition listOffset:(BbnativesharedInt * _Nullable)listOffset __attribute__((swift_name("loadContentById(contentId:contentIndicator:initiator:autoPlay:seekPosition:listOffset:)")));
- (void)onEventEventType:(BbnativesharedEventName *)eventType data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("onEvent(eventType:data:)")));
- (void)pause __attribute__((swift_name("pause()")));
- (void)playUserAction:(BOOL)userAction __attribute__((swift_name("play(userAction:)")));
- (void)seekPositionInSeconds:(id)positionInSeconds relativeToCurrentTime:(BOOL)relativeToCurrentTime __attribute__((swift_name("seek(positionInSeconds:relativeToCurrentTime:)")));
- (void)setAudiotrackId:(NSString *)id __attribute__((swift_name("setAudiotrack(id:)")));
- (void)setPlaybackRateRate:(float)rate __attribute__((swift_name("setPlaybackRate(rate:)")));
- (void)setQualityIndex:(int32_t)index __attribute__((swift_name("setQuality(index:)")));
- (void)setSubtitleId:(NSString *)id __attribute__((swift_name("setSubtitle(id:)")));
- (void)setVideoTrackVideoTrackId:(NSString *)videoTrackId __attribute__((swift_name("setVideoTrack(videoTrackId:)")));
- (void)skipAd __attribute__((swift_name("skipAd()")));
- (void)spliceIntoContentListStart:(int32_t)start items:(NSArray<id<BbnativesharedContentItemInterface>> *)items __attribute__((swift_name("spliceIntoContentList(start:items:)")));
- (void)spliceOutoffContentListStart:(int32_t)start __attribute__((swift_name("spliceOutoffContentList(start:)")));
@property id<BbnativesharedAdControllerInterface> _Nullable adController __attribute__((swift_name("adController")));
@property BbnativesharedMediaClip * _Nullable clipData __attribute__((swift_name("clipData")));
@property NSString * _Nullable contentId __attribute__((swift_name("contentId")));
@property id<BbnativesharedEventBusInterface> _Nullable eventBus __attribute__((swift_name("eventBus")));
@property void (^ _Nullable listener)(BbnativesharedState *) __attribute__((swift_name("listener")));
@property id<BbnativesharedMediaControllerInterface> _Nullable mediaController __attribute__((swift_name("mediaController")));
@property id<BbnativesharedNetworkInterface> _Nullable network __attribute__((swift_name("network")));
@property id<BbnativesharedPosterControllerInterface> _Nullable posterController __attribute__((swift_name("posterController")));
@property NSArray<id<BbnativesharedContentItemInterface>> * _Nullable relatedItems __attribute__((swift_name("relatedItems")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProgramController.Companion")))
@interface BbnativesharedProgramControllerCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedProgramControllerCompanion *shared __attribute__((swift_name("shared")));
- (int32_t)assetCompareAudioAssetA:(BbnativesharedMediaAsset * _Nullable)assetA assetB:(BbnativesharedMediaAsset * _Nullable)assetB __attribute__((swift_name("assetCompareAudio(assetA:assetB:)")));
- (int32_t)assetCompareVisualAssetA:(BbnativesharedMediaAsset * _Nullable)assetA assetB:(BbnativesharedMediaAsset * _Nullable)assetB __attribute__((swift_name("assetCompareVisual(assetA:assetB:)")));
- (BOOL)assetIsExcludedAsset:(BbnativesharedMediaAsset * _Nullable)asset __attribute__((swift_name("assetIsExcluded(asset:)")));
- (NSString *)fakeModeClip:(BbnativesharedMediaClip * _Nullable)clip __attribute__((swift_name("fakeMode(clip:)")));
- (NSMutableArray<id<BbnativesharedContentItemInterface>> *)listSpliceTarget:(NSMutableArray<id<BbnativesharedContentItemInterface>> *)target position:(int32_t)position remove:(int32_t)remove items:(NSArray<id<BbnativesharedContentItemInterface>> *)items __attribute__((swift_name("listSplice(target:position:remove:items:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatsController")))
@interface BbnativesharedStatsController : BbnativesharedBase <BbnativesharedEventListenerInterface>
- (instancetype)initWithEventBus:(id<BbnativesharedEventBusInterface> _Nullable)eventBus network:(id<BbnativesharedNetworkInterface> _Nullable)network __attribute__((swift_name("init(eventBus:network:)"))) __attribute__((objc_designated_initializer));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (void)onEventEventType:(BbnativesharedEventName *)eventType data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("onEvent(eventType:data:)")));
@property id<BbnativesharedEventBusInterface> _Nullable eventBus __attribute__((swift_name("eventBus")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContentLoader")))
@interface BbnativesharedContentLoader : BbnativesharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BbnativesharedContentLoaderCompanion *companion __attribute__((swift_name("companion")));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (void)getContentFromJsonUrlJsonUrl:(NSString *)jsonUrl onSuccess:(void (^)(id<BbnativesharedContentItemInterface>))onSuccess onFailure:(void (^)(BbnativesharedKotlinException *))onFailure __attribute__((swift_name("getContentFromJsonUrl(jsonUrl:onSuccess:onFailure:)")));
- (void)getJsonStringFromUrlJsonUrl:(NSString *)jsonUrl onSuccess:(void (^)(NSString *))onSuccess onFailure:(void (^)(BbnativesharedKotlinException *))onFailure __attribute__((swift_name("getJsonStringFromUrl(jsonUrl:onSuccess:onFailure:)")));
- (void)getObjectFromJsonUrlJsonUrl:(NSString *)jsonUrl onSuccess:(void (^)(id _Nullable))onSuccess onFailure:(void (^)(BbnativesharedKotlinException *))onFailure __attribute__((swift_name("getObjectFromJsonUrl(jsonUrl:onSuccess:onFailure:)")));
@property (readonly) id<BbnativesharedKotlinx_coroutines_coreCoroutineScope> mainScope __attribute__((swift_name("mainScope")));
@property id<BbnativesharedNetworkInterface> _Nullable network __attribute__((swift_name("network")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContentLoader.Companion")))
@interface BbnativesharedContentLoaderCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedContentLoaderCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)fixDataInconsistenciesDataString:(NSString *)dataString __attribute__((swift_name("fixDataInconsistencies(dataString:)")));
- (BbnativesharedMediaClip * _Nullable)parseMediaClipJsonString:(NSString *)jsonString __attribute__((swift_name("parseMediaClip(jsonString:)")));
- (BbnativesharedMediaClipList * _Nullable)parseMediaClipListJsonString:(NSString *)jsonString __attribute__((swift_name("parseMediaClipList(jsonString:)")));
- (BbnativesharedProject * _Nullable)parseProjectJsonString:(NSString *)jsonString __attribute__((swift_name("parseProject(jsonString:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Language")))
@interface BbnativesharedLanguage : BbnativesharedBase
- (instancetype)initWithIso:(NSString * _Nullable)iso translations:(BbnativesharedMutableDictionary<NSString *, NSString *> *)translations __attribute__((swift_name("init(iso:translations:)"))) __attribute__((objc_designated_initializer));
- (BbnativesharedLanguage *)doCopyIso:(NSString * _Nullable)iso translations:(BbnativesharedMutableDictionary<NSString *, NSString *> *)translations __attribute__((swift_name("doCopy(iso:translations:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable iso __attribute__((swift_name("iso")));
@property BbnativesharedMutableDictionary<NSString *, NSString *> *translations __attribute__((swift_name("translations")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Languages")))
@interface BbnativesharedLanguages : BbnativesharedBase
@property (class, readonly, getter=companion) BbnativesharedLanguagesCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)translateIso:(NSString *)iso text:(NSString *)text __attribute__((swift_name("translate(iso:text:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Languages.Companion")))
@interface BbnativesharedLanguagesCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedLanguagesCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)translateIso:(NSString *)iso text:(NSString *)text __attribute__((swift_name("translate(iso:text:)")));
@property (readonly) BbnativesharedLanguages *instance __attribute__((swift_name("instance")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol BbnativesharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface BbnativesharedKotlinEnum<E> : BbnativesharedBase <BbnativesharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiMethod")))
@interface BbnativesharedApiMethod : BbnativesharedKotlinEnum<BbnativesharedApiMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BbnativesharedApiMethod *load_ __attribute__((swift_name("load_")));
@property (class, readonly) BbnativesharedApiMethod *play __attribute__((swift_name("play")));
@property (class, readonly) BbnativesharedApiMethod *pause __attribute__((swift_name("pause")));
@property (class, readonly) BbnativesharedApiMethod *seek __attribute__((swift_name("seek")));
@property (class, readonly) BbnativesharedApiMethod *autoplaynextcancel __attribute__((swift_name("autoplaynextcancel")));
@property (class, readonly) BbnativesharedApiMethod *collapse __attribute__((swift_name("collapse")));
@property (class, readonly) BbnativesharedApiMethod *expand __attribute__((swift_name("expand")));
@property (class, readonly) BbnativesharedApiMethod *enterfullscreen __attribute__((swift_name("enterfullscreen")));
@property (class, readonly) BbnativesharedApiMethod *exitfullscreen __attribute__((swift_name("exitfullscreen")));
@property (class, readonly) BbnativesharedApiMethod *handlewidgetevent __attribute__((swift_name("handlewidgetevent")));
+ (BbnativesharedKotlinArray<BbnativesharedApiMethod *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiProperty")))
@interface BbnativesharedApiProperty : BbnativesharedKotlinEnum<BbnativesharedApiProperty *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BbnativesharedApiProperty *phase __attribute__((swift_name("phase")));
@property (class, readonly) BbnativesharedApiProperty *state __attribute__((swift_name("state")));
@property (class, readonly) BbnativesharedApiProperty *mode __attribute__((swift_name("mode")));
@property (class, readonly) BbnativesharedApiProperty *playoutdata __attribute__((swift_name("playoutdata")));
@property (class, readonly) BbnativesharedApiProperty *projectdata __attribute__((swift_name("projectdata")));
@property (class, readonly) BbnativesharedApiProperty *clipdata __attribute__((swift_name("clipdata")));
@property (class, readonly) BbnativesharedApiProperty *relateditems __attribute__((swift_name("relateditems")));
@property (class, readonly) BbnativesharedApiProperty *volume __attribute__((swift_name("volume")));
@property (class, readonly) BbnativesharedApiProperty *muted __attribute__((swift_name("muted")));
@property (class, readonly) BbnativesharedApiProperty *controls __attribute__((swift_name("controls")));
@property (class, readonly) BbnativesharedApiProperty *duration __attribute__((swift_name("duration")));
@property (class, readonly) BbnativesharedApiProperty *admediawidth __attribute__((swift_name("admediawidth")));
@property (class, readonly) BbnativesharedApiProperty *admediaheight __attribute__((swift_name("admediaheight")));
@property (class, readonly) BbnativesharedApiProperty *inview __attribute__((swift_name("inview")));
+ (BbnativesharedKotlinArray<BbnativesharedApiProperty *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventName")))
@interface BbnativesharedEventName : BbnativesharedKotlinEnum<BbnativesharedEventName *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BbnativesharedEventName *bbEmbedLoaded __attribute__((swift_name("bbEmbedLoaded")));
@property (class, readonly) BbnativesharedEventName *bbEmbedFailed __attribute__((swift_name("bbEmbedFailed")));
@property (class, readonly) BbnativesharedEventName *bbPlayoutChanged __attribute__((swift_name("bbPlayoutChanged")));
@property (class, readonly) BbnativesharedEventName *bbProjectLoaded __attribute__((swift_name("bbProjectLoaded")));
@property (class, readonly) BbnativesharedEventName *bbCliplistLoaded __attribute__((swift_name("bbCliplistLoaded")));
@property (class, readonly) BbnativesharedEventName *bbCliplistChanged __attribute__((swift_name("bbCliplistChanged")));
@property (class, readonly) BbnativesharedEventName *bbMediaclipLoaded __attribute__((swift_name("bbMediaclipLoaded")));
@property (class, readonly) BbnativesharedEventName *bbMediaclipFailed __attribute__((swift_name("bbMediaclipFailed")));
@property (class, readonly) BbnativesharedEventName *bbProgramAutopause __attribute__((swift_name("bbProgramAutopause")));
@property (class, readonly) BbnativesharedEventName *bbProgramAutopauseplay __attribute__((swift_name("bbProgramAutopauseplay")));
@property (class, readonly) BbnativesharedEventName *bbProgramPlay __attribute__((swift_name("bbProgramPlay")));
@property (class, readonly) BbnativesharedEventName *bbFullscreenChange __attribute__((swift_name("bbFullscreenChange")));
@property (class, readonly) BbnativesharedEventName *bbError __attribute__((swift_name("bbError")));
@property (class, readonly) BbnativesharedEventName *bbWarning __attribute__((swift_name("bbWarning")));
@property (class, readonly) BbnativesharedEventName *bbHeadSelected __attribute__((swift_name("bbHeadSelected")));
@property (class, readonly) BbnativesharedEventName *bbCommercialHeadSelected __attribute__((swift_name("bbCommercialHeadSelected")));
@property (class, readonly) BbnativesharedEventName *bbAssetsChanged __attribute__((swift_name("bbAssetsChanged")));
@property (class, readonly) BbnativesharedEventName *bbAssetSelected __attribute__((swift_name("bbAssetSelected")));
@property (class, readonly) BbnativesharedEventName *bbMediaStarted __attribute__((swift_name("bbMediaStarted")));
@property (class, readonly) BbnativesharedEventName *bbMediaFinished __attribute__((swift_name("bbMediaFinished")));
@property (class, readonly) BbnativesharedEventName *bbMediaPaused __attribute__((swift_name("bbMediaPaused")));
@property (class, readonly) BbnativesharedEventName *bbMediaPlay __attribute__((swift_name("bbMediaPlay")));
@property (class, readonly) BbnativesharedEventName *bbMediaPlaying __attribute__((swift_name("bbMediaPlaying")));
@property (class, readonly) BbnativesharedEventName *bbMediaFailed __attribute__((swift_name("bbMediaFailed")));
@property (class, readonly) BbnativesharedEventName *bbMediaResumed __attribute__((swift_name("bbMediaResumed")));
@property (class, readonly) BbnativesharedEventName *bbMediaSeeking __attribute__((swift_name("bbMediaSeeking")));
@property (class, readonly) BbnativesharedEventName *bbMediaSeeked __attribute__((swift_name("bbMediaSeeked")));
@property (class, readonly) BbnativesharedEventName *bbMediaStalled __attribute__((swift_name("bbMediaStalled")));
@property (class, readonly) BbnativesharedEventName *bbMediaProgress __attribute__((swift_name("bbMediaProgress")));
@property (class, readonly) BbnativesharedEventName *bbMediaPlaybackRateChange __attribute__((swift_name("bbMediaPlaybackRateChange")));
@property (class, readonly) BbnativesharedEventName *bbMediaLoadstart __attribute__((swift_name("bbMediaLoadstart")));
@property (class, readonly) BbnativesharedEventName *bbMediaCanplay __attribute__((swift_name("bbMediaCanplay")));
@property (class, readonly) BbnativesharedEventName *bbMediaDurationChange __attribute__((swift_name("bbMediaDurationChange")));
@property (class, readonly) BbnativesharedEventName *bbMediaTimeupdate __attribute__((swift_name("bbMediaTimeupdate")));
@property (class, readonly) BbnativesharedEventName *bbMediaCastInfo __attribute__((swift_name("bbMediaCastInfo")));
@property (class, readonly) BbnativesharedEventName *bbMediaCastStart __attribute__((swift_name("bbMediaCastStart")));
@property (class, readonly) BbnativesharedEventName *bbMsasPreFinished __attribute__((swift_name("bbMsasPreFinished")));
@property (class, readonly) BbnativesharedEventName *bbMsasMainFinished __attribute__((swift_name("bbMsasMainFinished")));
@property (class, readonly) BbnativesharedEventName *bbMsasPostFinished __attribute__((swift_name("bbMsasPostFinished")));
@property (class, readonly) BbnativesharedEventName *bbWidgetShown __attribute__((swift_name("bbWidgetShown")));
@property (class, readonly) BbnativesharedEventName *bbWidgetClicked __attribute__((swift_name("bbWidgetClicked")));
@property (class, readonly) BbnativesharedEventName *bbWidgetCustomAnalytics __attribute__((swift_name("bbWidgetCustomAnalytics")));
@property (class, readonly) BbnativesharedEventName *bbAdunitInitialized __attribute__((swift_name("bbAdunitInitialized")));
@property (class, readonly) BbnativesharedEventName *bbAdunitFailed __attribute__((swift_name("bbAdunitFailed")));
@property (class, readonly) BbnativesharedEventName *bbInview __attribute__((swift_name("bbInview")));
@property (class, readonly) BbnativesharedEventName *bbOutview __attribute__((swift_name("bbOutview")));
@property (class, readonly) BbnativesharedEventName *bbAdsystemInitialized __attribute__((swift_name("bbAdsystemInitialized")));
@property (class, readonly) BbnativesharedEventName *bbAdsystemLoadstart __attribute__((swift_name("bbAdsystemLoadstart")));
@property (class, readonly) BbnativesharedEventName *bbAdsystemLoaded __attribute__((swift_name("bbAdsystemLoaded")));
@property (class, readonly) BbnativesharedEventName *bbAdsystemBlocked __attribute__((swift_name("bbAdsystemBlocked")));
@property (class, readonly) BbnativesharedEventName *bbAdsystemCanplay __attribute__((swift_name("bbAdsystemCanplay")));
@property (class, readonly) BbnativesharedEventName *bbAdsystemStarted __attribute__((swift_name("bbAdsystemStarted")));
@property (class, readonly) BbnativesharedEventName *bbAdsystemClicked __attribute__((swift_name("bbAdsystemClicked")));
@property (class, readonly) BbnativesharedEventName *bbAdsystemSkipped __attribute__((swift_name("bbAdsystemSkipped")));
@property (class, readonly) BbnativesharedEventName *bbAdsystemNoad __attribute__((swift_name("bbAdsystemNoad")));
@property (class, readonly) BbnativesharedEventName *bbAdsystemFailed __attribute__((swift_name("bbAdsystemFailed")));
@property (class, readonly) BbnativesharedEventName *bbAdsystemFinished __attribute__((swift_name("bbAdsystemFinished")));
@property (class, readonly) BbnativesharedEventName *bbAdsystemQuartile __attribute__((swift_name("bbAdsystemQuartile")));
@property (class, readonly) BbnativesharedEventName *bbViewStarted __attribute__((swift_name("bbViewStarted")));
@property (class, readonly) BbnativesharedEventName *bbViewFinished __attribute__((swift_name("bbViewFinished")));
@property (class, readonly) BbnativesharedEventName *bbPhaseChange __attribute__((swift_name("bbPhaseChange")));
@property (class, readonly) BbnativesharedEventName *bbStateChange __attribute__((swift_name("bbStateChange")));
@property (class, readonly) BbnativesharedEventName *bbModeChange __attribute__((swift_name("bbModeChange")));
@property (class, readonly) BbnativesharedEventName *bbApiCalled __attribute__((swift_name("bbApiCalled")));
@property (class, readonly) BbnativesharedEventName *bbApiReady __attribute__((swift_name("bbApiReady")));
@property (class, readonly) BbnativesharedEventName *bbDvidChanged __attribute__((swift_name("bbDvidChanged")));
@property (class, readonly) BbnativesharedEventName *bbMovingthumbnailStarted __attribute__((swift_name("bbMovingthumbnailStarted")));
@property (class, readonly) BbnativesharedEventName *bbAdblockDetectionFinished __attribute__((swift_name("bbAdblockDetectionFinished")));
@property (class, readonly) BbnativesharedEventName *bbAutoplaynexttimerStarted __attribute__((swift_name("bbAutoplaynexttimerStarted")));
@property (class, readonly) BbnativesharedEventName *bbAutoplaynexttimerCancelled __attribute__((swift_name("bbAutoplaynexttimerCancelled")));
@property (class, readonly) BbnativesharedEventName *bbAutoplaynexttimerResumed __attribute__((swift_name("bbAutoplaynexttimerResumed")));
@property (class, readonly) BbnativesharedEventName *bbAutoplaynexttimerPaused __attribute__((swift_name("bbAutoplaynexttimerPaused")));
@property (class, readonly) BbnativesharedEventName *bbAutoplaynexttimerFinished __attribute__((swift_name("bbAutoplaynexttimerFinished")));
@property (class, readonly) BbnativesharedEventName *bbAutoplaynexttimerTick __attribute__((swift_name("bbAutoplaynexttimerTick")));
@property (class, readonly) BbnativesharedEventName *bbAutoplaynextItem __attribute__((swift_name("bbAutoplaynextItem")));
@property (class, readonly) BbnativesharedEventName *bbSoftembargotimerStarted __attribute__((swift_name("bbSoftembargotimerStarted")));
@property (class, readonly) BbnativesharedEventName *bbSoftembargotimerCancelled __attribute__((swift_name("bbSoftembargotimerCancelled")));
@property (class, readonly) BbnativesharedEventName *bbSoftembargotimerFinished __attribute__((swift_name("bbSoftembargotimerFinished")));
@property (class, readonly) BbnativesharedEventName *bbSoftembargotimerTick __attribute__((swift_name("bbSoftembargotimerTick")));
@property (class, readonly) BbnativesharedEventName *bbRelatedClipsChanged __attribute__((swift_name("bbRelatedClipsChanged")));
@property (class, readonly) BbnativesharedEventName *bbResized __attribute__((swift_name("bbResized")));
@property (class, readonly) BbnativesharedEventName *bbMasterMute __attribute__((swift_name("bbMasterMute")));
@property (class, readonly) BbnativesharedEventName *bbMasterUnmute __attribute__((swift_name("bbMasterUnmute")));
@property (class, readonly) BbnativesharedEventName *bbMasterVolume __attribute__((swift_name("bbMasterVolume")));
@property (class, readonly) BbnativesharedEventName *bbImaLoadFailed __attribute__((swift_name("bbImaLoadFailed")));
@property (class, readonly) BbnativesharedEventName *loadstart __attribute__((swift_name("loadstart")));
@property (class, readonly) BbnativesharedEventName *durationchange __attribute__((swift_name("durationchange")));
@property (class, readonly) BbnativesharedEventName *canplay __attribute__((swift_name("canplay")));
@property (class, readonly) BbnativesharedEventName *playing __attribute__((swift_name("playing")));
@property (class, readonly) BbnativesharedEventName *pause __attribute__((swift_name("pause")));
@property (class, readonly) BbnativesharedEventName *ended __attribute__((swift_name("ended")));
@property (class, readonly) BbnativesharedEventName *fullscreen __attribute__((swift_name("fullscreen")));
@property (class, readonly) BbnativesharedEventName *retractfullscreen __attribute__((swift_name("retractfullscreen")));
@property (class, readonly) BbnativesharedEventName *bbRequestCollapse __attribute__((swift_name("bbRequestCollapse")));
@property (class, readonly) BbnativesharedEventName *bbRequestExpand __attribute__((swift_name("bbRequestExpand")));
@property (class, readonly) BbnativesharedEventName *bbAsInitialized __attribute__((swift_name("bbAsInitialized")));
@property (class, readonly) BbnativesharedEventName *bbAsPlacementFailed __attribute__((swift_name("bbAsPlacementFailed")));
@property (class, readonly) BbnativesharedEventName *bbAsLoadstart __attribute__((swift_name("bbAsLoadstart")));
@property (class, readonly) BbnativesharedEventName *bbAsItemLoaded __attribute__((swift_name("bbAsItemLoaded")));
@property (class, readonly) BbnativesharedEventName *bbAsItemBlocked __attribute__((swift_name("bbAsItemBlocked")));
@property (class, readonly) BbnativesharedEventName *bbAsItemCanplay __attribute__((swift_name("bbAsItemCanplay")));
@property (class, readonly) BbnativesharedEventName *bbAsStarted __attribute__((swift_name("bbAsStarted")));
@property (class, readonly) BbnativesharedEventName *bbAsAdClicked __attribute__((swift_name("bbAsAdClicked")));
@property (class, readonly) BbnativesharedEventName *bbAsItemSkipped __attribute__((swift_name("bbAsItemSkipped")));
@property (class, readonly) BbnativesharedEventName *bbAsItemNoad __attribute__((swift_name("bbAsItemNoad")));
@property (class, readonly) BbnativesharedEventName *bbAsItemFailed __attribute__((swift_name("bbAsItemFailed")));
@property (class, readonly) BbnativesharedEventName *bbAsFinished __attribute__((swift_name("bbAsFinished")));
@property (class, readonly) BbnativesharedEventName *bbAsAdQuartile __attribute__((swift_name("bbAsAdQuartile")));
@property (class, readonly) BbnativesharedEventName *bbAsPreFinished __attribute__((swift_name("bbAsPreFinished")));
@property (class, readonly) BbnativesharedEventName *bbAsMainFinished __attribute__((swift_name("bbAsMainFinished")));
@property (class, readonly) BbnativesharedEventName *bbAsPostFinished __attribute__((swift_name("bbAsPostFinished")));
@property (class, readonly) BbnativesharedEventName *requestopenurl __attribute__((swift_name("requestopenurl")));
@property (class, readonly) BbnativesharedEventName *customstatistics __attribute__((swift_name("customstatistics")));
@property (class, readonly) BbnativesharedEventName *adinitialized __attribute__((swift_name("adinitialized")));
@property (class, readonly) BbnativesharedEventName *adfailed __attribute__((swift_name("adfailed")));
@property (class, readonly) BbnativesharedEventName *adnoad __attribute__((swift_name("adnoad")));
@property (class, readonly) BbnativesharedEventName *adloaded __attribute__((swift_name("adloaded")));
@property (class, readonly) BbnativesharedEventName *adcanplay __attribute__((swift_name("adcanplay")));
@property (class, readonly) BbnativesharedEventName *adclicked __attribute__((swift_name("adclicked")));
@property (class, readonly) BbnativesharedEventName *adskipped __attribute__((swift_name("adskipped")));
@property (class, readonly) BbnativesharedEventName *adfirstquartile __attribute__((swift_name("adfirstquartile")));
@property (class, readonly) BbnativesharedEventName *admidpoint __attribute__((swift_name("admidpoint")));
@property (class, readonly) BbnativesharedEventName *adthirdquartile __attribute__((swift_name("adthirdquartile")));
@property (class, readonly) BbnativesharedEventName *adcontentpausereq __attribute__((swift_name("adcontentpausereq")));
@property (class, readonly) BbnativesharedEventName *adcontentresumereq __attribute__((swift_name("adcontentresumereq")));
@property (class, readonly) BbnativesharedEventName *adstarted __attribute__((swift_name("adstarted")));
@property (class, readonly) BbnativesharedEventName *adcomplete __attribute__((swift_name("adcomplete")));
@property (class, readonly) BbnativesharedEventName *alladscompleted __attribute__((swift_name("alladscompleted")));
@property (class, readonly) BbnativesharedEventName *adpaused __attribute__((swift_name("adpaused")));
@property (class, readonly) BbnativesharedEventName *adresumed __attribute__((swift_name("adresumed")));
@property (class, readonly) BbnativesharedEventName *adprogress __attribute__((swift_name("adprogress")));
@property (class, readonly) BbnativesharedEventName *audiotrackschanged __attribute__((swift_name("audiotrackschanged")));
@property (class, readonly) BbnativesharedEventName *subtitletrackschanged __attribute__((swift_name("subtitletrackschanged")));
@property (class, readonly) BbnativesharedEventName *qualitytrackschanged __attribute__((swift_name("qualitytrackschanged")));
@property (class, readonly) BbnativesharedEventName *subtitletrackchanged __attribute__((swift_name("subtitletrackchanged")));
@property (class, readonly) BbnativesharedEventName *playbackspeedchanged __attribute__((swift_name("playbackspeedchanged")));
+ (BbnativesharedKotlinArray<BbnativesharedEventName *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FitMode")))
@interface BbnativesharedFitMode : BbnativesharedKotlinEnum<BbnativesharedFitMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BbnativesharedFitMode *fitSmart __attribute__((swift_name("fitSmart")));
@property (class, readonly) BbnativesharedFitMode *fitNative __attribute__((swift_name("fitNative")));
@property (class, readonly) BbnativesharedFitMode *fitVertical __attribute__((swift_name("fitVertical")));
@property (class, readonly) BbnativesharedFitMode *fitHorizontal __attribute__((swift_name("fitHorizontal")));
@property (class, readonly) BbnativesharedFitMode *fitBoth __attribute__((swift_name("fitBoth")));
@property (class, readonly) BbnativesharedFitMode *fitStretch __attribute__((swift_name("fitStretch")));
@property (class, readonly) BbnativesharedFitMode *fitOverscan __attribute__((swift_name("fitOverscan")));
+ (BbnativesharedKotlinArray<BbnativesharedFitMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Phase")))
@interface BbnativesharedPhase : BbnativesharedKotlinEnum<BbnativesharedPhase *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BbnativesharedPhase *theInit __attribute__((swift_name("theInit")));
@property (class, readonly) BbnativesharedPhase *pre __attribute__((swift_name("pre")));
@property (class, readonly) BbnativesharedPhase *main __attribute__((swift_name("main")));
@property (class, readonly) BbnativesharedPhase *post __attribute__((swift_name("post")));
@property (class, readonly) BbnativesharedPhase *exit __attribute__((swift_name("exit")));
+ (BbnativesharedKotlinArray<BbnativesharedPhase *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PosType")))
@interface BbnativesharedPosType : BbnativesharedKotlinEnum<BbnativesharedPosType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BbnativesharedPosType *preroll __attribute__((swift_name("preroll")));
@property (class, readonly) BbnativesharedPosType *leader __attribute__((swift_name("leader")));
@property (class, readonly) BbnativesharedPosType *inarticle __attribute__((swift_name("inarticle")));
@property (class, readonly) BbnativesharedPosType *vmap __attribute__((swift_name("vmap")));
@property (class, readonly) BbnativesharedPosType *midroll __attribute__((swift_name("midroll")));
@property (class, readonly) BbnativesharedPosType *overlay __attribute__((swift_name("overlay")));
@property (class, readonly) BbnativesharedPosType *postroll __attribute__((swift_name("postroll")));
@property (class, readonly) BbnativesharedPosType *exitscreen __attribute__((swift_name("exitscreen")));
+ (BbnativesharedKotlinArray<BbnativesharedPosType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State")))
@interface BbnativesharedState : BbnativesharedKotlinEnum<BbnativesharedState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BbnativesharedState *idle __attribute__((swift_name("idle")));
@property (class, readonly) BbnativesharedState *loading __attribute__((swift_name("loading")));
@property (class, readonly) BbnativesharedState *paused __attribute__((swift_name("paused")));
@property (class, readonly) BbnativesharedState *playing __attribute__((swift_name("playing")));
@property (class, readonly) BbnativesharedState *error __attribute__((swift_name("error")));
+ (BbnativesharedKotlinArray<BbnativesharedState *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("AdControllerInterface")))
@protocol BbnativesharedAdControllerInterface
@required
- (id _Nullable)getPropertyName:(NSString *)propertyName __attribute__((swift_name("get(propertyName:)")));
- (BOOL)loadAdTagUrlVastUrl:(NSString * _Nullable)vastUrl position:(BbnativesharedPosType *)position __attribute__((swift_name("loadAdTagUrl(vastUrl:position:)")));
- (BOOL)loadAdsResponseResponseXML:(NSString * _Nullable)responseXML position:(BbnativesharedPosType *)position __attribute__((swift_name("loadAdsResponse(responseXML:position:)")));
- (BOOL)pause __attribute__((swift_name("pause()")));
- (BOOL)play __attribute__((swift_name("play()")));
- (BOOL)setPropertyName:(NSString *)propertyName propertyValue:(id _Nullable)propertyValue __attribute__((swift_name("set(propertyName:propertyValue:)")));
- (void)skipAd __attribute__((swift_name("skipAd()")));
@end

__attribute__((swift_name("ContentItemInterface")))
@protocol BbnativesharedContentItemInterface
@required
@property (readonly) NSString * _Nullable deeplink __attribute__((swift_name("deeplink")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((swift_name("EventBusInterface")))
@protocol BbnativesharedEventBusInterface
@required
- (void)addEventlistenerListener:(id<BbnativesharedEventListenerInterface>)listener __attribute__((swift_name("addEventlistener(listener:)")));
- (void)removeEventlistenerListener:(id<BbnativesharedEventListenerInterface>)listener __attribute__((swift_name("removeEventlistener(listener:)")));
- (void)triggerEventType:(BbnativesharedEventName *)eventType __attribute__((swift_name("trigger(eventType:)")));
- (void)triggerEventType:(BbnativesharedEventName *)eventType data:(NSDictionary<NSString *, id> *)data __attribute__((swift_name("trigger(eventType:data:)")));
@property NSMutableArray<id<BbnativesharedEventListenerInterface>> *listeners __attribute__((swift_name("listeners")));
@end

__attribute__((swift_name("MediaControllerInterface")))
@protocol BbnativesharedMediaControllerInterface
@required
- (id _Nullable)getPropertyName:(NSString *)propertyName __attribute__((swift_name("get(propertyName:)")));
- (BOOL)loadMediaUrl:(NSString * _Nullable)mediaUrl seekPosition:(id _Nullable)seekPosition metadata:(NSDictionary<NSString *, id> * _Nullable)metadata __attribute__((swift_name("load(mediaUrl:seekPosition:metadata:)")));
- (BOOL)pauseRequested:(BOOL)requested __attribute__((swift_name("pause(requested:)")));
- (BOOL)playUserAction:(BOOL)userAction requested:(BOOL)requested __attribute__((swift_name("play(userAction:requested:)")));
- (BOOL)setPropertyName:(NSString *)propertyName propertyValue:(id _Nullable)propertyValue __attribute__((swift_name("set(propertyName:propertyValue:)")));
- (BOOL)setAudiotrackId:(NSString *)id __attribute__((swift_name("setAudiotrack(id:)")));
- (BOOL)setQualityIndex:(int32_t)index __attribute__((swift_name("setQuality(index:)")));
- (BOOL)setSubtitleId:(NSString *)id __attribute__((swift_name("setSubtitle(id:)")));
- (BOOL)setVideoTrackVideoTrackId:(NSString *)videoTrackId __attribute__((swift_name("setVideoTrack(videoTrackId:)")));
- (void)subtitlesOff __attribute__((swift_name("subtitlesOff()")));
- (void)subtitlesOn __attribute__((swift_name("subtitlesOn()")));
@end

__attribute__((swift_name("NetworkInterface")))
@protocol BbnativesharedNetworkInterface
@required
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (void)getJsonStringJsonUrl:(NSString *)jsonUrl onSuccess:(void (^)(NSString *))onSuccess onFailure:(void (^)(BbnativesharedBoolean *))onFailure __attribute__((swift_name("getJsonString(jsonUrl:onSuccess:onFailure:)")));
- (void)logStatsUrl:(NSString *)url onSuccess:(void (^)(void))onSuccess onFailure:(void (^)(BbnativesharedBoolean *))onFailure __attribute__((swift_name("logStats(url:onSuccess:onFailure:)")));
@end

__attribute__((swift_name("PosterControllerInterface")))
@protocol BbnativesharedPosterControllerInterface
@required
- (BOOL)hide __attribute__((swift_name("hide()")));
- (BOOL)loadPosterUrl:(NSString * _Nullable)posterUrl posterMediaType:(NSString * _Nullable)posterMediaType __attribute__((swift_name("load(posterUrl:posterMediaType:)")));
- (BOOL)show __attribute__((swift_name("show()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol BbnativesharedKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<BbnativesharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("BlueBillywigLogger")))
@interface BbnativesharedBlueBillywigLogger : BbnativesharedBase <BbnativesharedEventListenerInterface, BbnativesharedKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithEventBus:(id<BbnativesharedEventBusInterface> _Nullable)eventBus network:(id<BbnativesharedNetworkInterface> _Nullable)network __attribute__((swift_name("init(eventBus:network:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventBus:(id<BbnativesharedEventBusInterface> _Nullable)eventBus network:(id<BbnativesharedNetworkInterface> _Nullable)network mainDispatcher:(BbnativesharedKotlinx_coroutines_coreCoroutineDispatcher *)mainDispatcher __attribute__((swift_name("init(eventBus:network:mainDispatcher:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedBlueBillywigLoggerCompanion *companion __attribute__((swift_name("companion")));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (void)disable __attribute__((swift_name("disable()")));
- (void)enable __attribute__((swift_name("enable()")));
- (void)handleAutoPause __attribute__((swift_name("handleAutoPause()")));
- (void)ingestOptsOpts:(BbnativesharedEmbedObject * _Nullable)opts __attribute__((swift_name("ingestOpts(opts:)")));
- (void)logMediaClipEventEvent:(NSString *)event aux:(NSDictionary<NSString *, NSString *> *)aux __attribute__((swift_name("logMediaClipEvent(event:aux:)")));
- (void)onClipDataLoadedEventType:(BbnativesharedEventName *)eventType payload:(NSDictionary<NSString *, id> * _Nullable)payload __attribute__((swift_name("onClipDataLoaded(eventType:payload:)")));
- (void)onEventEventType:(BbnativesharedEventName *)eventType data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("onEvent(eventType:data:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property BbnativesharedMutableDictionary<NSString *, id<BbnativesharedKotlinx_coroutines_coreMutableStateFlow>> *_debouncedEventListMap __attribute__((swift_name("_debouncedEventListMap")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property NSMutableArray<BbnativesharedMutableDictionary<NSString *, NSString *> *> *_enabledQueue __attribute__((swift_name("_enabledQueue")));
@property (readonly) id<BbnativesharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<BbnativesharedEventBusInterface> _Nullable eventBus __attribute__((swift_name("eventBus")));
@property (readonly) id<BbnativesharedKotlinx_coroutines_coreCompletableJob> job __attribute__((swift_name("job")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlueBillywigLogger.Companion")))
@interface BbnativesharedBlueBillywigLoggerCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedBlueBillywigLoggerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomStatistics")))
@interface BbnativesharedCustomStatistics : BbnativesharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (void)sendIdent:(NSString *)ident ev:(NSString *)ev aux:(NSDictionary<NSString *, NSString *> *)aux __attribute__((swift_name("send(ident:ev:aux:)")));
@property id<BbnativesharedEventBusInterface> _Nullable eventBus __attribute__((swift_name("eventBus")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Action")))
@interface BbnativesharedAction : BbnativesharedBase
- (instancetype)initWithId:(NSString * _Nullable)id entity:(NSString * _Nullable)entity command:(NSString * _Nullable)command parameters:(NSArray<BbnativesharedParameter *> * _Nullable)parameters __attribute__((swift_name("init(id:entity:command:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedActionCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedAction *)doCopyId:(NSString * _Nullable)id entity:(NSString * _Nullable)entity command:(NSString * _Nullable)command parameters:(NSArray<BbnativesharedParameter *> * _Nullable)parameters __attribute__((swift_name("doCopy(id:entity:command:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable command __attribute__((swift_name("command")));
@property (readonly) NSString * _Nullable entity __attribute__((swift_name("entity")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSArray<BbnativesharedParameter *> * _Nullable parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Action.Companion")))
@interface BbnativesharedActionCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedActionCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdSchedulingData")))
@interface BbnativesharedAdSchedulingData : BbnativesharedBase
- (instancetype)initWithScheduleId:(BbnativesharedInt * _Nullable)scheduleId scheduleCode:(NSString * _Nullable)scheduleCode macros:(NSDictionary<NSString *, BbnativesharedKotlinArray<NSString *> *> * _Nullable)macros __attribute__((swift_name("init(scheduleId:scheduleCode:macros:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedAdSchedulingDataCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedAdSchedulingData *)doCopyScheduleId:(BbnativesharedInt * _Nullable)scheduleId scheduleCode:(NSString * _Nullable)scheduleCode macros:(NSDictionary<NSString *, BbnativesharedKotlinArray<NSString *> *> * _Nullable)macros __attribute__((swift_name("doCopy(scheduleId:scheduleCode:macros:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, BbnativesharedKotlinArray<NSString *> *> * _Nullable macros __attribute__((swift_name("macros")));
@property (readonly) NSString * _Nullable scheduleCode __attribute__((swift_name("scheduleCode")));
@property (readonly) BbnativesharedInt * _Nullable scheduleId __attribute__((swift_name("scheduleId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdSchedulingData.Companion")))
@interface BbnativesharedAdSchedulingDataCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedAdSchedulingDataCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdUnit")))
@interface BbnativesharedAdUnit : BbnativesharedBase
- (instancetype)initWithId:(NSString *)id playout:(BbnativesharedPlayout * _Nullable)playout positionType:(NSString * _Nullable)positionType code:(NSString * _Nullable)code lineitems:(NSArray<BbnativesharedLineItem_ *> * _Nullable)lineitems __attribute__((swift_name("init(id:playout:positionType:code:lineitems:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString * _Nullable)id type:(NSString * _Nullable)type status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate createdBy:(NSString * _Nullable)createdBy updateddate:(NSString * _Nullable)updateddate updatedBy:(NSString * _Nullable)updatedBy playout:(BbnativesharedPlayout * _Nullable)playout positionType:(NSString * _Nullable)positionType positionDisplayType:(NSString * _Nullable)positionDisplayType playoutCode:(NSString * _Nullable)playoutCode title:(NSString * _Nullable)title code:(NSString * _Nullable)code assignedLineitems:(NSArray<NSString *> * _Nullable)assignedLineitems label:(NSString * _Nullable)label lineitems:(NSArray<BbnativesharedLineItem_ *> * _Nullable)lineitems __attribute__((swift_name("init(id:type:status:createddate:createdBy:updateddate:updatedBy:playout:positionType:positionDisplayType:playoutCode:title:code:assignedLineitems:label:lineitems:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedAdUnitCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedAdUnit *)doCopyId:(NSString * _Nullable)id type:(NSString * _Nullable)type status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate createdBy:(NSString * _Nullable)createdBy updateddate:(NSString * _Nullable)updateddate updatedBy:(NSString * _Nullable)updatedBy playout:(BbnativesharedPlayout * _Nullable)playout positionType:(NSString * _Nullable)positionType positionDisplayType:(NSString * _Nullable)positionDisplayType playoutCode:(NSString * _Nullable)playoutCode title:(NSString * _Nullable)title code:(NSString * _Nullable)code assignedLineitems:(NSArray<NSString *> * _Nullable)assignedLineitems label:(NSString * _Nullable)label lineitems:(NSArray<BbnativesharedLineItem_ *> * _Nullable)lineitems __attribute__((swift_name("doCopy(id:type:status:createddate:createdBy:updateddate:updatedBy:playout:positionType:positionDisplayType:playoutCode:title:code:assignedLineitems:label:lineitems:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<NSString *> * _Nullable assignedLineitems __attribute__((swift_name("assignedLineitems")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable createdBy __attribute__((swift_name("createdBy")));
@property (readonly) NSString * _Nullable createddate __attribute__((swift_name("createddate")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property NSArray<BbnativesharedLineItem_ *> * _Nullable lineitems __attribute__((swift_name("lineitems")));
@property (readonly) BbnativesharedPlayout * _Nullable playout __attribute__((swift_name("playout")));
@property (readonly) NSString * _Nullable playoutCode __attribute__((swift_name("playoutCode")));
@property (readonly) NSString * _Nullable positionDisplayType __attribute__((swift_name("positionDisplayType")));
@property (readonly) NSString * _Nullable positionType __attribute__((swift_name("positionType")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable updatedBy __attribute__((swift_name("updatedBy")));
@property (readonly) NSString * _Nullable updateddate __attribute__((swift_name("updateddate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdUnit.Companion")))
@interface BbnativesharedAdUnitCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedAdUnitCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppConfig")))
@interface BbnativesharedAppConfig : BbnativesharedBase
- (instancetype)initWithId:(NSString * _Nullable)id type:(NSString * _Nullable)type showThumbnails:(BbnativesharedBoolean * _Nullable)showThumbnails showNextPreviousControls:(BbnativesharedBoolean * _Nullable)showNextPreviousControls subtype:(NSString * _Nullable)subtype swipeDirection:(NSString * _Nullable)swipeDirection backgroundColor:(NSString * _Nullable)backgroundColor skin_foregroundColor:(NSString * _Nullable)skin_foregroundColor clipAdInterval:(BbnativesharedInt * _Nullable)clipAdInterval firstAdPosition:(BbnativesharedInt * _Nullable)firstAdPosition minuteAdInterval:(BbnativesharedInt * _Nullable)minuteAdInterval listThumbnailHeight:(BbnativesharedInt * _Nullable)listThumbnailHeight listThumbnailResponsiveHeight:(BbnativesharedBoolean * _Nullable)listThumbnailResponsiveHeight showThumbnailDuration:(BbnativesharedBoolean * _Nullable)showThumbnailDuration showThumbnailTitle:(BbnativesharedBoolean * _Nullable)showThumbnailTitle thumbnailBackground:(BbnativesharedBoolean * _Nullable)thumbnailBackground cornerRadius:(BbnativesharedInt * _Nullable)cornerRadius adunitId:(NSString * _Nullable)adunitId playout:(BbnativesharedPlayout * _Nullable)playout cliplistid:(NSString * _Nullable)cliplistid viewedClipBehaviour:(NSString * _Nullable)viewedClipBehaviour __attribute__((swift_name("init(id:type:showThumbnails:showNextPreviousControls:subtype:swipeDirection:backgroundColor:skin_foregroundColor:clipAdInterval:firstAdPosition:minuteAdInterval:listThumbnailHeight:listThumbnailResponsiveHeight:showThumbnailDuration:showThumbnailTitle:thumbnailBackground:cornerRadius:adunitId:playout:cliplistid:viewedClipBehaviour:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedAppConfigCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedAppConfig *)doCopyId:(NSString * _Nullable)id type:(NSString * _Nullable)type showThumbnails:(BbnativesharedBoolean * _Nullable)showThumbnails showNextPreviousControls:(BbnativesharedBoolean * _Nullable)showNextPreviousControls subtype:(NSString * _Nullable)subtype swipeDirection:(NSString * _Nullable)swipeDirection backgroundColor:(NSString * _Nullable)backgroundColor skin_foregroundColor:(NSString * _Nullable)skin_foregroundColor clipAdInterval:(BbnativesharedInt * _Nullable)clipAdInterval firstAdPosition:(BbnativesharedInt * _Nullable)firstAdPosition minuteAdInterval:(BbnativesharedInt * _Nullable)minuteAdInterval listThumbnailHeight:(BbnativesharedInt * _Nullable)listThumbnailHeight listThumbnailResponsiveHeight:(BbnativesharedBoolean * _Nullable)listThumbnailResponsiveHeight showThumbnailDuration:(BbnativesharedBoolean * _Nullable)showThumbnailDuration showThumbnailTitle:(BbnativesharedBoolean * _Nullable)showThumbnailTitle thumbnailBackground:(BbnativesharedBoolean * _Nullable)thumbnailBackground cornerRadius:(BbnativesharedInt * _Nullable)cornerRadius adunitId:(NSString * _Nullable)adunitId playout:(BbnativesharedPlayout * _Nullable)playout cliplistid:(NSString * _Nullable)cliplistid viewedClipBehaviour:(NSString * _Nullable)viewedClipBehaviour __attribute__((swift_name("doCopy(id:type:showThumbnails:showNextPreviousControls:subtype:swipeDirection:backgroundColor:skin_foregroundColor:clipAdInterval:firstAdPosition:minuteAdInterval:listThumbnailHeight:listThumbnailResponsiveHeight:showThumbnailDuration:showThumbnailTitle:thumbnailBackground:cornerRadius:adunitId:playout:cliplistid:viewedClipBehaviour:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable adunitId __attribute__((swift_name("adunitId")));
@property (readonly) NSString * _Nullable backgroundColor __attribute__((swift_name("backgroundColor")));
@property (readonly) BbnativesharedInt * _Nullable clipAdInterval __attribute__((swift_name("clipAdInterval")));
@property (readonly) NSString * _Nullable cliplistid __attribute__((swift_name("cliplistid")));
@property (readonly) BbnativesharedInt * _Nullable cornerRadius __attribute__((swift_name("cornerRadius")));
@property (readonly) BbnativesharedInt * _Nullable firstAdPosition __attribute__((swift_name("firstAdPosition")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) BbnativesharedInt * _Nullable listThumbnailHeight __attribute__((swift_name("listThumbnailHeight")));
@property (readonly) BbnativesharedBoolean * _Nullable listThumbnailResponsiveHeight __attribute__((swift_name("listThumbnailResponsiveHeight")));
@property (readonly) BbnativesharedInt * _Nullable minuteAdInterval __attribute__((swift_name("minuteAdInterval")));
@property (readonly) BbnativesharedPlayout * _Nullable playout __attribute__((swift_name("playout")));
@property (readonly) BbnativesharedBoolean * _Nullable showNextPreviousControls __attribute__((swift_name("showNextPreviousControls")));
@property (readonly) BbnativesharedBoolean * _Nullable showThumbnailDuration __attribute__((swift_name("showThumbnailDuration")));
@property (readonly) BbnativesharedBoolean * _Nullable showThumbnailTitle __attribute__((swift_name("showThumbnailTitle")));
@property (readonly) BbnativesharedBoolean * _Nullable showThumbnails __attribute__((swift_name("showThumbnails")));
@property (readonly) NSString * _Nullable skin_foregroundColor __attribute__((swift_name("skin_foregroundColor")));
@property (readonly) NSString * _Nullable subtype __attribute__((swift_name("subtype")));
@property (readonly) NSString * _Nullable swipeDirection __attribute__((swift_name("swipeDirection")));
@property (readonly) BbnativesharedBoolean * _Nullable thumbnailBackground __attribute__((swift_name("thumbnailBackground")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable viewedClipBehaviour __attribute__((swift_name("viewedClipBehaviour")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppConfig.Companion")))
@interface BbnativesharedAppConfigCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedAppConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Audiotrack")))
@interface BbnativesharedAudiotrack : BbnativesharedBase
- (instancetype)initWithId:(NSString * _Nullable)id type:(NSString * _Nullable)type status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate name:(NSString * _Nullable)name createdBy:(NSString * _Nullable)createdBy updateddate:(NSString * _Nullable)updateddate updatedBy:(NSString * _Nullable)updatedBy audioId:(BbnativesharedInt * _Nullable)audioId isocode:(NSString * _Nullable)isocode roleFlags:(BbnativesharedInt * _Nullable)roleFlags mediaclipid:(NSString * _Nullable)mediaclipid originalfilename:(NSString * _Nullable)originalfilename languageid:(BbnativesharedLong * _Nullable)languageid src:(NSString * _Nullable)src remotesrc:(NSString * _Nullable)remotesrc exactlength:(NSString * _Nullable)exactlength publisheddate:(NSString * _Nullable)publisheddate label:(NSString * _Nullable)label uri:(NSString * _Nullable)uri isDefaultLanguage:(BbnativesharedBoolean * _Nullable)isDefaultLanguage isSelected:(BbnativesharedBoolean * _Nullable)isSelected origId:(NSString * _Nullable)origId __attribute__((swift_name("init(id:type:status:createddate:name:createdBy:updateddate:updatedBy:audioId:isocode:roleFlags:mediaclipid:originalfilename:languageid:src:remotesrc:exactlength:publisheddate:label:uri:isDefaultLanguage:isSelected:origId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedAudiotrackCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedAudiotrack *)doCopyId:(NSString * _Nullable)id type:(NSString * _Nullable)type status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate name:(NSString * _Nullable)name createdBy:(NSString * _Nullable)createdBy updateddate:(NSString * _Nullable)updateddate updatedBy:(NSString * _Nullable)updatedBy audioId:(BbnativesharedInt * _Nullable)audioId isocode:(NSString * _Nullable)isocode roleFlags:(BbnativesharedInt * _Nullable)roleFlags mediaclipid:(NSString * _Nullable)mediaclipid originalfilename:(NSString * _Nullable)originalfilename languageid:(BbnativesharedLong * _Nullable)languageid src:(NSString * _Nullable)src remotesrc:(NSString * _Nullable)remotesrc exactlength:(NSString * _Nullable)exactlength publisheddate:(NSString * _Nullable)publisheddate label:(NSString * _Nullable)label uri:(NSString * _Nullable)uri isDefaultLanguage:(BbnativesharedBoolean * _Nullable)isDefaultLanguage isSelected:(BbnativesharedBoolean * _Nullable)isSelected origId:(NSString * _Nullable)origId __attribute__((swift_name("doCopy(id:type:status:createddate:name:createdBy:updateddate:updatedBy:audioId:isocode:roleFlags:mediaclipid:originalfilename:languageid:src:remotesrc:exactlength:publisheddate:label:uri:isDefaultLanguage:isSelected:origId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BbnativesharedInt * _Nullable audioId __attribute__((swift_name("audioId")));
@property (readonly) NSString * _Nullable createdBy __attribute__((swift_name("createdBy")));
@property (readonly) NSString * _Nullable createddate __attribute__((swift_name("createddate")));
@property (readonly) NSString * _Nullable exactlength __attribute__((swift_name("exactlength")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) BbnativesharedBoolean * _Nullable isDefaultLanguage __attribute__((swift_name("isDefaultLanguage")));
@property BbnativesharedBoolean * _Nullable isSelected __attribute__((swift_name("isSelected")));
@property NSString * _Nullable isocode __attribute__((swift_name("isocode")));
@property NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) BbnativesharedLong * _Nullable languageid __attribute__((swift_name("languageid")));
@property (readonly) NSString * _Nullable mediaclipid __attribute__((swift_name("mediaclipid")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable origId __attribute__((swift_name("origId")));
@property (readonly) NSString * _Nullable originalfilename __attribute__((swift_name("originalfilename")));
@property (readonly) NSString * _Nullable publisheddate __attribute__((swift_name("publisheddate")));
@property (readonly) NSString * _Nullable remotesrc __attribute__((swift_name("remotesrc")));
@property BbnativesharedInt * _Nullable roleFlags __attribute__((swift_name("roleFlags")));
@property (readonly) NSString * _Nullable src __attribute__((swift_name("src")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable updatedBy __attribute__((swift_name("updatedBy")));
@property (readonly) NSString * _Nullable updateddate __attribute__((swift_name("updateddate")));
@property (readonly) NSString * _Nullable uri __attribute__((swift_name("uri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Audiotrack.Companion")))
@interface BbnativesharedAudiotrackCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedAudiotrackCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("BBModel")))
@interface BbnativesharedBBModel : BbnativesharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable rawJsonString __attribute__((swift_name("rawJsonString")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Chapter")))
@interface BbnativesharedChapter : BbnativesharedBase
- (instancetype)initWithId:(NSString * _Nullable)id title:(NSString * _Nullable)title timeOffset:(BbnativesharedFloat * _Nullable)timeOffset steps:(NSArray<BbnativesharedStep *> * _Nullable)steps __attribute__((swift_name("init(id:title:timeOffset:steps:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedChapterCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedChapter *)doCopyId:(NSString * _Nullable)id title:(NSString * _Nullable)title timeOffset:(BbnativesharedFloat * _Nullable)timeOffset steps:(NSArray<BbnativesharedStep *> * _Nullable)steps __attribute__((swift_name("doCopy(id:title:timeOffset:steps:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSArray<BbnativesharedStep *> * _Nullable steps __attribute__((swift_name("steps")));
@property (readonly) BbnativesharedFloat * _Nullable timeOffset __attribute__((swift_name("timeOffset")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Chapter.Companion")))
@interface BbnativesharedChapterCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedChapterCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Condition")))
@interface BbnativesharedCondition : BbnativesharedBase
- (instancetype)initWithVariables:(NSDictionary<NSString *, BbnativesharedKotlinx_serialization_jsonJsonElement *> * _Nullable)variables expression:(NSString * _Nullable)expression __attribute__((swift_name("init(variables:expression:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedConditionCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedCondition *)doCopyVariables:(NSDictionary<NSString *, BbnativesharedKotlinx_serialization_jsonJsonElement *> * _Nullable)variables expression:(NSString * _Nullable)expression __attribute__((swift_name("doCopy(variables:expression:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable expression __attribute__((swift_name("expression")));
@property (readonly) NSDictionary<NSString *, BbnativesharedKotlinx_serialization_jsonJsonElement *> * _Nullable variables __attribute__((swift_name("variables")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Condition.Companion")))
@interface BbnativesharedConditionCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedConditionCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("ContentItem")))
@interface BbnativesharedContentItem : BbnativesharedBBModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BbnativesharedContentItemCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property BOOL isPlayed __attribute__((swift_name("isPlayed")));
@property BOOL isPrefetch __attribute__((swift_name("isPrefetch")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContentItem.Companion")))
@interface BbnativesharedContentItemCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedContentItemCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(BbnativesharedKotlinArray<id<BbnativesharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContentItemFactory")))
@interface BbnativesharedContentItemFactory : BbnativesharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BbnativesharedContentItemFactoryCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContentItemFactory.Companion")))
@interface BbnativesharedContentItemFactoryCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedContentItemFactoryCompanion *shared __attribute__((swift_name("shared")));
- (BbnativesharedMediaClip *)createMediaClipId:(NSString *)id __attribute__((swift_name("createMediaClip(id:)")));
- (BbnativesharedMediaClip *)createMediaClipId:(NSString *)id title:(NSString * _Nullable)title deeplink:(NSString * _Nullable)deeplink __attribute__((swift_name("createMediaClip(id:title:deeplink:)")));
- (BbnativesharedMediaClip *)createMediaClipId:(NSString *)id title:(NSString * _Nullable)title deeplink:(NSString * _Nullable)deeplink gendeeplink:(NSString * _Nullable)gendeeplink sourcetype:(NSString * _Nullable)sourcetype length:(NSString * _Nullable)length mediatype:(NSString * _Nullable)mediatype __attribute__((swift_name("createMediaClip(id:title:deeplink:gendeeplink:sourcetype:length:mediatype:)")));
- (BbnativesharedMediaClip *)createMediaClipId:(NSString *)id title:(NSString * _Nullable)title deeplink:(NSString * _Nullable)deeplink gendeeplink:(NSString * _Nullable)gendeeplink sourcetype:(NSString * _Nullable)sourcetype length:(NSString * _Nullable)length mediatype:(NSString * _Nullable)mediatype usetype:(NSString * _Nullable)usetype __attribute__((swift_name("createMediaClip(id:title:deeplink:gendeeplink:sourcetype:length:mediatype:usetype:)")));
- (BbnativesharedMediaClipList *)createMediaClipListId:(NSString *)id __attribute__((swift_name("createMediaClipList(id:)")));
- (BbnativesharedMediaClipList *)createMediaClipListId:(NSString *)id title:(NSString * _Nullable)title deeplink:(NSString * _Nullable)deeplink __attribute__((swift_name("createMediaClipList(id:title:deeplink:)")));
- (BbnativesharedProject *)createProjectId:(NSString *)id __attribute__((swift_name("createProject(id:)")));
- (BbnativesharedProject *)createProjectId:(NSString *)id title:(NSString * _Nullable)title deeplink:(NSString * _Nullable)deeplink __attribute__((swift_name("createProject(id:title:deeplink:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dates")))
@interface BbnativesharedDates : BbnativesharedBase
- (instancetype)initWithCreated:(NSString * _Nullable)created updated:(NSString * _Nullable)updated published:(NSString * _Nullable)published __attribute__((swift_name("init(created:updated:published:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedDatesCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedDates *)doCopyCreated:(NSString * _Nullable)created updated:(NSString * _Nullable)updated published:(NSString * _Nullable)published __attribute__((swift_name("doCopy(created:updated:published:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable created __attribute__((swift_name("created")));
@property (readonly) NSString * _Nullable published __attribute__((swift_name("published")));
@property (readonly) NSString * _Nullable updated __attribute__((swift_name("updated")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dates.Companion")))
@interface BbnativesharedDatesCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedDatesCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmbedData")))
@interface BbnativesharedEmbedData : BbnativesharedBase
- (instancetype)initWithForceSSL:(BbnativesharedBoolean * _Nullable)forceSSL baseurl:(NSString * _Nullable)baseurl appId:(NSString * _Nullable)appId appIndicator:(NSString * _Nullable)appIndicator contentIndicator:(NSString * _Nullable)contentIndicator contentId:(NSString * _Nullable)contentId playoutIndicator:(NSString * _Nullable)playoutIndicator playoutSafeName:(NSString * _Nullable)playoutSafeName queryString:(NSString * _Nullable)queryString __attribute__((swift_name("init(forceSSL:baseurl:appId:appIndicator:contentIndicator:contentId:playoutIndicator:playoutSafeName:queryString:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedEmbedDataCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedEmbedData *)doCopyForceSSL:(BbnativesharedBoolean * _Nullable)forceSSL baseurl:(NSString * _Nullable)baseurl appId:(NSString * _Nullable)appId appIndicator:(NSString * _Nullable)appIndicator contentIndicator:(NSString * _Nullable)contentIndicator contentId:(NSString * _Nullable)contentId playoutIndicator:(NSString * _Nullable)playoutIndicator playoutSafeName:(NSString * _Nullable)playoutSafeName queryString:(NSString * _Nullable)queryString __attribute__((swift_name("doCopy(forceSSL:baseurl:appId:appIndicator:contentIndicator:contentId:playoutIndicator:playoutSafeName:queryString:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable appId __attribute__((swift_name("appId")));
@property (readonly) NSString * _Nullable appIndicator __attribute__((swift_name("appIndicator")));
@property (readonly) NSString * _Nullable baseurl __attribute__((swift_name("baseurl")));
@property (readonly) NSString * _Nullable contentId __attribute__((swift_name("contentId")));
@property (readonly) NSString * _Nullable contentIndicator __attribute__((swift_name("contentIndicator")));
@property (readonly) BbnativesharedBoolean * _Nullable forceSSL __attribute__((swift_name("forceSSL")));
@property (readonly) NSString * _Nullable playoutIndicator __attribute__((swift_name("playoutIndicator")));
@property (readonly) NSString * _Nullable playoutSafeName __attribute__((swift_name("playoutSafeName")));
@property (readonly) NSString * _Nullable queryString __attribute__((swift_name("queryString")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmbedData.Companion")))
@interface BbnativesharedEmbedDataCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedEmbedDataCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmbedObject")))
@interface BbnativesharedEmbedObject : BbnativesharedBBModel
- (instancetype)initWithPublicationData:(BbnativesharedPublication *)publicationData clipData:(BbnativesharedMediaClip *)clipData __attribute__((swift_name("init(publicationData:clipData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPublicationData:(BbnativesharedPublication * _Nullable)publicationData embedData:(BbnativesharedEmbedData * _Nullable)embedData playoutData:(BbnativesharedPlayout * _Nullable)playoutData clipData:(BbnativesharedMediaClip * _Nullable)clipData clipListData:(BbnativesharedMediaClipList * _Nullable)clipListData projectData:(BbnativesharedProject * _Nullable)projectData adServicesData:(NSArray<BbnativesharedAdUnit *> * _Nullable)adServicesData adSchedulingData:(BbnativesharedAdSchedulingData * _Nullable)adSchedulingData appConfig:(BbnativesharedAppConfig * _Nullable)appConfig protocol:(NSString * _Nullable)protocol userLanguage:(NSString * _Nullable)userLanguage userDeviceType:(NSString * _Nullable)userDeviceType playoutSafeName:(NSString * _Nullable)playoutSafeName contentIndicator:(NSString * _Nullable)contentIndicator contentId:(NSString * _Nullable)contentId playerWidth:(NSString * _Nullable)playerWidth playerHeight:(NSString * _Nullable)playerHeight playerUrl:(NSString * _Nullable)playerUrl scriptTarget:(NSString * _Nullable)scriptTarget playerBase:(NSString * _Nullable)playerBase playerPath:(NSString * _Nullable)playerPath scriptLink:(NSString * _Nullable)scriptLink requestParams:(BbnativesharedRequestParams * _Nullable)requestParams versioningData:(BbnativesharedVersioningData * _Nullable)versioningData __attribute__((swift_name("init(publicationData:embedData:playoutData:clipData:clipListData:projectData:adServicesData:adSchedulingData:appConfig:protocol:userLanguage:userDeviceType:playoutSafeName:contentIndicator:contentId:playerWidth:playerHeight:playerUrl:scriptTarget:playerBase:playerPath:scriptLink:requestParams:versioningData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) BbnativesharedEmbedObjectCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedEmbedObject *)doCopyPublicationData:(BbnativesharedPublication * _Nullable)publicationData embedData:(BbnativesharedEmbedData * _Nullable)embedData playoutData:(BbnativesharedPlayout * _Nullable)playoutData clipData:(BbnativesharedMediaClip * _Nullable)clipData clipListData:(BbnativesharedMediaClipList * _Nullable)clipListData projectData:(BbnativesharedProject * _Nullable)projectData adServicesData:(NSArray<BbnativesharedAdUnit *> * _Nullable)adServicesData adSchedulingData:(BbnativesharedAdSchedulingData * _Nullable)adSchedulingData appConfig:(BbnativesharedAppConfig * _Nullable)appConfig protocol:(NSString * _Nullable)protocol userLanguage:(NSString * _Nullable)userLanguage userDeviceType:(NSString * _Nullable)userDeviceType playoutSafeName:(NSString * _Nullable)playoutSafeName contentIndicator:(NSString * _Nullable)contentIndicator contentId:(NSString * _Nullable)contentId playerWidth:(NSString * _Nullable)playerWidth playerHeight:(NSString * _Nullable)playerHeight playerUrl:(NSString * _Nullable)playerUrl scriptTarget:(NSString * _Nullable)scriptTarget playerBase:(NSString * _Nullable)playerBase playerPath:(NSString * _Nullable)playerPath scriptLink:(NSString * _Nullable)scriptLink requestParams:(BbnativesharedRequestParams * _Nullable)requestParams versioningData:(BbnativesharedVersioningData * _Nullable)versioningData __attribute__((swift_name("doCopy(publicationData:embedData:playoutData:clipData:clipListData:projectData:adServicesData:adSchedulingData:appConfig:protocol:userLanguage:userDeviceType:playoutSafeName:contentIndicator:contentId:playerWidth:playerHeight:playerUrl:scriptTarget:playerBase:playerPath:scriptLink:requestParams:versioningData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BbnativesharedAdSchedulingData * _Nullable adSchedulingData __attribute__((swift_name("adSchedulingData")));
@property (readonly) NSArray<BbnativesharedAdUnit *> * _Nullable adServicesData __attribute__((swift_name("adServicesData")));
@property (readonly) BbnativesharedAppConfig * _Nullable appConfig __attribute__((swift_name("appConfig")));
@property (readonly) BbnativesharedMediaClip * _Nullable clipData __attribute__((swift_name("clipData")));
@property (readonly) BbnativesharedMediaClipList * _Nullable clipListData __attribute__((swift_name("clipListData")));
@property (readonly) NSString * _Nullable contentId __attribute__((swift_name("contentId")));
@property (readonly) NSString * _Nullable contentIndicator __attribute__((swift_name("contentIndicator")));
@property (readonly) BbnativesharedEmbedData * _Nullable embedData __attribute__((swift_name("embedData")));
@property (readonly) NSString * _Nullable playerBase __attribute__((swift_name("playerBase")));
@property (readonly) NSString * _Nullable playerHeight __attribute__((swift_name("playerHeight")));
@property (readonly) NSString * _Nullable playerPath __attribute__((swift_name("playerPath")));
@property (readonly) NSString * _Nullable playerUrl __attribute__((swift_name("playerUrl")));
@property (readonly) NSString * _Nullable playerWidth __attribute__((swift_name("playerWidth")));
@property (readonly) BbnativesharedPlayout * _Nullable playoutData __attribute__((swift_name("playoutData")));
@property (readonly) NSString * _Nullable playoutSafeName __attribute__((swift_name("playoutSafeName")));
@property (readonly) BbnativesharedProject * _Nullable projectData __attribute__((swift_name("projectData")));
@property (readonly) NSString * _Nullable protocol __attribute__((swift_name("protocol")));
@property (readonly) BbnativesharedPublication * _Nullable publicationData __attribute__((swift_name("publicationData")));
@property (readonly) BbnativesharedRequestParams * _Nullable requestParams __attribute__((swift_name("requestParams")));
@property (readonly) NSString * _Nullable scriptLink __attribute__((swift_name("scriptLink")));
@property (readonly) NSString * _Nullable scriptTarget __attribute__((swift_name("scriptTarget")));
@property (readonly) NSString * _Nullable userDeviceType __attribute__((swift_name("userDeviceType")));
@property (readonly) NSString * _Nullable userLanguage __attribute__((swift_name("userLanguage")));
@property (readonly) BbnativesharedVersioningData * _Nullable versioningData __attribute__((swift_name("versioningData")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmbedObject.Companion")))
@interface BbnativesharedEmbedObjectCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedEmbedObjectCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventHandler")))
@interface BbnativesharedEventHandler : BbnativesharedBase
- (instancetype)initWithName:(NSString * _Nullable)name procedures:(NSArray<BbnativesharedProcedure *> * _Nullable)procedures __attribute__((swift_name("init(name:procedures:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedEventHandlerCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedEventHandler *)doCopyName:(NSString * _Nullable)name procedures:(NSArray<BbnativesharedProcedure *> * _Nullable)procedures __attribute__((swift_name("doCopy(name:procedures:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSArray<BbnativesharedProcedure *> * _Nullable procedures __attribute__((swift_name("procedures")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventHandler.Companion")))
@interface BbnativesharedEventHandlerCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedEventHandlerCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Highlight")))
@interface BbnativesharedHighlight : BbnativesharedBase
- (instancetype)initWithId:(NSString * _Nullable)id title:(NSString * _Nullable)title timeOffset:(BbnativesharedFloat * _Nullable)timeOffset __attribute__((swift_name("init(id:title:timeOffset:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedHighlightCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedHighlight *)doCopyId:(NSString * _Nullable)id title:(NSString * _Nullable)title timeOffset:(BbnativesharedFloat * _Nullable)timeOffset __attribute__((swift_name("doCopy(id:title:timeOffset:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) BbnativesharedFloat * _Nullable timeOffset __attribute__((swift_name("timeOffset")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Highlight.Companion")))
@interface BbnativesharedHighlightCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedHighlightCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LineItem_")))
@interface BbnativesharedLineItem_ : BbnativesharedBase
- (instancetype)initWithId:(NSString *)id playout:(NSDictionary<NSString *, id> * _Nullable)playout code:(NSString * _Nullable)code vastUrl:(NSString * _Nullable)vastUrl vastXml:(NSString * _Nullable)vastXml vastSubtype:(NSString * _Nullable)vastSubtype __attribute__((swift_name("init(id:playout:code:vastUrl:vastXml:vastSubtype:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString * _Nullable)id type:(NSString * _Nullable)type status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate createdBy:(NSString * _Nullable)createdBy updateddate:(NSString * _Nullable)updateddate updatedBy:(NSString * _Nullable)updatedBy creativeType:(NSString * _Nullable)creativeType creativeId:(NSString * _Nullable)creativeId timeout:(BbnativesharedLong * _Nullable)timeout preferredPlayMode:(NSString * _Nullable)preferredPlayMode playout:(NSDictionary<NSString *, id> * _Nullable)playout title:(NSString * _Nullable)title code:(NSString * _Nullable)code vastUrl:(NSString * _Nullable)vastUrl vastXml:(NSString * _Nullable)vastXml vastSubtype:(NSString * _Nullable)vastSubtype label:(NSString * _Nullable)label relatedAdunits:(NSArray<BbnativesharedKotlinx_serialization_jsonJsonElement *> * _Nullable)relatedAdunits __attribute__((swift_name("init(id:type:status:createddate:createdBy:updateddate:updatedBy:creativeType:creativeId:timeout:preferredPlayMode:playout:title:code:vastUrl:vastXml:vastSubtype:label:relatedAdunits:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedLineItem_Companion *companion __attribute__((swift_name("companion")));
- (BbnativesharedLineItem_ *)doCopyId:(NSString * _Nullable)id type:(NSString * _Nullable)type status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate createdBy:(NSString * _Nullable)createdBy updateddate:(NSString * _Nullable)updateddate updatedBy:(NSString * _Nullable)updatedBy creativeType:(NSString * _Nullable)creativeType creativeId:(NSString * _Nullable)creativeId timeout:(BbnativesharedLong * _Nullable)timeout preferredPlayMode:(NSString * _Nullable)preferredPlayMode playout:(NSDictionary<NSString *, id> * _Nullable)playout title:(NSString * _Nullable)title code:(NSString * _Nullable)code vastUrl:(NSString * _Nullable)vastUrl vastXml:(NSString * _Nullable)vastXml vastSubtype:(NSString * _Nullable)vastSubtype label:(NSString * _Nullable)label relatedAdunits:(NSArray<BbnativesharedKotlinx_serialization_jsonJsonElement *> * _Nullable)relatedAdunits __attribute__((swift_name("doCopy(id:type:status:createddate:createdBy:updateddate:updatedBy:creativeType:creativeId:timeout:preferredPlayMode:playout:title:code:vastUrl:vastXml:vastSubtype:label:relatedAdunits:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable createdBy __attribute__((swift_name("createdBy")));
@property (readonly) NSString * _Nullable createddate __attribute__((swift_name("createddate")));
@property (readonly) NSString * _Nullable creativeId __attribute__((swift_name("creativeId")));
@property (readonly) NSString * _Nullable creativeType __attribute__((swift_name("creativeType")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable playout __attribute__((swift_name("playout")));
@property (readonly) NSString * _Nullable preferredPlayMode __attribute__((swift_name("preferredPlayMode")));
@property (readonly) NSArray<BbnativesharedKotlinx_serialization_jsonJsonElement *> * _Nullable relatedAdunits __attribute__((swift_name("relatedAdunits")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) BbnativesharedLong * _Nullable timeout __attribute__((swift_name("timeout")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable updatedBy __attribute__((swift_name("updatedBy")));
@property (readonly) NSString * _Nullable updateddate __attribute__((swift_name("updateddate")));
@property (readonly) NSString * _Nullable vastSubtype __attribute__((swift_name("vastSubtype")));
@property (readonly) NSString * _Nullable vastUrl __attribute__((swift_name("vastUrl")));
@property (readonly) NSString * _Nullable vastXml __attribute__((swift_name("vastXml")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LineItem_.Companion")))
@interface BbnativesharedLineItem_Companion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedLineItem_Companion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaAsset")))
@interface BbnativesharedMediaAsset : BbnativesharedBase
- (instancetype)initWithMediatype:(NSString * _Nullable)mediatype id:(NSString * _Nullable)id status:(NSString * _Nullable)status src:(NSString * _Nullable)src length:(NSString * _Nullable)length exactlength:(NSString * _Nullable)exactlength width:(NSString * _Nullable)width height:(NSString * _Nullable)height bandwidth:(NSString * _Nullable)bandwidth jobdefid:(NSString * _Nullable)jobdefid languageId:(NSString * _Nullable)languageId languageName:(NSString * _Nullable)languageName languageIsocode:(NSString * _Nullable)languageIsocode isDefaultLanguage:(BbnativesharedBoolean * _Nullable)isDefaultLanguage title:(NSString * _Nullable)title __attribute__((swift_name("init(mediatype:id:status:src:length:exactlength:width:height:bandwidth:jobdefid:languageId:languageName:languageIsocode:isDefaultLanguage:title:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedMediaAssetCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedMediaAsset *)doCopyMediatype:(NSString * _Nullable)mediatype id:(NSString * _Nullable)id status:(NSString * _Nullable)status src:(NSString * _Nullable)src length:(NSString * _Nullable)length exactlength:(NSString * _Nullable)exactlength width:(NSString * _Nullable)width height:(NSString * _Nullable)height bandwidth:(NSString * _Nullable)bandwidth jobdefid:(NSString * _Nullable)jobdefid languageId:(NSString * _Nullable)languageId languageName:(NSString * _Nullable)languageName languageIsocode:(NSString * _Nullable)languageIsocode isDefaultLanguage:(BbnativesharedBoolean * _Nullable)isDefaultLanguage title:(NSString * _Nullable)title __attribute__((swift_name("doCopy(mediatype:id:status:src:length:exactlength:width:height:bandwidth:jobdefid:languageId:languageName:languageIsocode:isDefaultLanguage:title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable bandwidth __attribute__((swift_name("bandwidth")));
@property (readonly) NSString * _Nullable exactlength __attribute__((swift_name("exactlength")));
@property (readonly) NSString * _Nullable height __attribute__((swift_name("height")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) BbnativesharedBoolean * _Nullable isDefaultLanguage __attribute__((swift_name("isDefaultLanguage")));
@property (readonly) NSString * _Nullable jobdefid __attribute__((swift_name("jobdefid")));
@property (readonly) NSString * _Nullable languageId __attribute__((swift_name("languageId")));
@property (readonly) NSString * _Nullable languageIsocode __attribute__((swift_name("languageIsocode")));
@property (readonly) NSString * _Nullable languageName __attribute__((swift_name("languageName")));
@property (readonly) NSString * _Nullable length __attribute__((swift_name("length")));
@property (readonly) NSString * _Nullable mediatype __attribute__((swift_name("mediatype")));
@property (readonly) NSString * _Nullable src __attribute__((swift_name("src")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaAsset.Companion")))
@interface BbnativesharedMediaAssetCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedMediaAssetCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaClip")))
@interface BbnativesharedMediaClip : BbnativesharedContentItem <BbnativesharedContentItemInterface>
- (instancetype)initWithId:(NSString *)id title:(NSString * _Nullable)title deeplink:(NSString * _Nullable)deeplink gendeeplink:(NSString * _Nullable)gendeeplink sourcetype:(NSString * _Nullable)sourcetype length:(NSString * _Nullable)length mediatype:(NSString * _Nullable)mediatype usetype:(NSString * _Nullable)usetype __attribute__((swift_name("init(id:title:deeplink:gendeeplink:sourcetype:length:mediatype:usetype:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString * _Nullable)id title:(NSString * _Nullable)title deeplink:(NSString * _Nullable)deeplink gendeeplink:(NSString * _Nullable)gendeeplink sourcetype:(NSString * _Nullable)sourcetype length:(NSString * _Nullable)length mediatype:(NSString * _Nullable)mediatype mediatype_override:(NSString * _Nullable)mediatype_override fitmode:(NSString * _Nullable)fitmode usetype:(NSString * _Nullable)usetype useThumbsFromMetadata:(NSString * _Nullable)useThumbsFromMetadata location:(NSString * _Nullable)location originalfilename:(NSString * _Nullable)originalfilename sourceid:(NSString * _Nullable)sourceid description:(NSString * _Nullable)description copyright:(NSString * _Nullable)copyright author:(NSString * _Nullable)author status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate updateddate:(NSString * _Nullable)updateddate publisheddate:(NSString * _Nullable)publisheddate width:(BbnativesharedLong * _Nullable)width height:(BbnativesharedLong * _Nullable)height dar:(NSString * _Nullable)dar originalWidth:(BbnativesharedLong * _Nullable)originalWidth originalHeight:(BbnativesharedLong * _Nullable)originalHeight date:(BbnativesharedDates * _Nullable)date src:(NSString * _Nullable)src cat:(NSArray<NSString *> * _Nullable)cat thumbnails:(NSArray<BbnativesharedThumbnail *> * _Nullable)thumbnails movingThumbnails:(NSArray<BbnativesharedThumbnail *> * _Nullable)movingThumbnails assets:(NSArray<BbnativesharedMediaAsset *> * _Nullable)assets hasJobs:(NSString * _Nullable)hasJobs hasFailedJobs:(BbnativesharedBoolean * _Nullable)hasFailedJobs hasRunningJobs:(BbnativesharedBoolean * _Nullable)hasRunningJobs hasNewJobs:(BbnativesharedBoolean * _Nullable)hasNewJobs transcodingFinished:(BbnativesharedBoolean * _Nullable)transcodingFinished isYoutubeImport:(BbnativesharedBoolean * _Nullable)isYoutubeImport subtitles:(NSArray<BbnativesharedSubtitle *> * _Nullable)subtitles subtitletracks:(NSArray<BbnativesharedSubtitle *> * _Nullable)subtitletracks transcript:(NSString * _Nullable)transcript timelineId:(NSString * _Nullable)timelineId timelines:(NSArray<BbnativesharedTimeline *> * _Nullable)timelines audiotracks:(NSArray<BbnativesharedAudiotrack *> * _Nullable)audiotracks youtubeImportID:(NSString * _Nullable)youtubeImportID importSource:(NSString * _Nullable)importSource importURL:(NSString * _Nullable)importURL disablecommercials:(NSString * _Nullable)disablecommercials isDynamic:(NSString * _Nullable)isDynamic checkbox:(NSString * _Nullable)checkbox comment:(NSString * _Nullable)comment chapters:(NSArray<BbnativesharedChapter *> * _Nullable)chapters highlights:(NSArray<BbnativesharedHighlight *> * _Nullable)highlights softEmbargo:(NSString * _Nullable)softEmbargo isOutro:(NSString * _Nullable)isOutro projectId:(NSString * _Nullable)projectId __attribute__((swift_name("init(id:title:deeplink:gendeeplink:sourcetype:length:mediatype:mediatype_override:fitmode:usetype:useThumbsFromMetadata:location:originalfilename:sourceid:description:copyright:author:status:createddate:updateddate:publisheddate:width:height:dar:originalWidth:originalHeight:date:src:cat:thumbnails:movingThumbnails:assets:hasJobs:hasFailedJobs:hasRunningJobs:hasNewJobs:transcodingFinished:isYoutubeImport:subtitles:subtitletracks:transcript:timelineId:timelines:audiotracks:youtubeImportID:importSource:importURL:disablecommercials:isDynamic:checkbox:comment:chapters:highlights:softEmbargo:isOutro:projectId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) BbnativesharedMediaClipCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedMediaClip *)doCopyId:(NSString * _Nullable)id title:(NSString * _Nullable)title deeplink:(NSString * _Nullable)deeplink gendeeplink:(NSString * _Nullable)gendeeplink sourcetype:(NSString * _Nullable)sourcetype length:(NSString * _Nullable)length mediatype:(NSString * _Nullable)mediatype mediatype_override:(NSString * _Nullable)mediatype_override fitmode:(NSString * _Nullable)fitmode usetype:(NSString * _Nullable)usetype useThumbsFromMetadata:(NSString * _Nullable)useThumbsFromMetadata location:(NSString * _Nullable)location originalfilename:(NSString * _Nullable)originalfilename sourceid:(NSString * _Nullable)sourceid description:(NSString * _Nullable)description copyright:(NSString * _Nullable)copyright author:(NSString * _Nullable)author status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate updateddate:(NSString * _Nullable)updateddate publisheddate:(NSString * _Nullable)publisheddate width:(BbnativesharedLong * _Nullable)width height:(BbnativesharedLong * _Nullable)height dar:(NSString * _Nullable)dar originalWidth:(BbnativesharedLong * _Nullable)originalWidth originalHeight:(BbnativesharedLong * _Nullable)originalHeight date:(BbnativesharedDates * _Nullable)date src:(NSString * _Nullable)src cat:(NSArray<NSString *> * _Nullable)cat thumbnails:(NSArray<BbnativesharedThumbnail *> * _Nullable)thumbnails movingThumbnails:(NSArray<BbnativesharedThumbnail *> * _Nullable)movingThumbnails assets:(NSArray<BbnativesharedMediaAsset *> * _Nullable)assets hasJobs:(NSString * _Nullable)hasJobs hasFailedJobs:(BbnativesharedBoolean * _Nullable)hasFailedJobs hasRunningJobs:(BbnativesharedBoolean * _Nullable)hasRunningJobs hasNewJobs:(BbnativesharedBoolean * _Nullable)hasNewJobs transcodingFinished:(BbnativesharedBoolean * _Nullable)transcodingFinished isYoutubeImport:(BbnativesharedBoolean * _Nullable)isYoutubeImport subtitles:(NSArray<BbnativesharedSubtitle *> * _Nullable)subtitles subtitletracks:(NSArray<BbnativesharedSubtitle *> * _Nullable)subtitletracks transcript:(NSString * _Nullable)transcript timelineId:(NSString * _Nullable)timelineId timelines:(NSArray<BbnativesharedTimeline *> * _Nullable)timelines audiotracks:(NSArray<BbnativesharedAudiotrack *> * _Nullable)audiotracks youtubeImportID:(NSString * _Nullable)youtubeImportID importSource:(NSString * _Nullable)importSource importURL:(NSString * _Nullable)importURL disablecommercials:(NSString * _Nullable)disablecommercials isDynamic:(NSString * _Nullable)isDynamic checkbox:(NSString * _Nullable)checkbox comment:(NSString * _Nullable)comment chapters:(NSArray<BbnativesharedChapter *> * _Nullable)chapters highlights:(NSArray<BbnativesharedHighlight *> * _Nullable)highlights softEmbargo:(NSString * _Nullable)softEmbargo isOutro:(NSString * _Nullable)isOutro projectId:(NSString * _Nullable)projectId __attribute__((swift_name("doCopy(id:title:deeplink:gendeeplink:sourcetype:length:mediatype:mediatype_override:fitmode:usetype:useThumbsFromMetadata:location:originalfilename:sourceid:description:copyright:author:status:createddate:updateddate:publisheddate:width:height:dar:originalWidth:originalHeight:date:src:cat:thumbnails:movingThumbnails:assets:hasJobs:hasFailedJobs:hasRunningJobs:hasNewJobs:transcodingFinished:isYoutubeImport:subtitles:subtitletracks:transcript:timelineId:timelines:audiotracks:youtubeImportID:importSource:importURL:disablecommercials:isDynamic:checkbox:comment:chapters:highlights:softEmbargo:isOutro:projectId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<BbnativesharedMediaAsset *> * _Nullable assets __attribute__((swift_name("assets")));
@property (readonly) NSArray<BbnativesharedAudiotrack *> * _Nullable audiotracks __attribute__((swift_name("audiotracks")));
@property (readonly) NSString * _Nullable author __attribute__((swift_name("author")));
@property (readonly) NSArray<NSString *> * _Nullable cat __attribute__((swift_name("cat")));
@property (readonly) NSArray<BbnativesharedChapter *> * _Nullable chapters __attribute__((swift_name("chapters")));
@property (readonly) NSString * _Nullable checkbox __attribute__((swift_name("checkbox")));
@property (readonly) NSString * _Nullable comment __attribute__((swift_name("comment")));
@property (readonly) NSString * _Nullable copyright __attribute__((swift_name("copyright")));
@property (readonly) NSString * _Nullable createddate __attribute__((swift_name("createddate")));
@property (readonly) NSString * _Nullable dar __attribute__((swift_name("dar")));
@property (readonly) BbnativesharedDates * _Nullable date __attribute__((swift_name("date")));
@property (readonly) NSString * _Nullable deeplink __attribute__((swift_name("deeplink")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable disablecommercials __attribute__((swift_name("disablecommercials")));
@property (readonly) NSString * _Nullable fitmode __attribute__((swift_name("fitmode")));
@property (readonly) NSString * _Nullable gendeeplink __attribute__((swift_name("gendeeplink")));
@property (readonly) BbnativesharedBoolean * _Nullable hasFailedJobs __attribute__((swift_name("hasFailedJobs")));
@property (readonly) NSString * _Nullable hasJobs __attribute__((swift_name("hasJobs")));
@property (readonly) BbnativesharedBoolean * _Nullable hasNewJobs __attribute__((swift_name("hasNewJobs")));
@property (readonly) BbnativesharedBoolean * _Nullable hasRunningJobs __attribute__((swift_name("hasRunningJobs")));
@property (readonly) BbnativesharedLong * _Nullable height __attribute__((swift_name("height")));
@property (readonly) NSArray<BbnativesharedHighlight *> * _Nullable highlights __attribute__((swift_name("highlights")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable importSource __attribute__((swift_name("importSource")));
@property (readonly) NSString * _Nullable importURL __attribute__((swift_name("importURL")));
@property (readonly) NSString * _Nullable isDynamic __attribute__((swift_name("isDynamic")));
@property (readonly) NSString * _Nullable isOutro __attribute__((swift_name("isOutro")));
@property (readonly) BbnativesharedBoolean * _Nullable isYoutubeImport __attribute__((swift_name("isYoutubeImport")));
@property NSString * _Nullable length __attribute__((swift_name("length")));
@property (readonly) NSString * _Nullable location __attribute__((swift_name("location")));
@property (readonly) NSString * _Nullable mediatype __attribute__((swift_name("mediatype")));
@property (readonly) NSString * _Nullable mediatype_override __attribute__((swift_name("mediatype_override")));
@property (readonly) NSArray<BbnativesharedThumbnail *> * _Nullable movingThumbnails __attribute__((swift_name("movingThumbnails")));
@property (readonly) BbnativesharedLong * _Nullable originalHeight __attribute__((swift_name("originalHeight")));
@property (readonly) BbnativesharedLong * _Nullable originalWidth __attribute__((swift_name("originalWidth")));
@property (readonly) NSString * _Nullable originalfilename __attribute__((swift_name("originalfilename")));
@property NSString * _Nullable projectId __attribute__((swift_name("projectId")));
@property (readonly) NSString * _Nullable publisheddate __attribute__((swift_name("publisheddate")));
@property (readonly) NSString * _Nullable softEmbargo __attribute__((swift_name("softEmbargo")));
@property (readonly) NSString * _Nullable sourceid __attribute__((swift_name("sourceid")));
@property (readonly) NSString * _Nullable sourcetype __attribute__((swift_name("sourcetype")));
@property (readonly) NSString * _Nullable src __attribute__((swift_name("src")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSArray<BbnativesharedSubtitle *> * _Nullable subtitles __attribute__((swift_name("subtitles")));
@property (readonly) NSArray<BbnativesharedSubtitle *> * _Nullable subtitletracks __attribute__((swift_name("subtitletracks")));
@property (readonly) NSArray<BbnativesharedThumbnail *> * _Nullable thumbnails __attribute__((swift_name("thumbnails")));
@property (readonly) NSString * _Nullable timelineId __attribute__((swift_name("timelineId")));
@property (readonly) NSArray<BbnativesharedTimeline *> * _Nullable timelines __attribute__((swift_name("timelines")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) BbnativesharedBoolean * _Nullable transcodingFinished __attribute__((swift_name("transcodingFinished")));
@property (readonly) NSString * _Nullable transcript __attribute__((swift_name("transcript")));
@property (readonly) NSString * _Nullable updateddate __attribute__((swift_name("updateddate")));
@property (readonly) NSString * _Nullable useThumbsFromMetadata __attribute__((swift_name("useThumbsFromMetadata")));
@property (readonly) NSString * _Nullable usetype __attribute__((swift_name("usetype")));
@property (readonly) BbnativesharedLong * _Nullable width __attribute__((swift_name("width")));
@property (readonly) NSString * _Nullable youtubeImportID __attribute__((swift_name("youtubeImportID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaClip.Companion")))
@interface BbnativesharedMediaClipCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedMediaClipCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaClipList")))
@interface BbnativesharedMediaClipList : BbnativesharedContentItem <BbnativesharedContentItemInterface>
- (instancetype)initWithId:(NSString *)id title:(NSString * _Nullable)title deeplink:(NSString * _Nullable)deeplink __attribute__((swift_name("init(id:title:deeplink:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString * _Nullable)id title:(NSString * _Nullable)title deeplink:(NSString * _Nullable)deeplink numfound:(BbnativesharedLong * _Nullable)numfound offset:(BbnativesharedLong * _Nullable)offset parentid:(NSString * _Nullable)parentid status:(NSString * _Nullable)status publication:(NSArray<NSString *> * _Nullable)publication parentpublicationid:(NSString * _Nullable)parentpublicationid mediatype:(NSString * _Nullable)mediatype usetype:(NSString * _Nullable)usetype modifieddate:(NSString * _Nullable)modifieddate createddate:(NSString * _Nullable)createddate publishedDate:(NSString * _Nullable)publishedDate listtypeString:(NSString * _Nullable)listtypeString isEmptyBoolean:(BbnativesharedBoolean * _Nullable)isEmptyBoolean filtersString:(NSString * _Nullable)filtersString createdbyString:(NSString * _Nullable)createdbyString updatedbyString:(NSString * _Nullable)updatedbyString allowDatasource:(NSString * _Nullable)allowDatasource allowDatasource_boolean:(BbnativesharedBoolean * _Nullable)allowDatasource_boolean score:(BbnativesharedDouble * _Nullable)score count:(BbnativesharedLong * _Nullable)count items:(NSArray<BbnativesharedContentItem *> * _Nullable)items __attribute__((swift_name("init(id:title:deeplink:numfound:offset:parentid:status:publication:parentpublicationid:mediatype:usetype:modifieddate:createddate:publishedDate:listtypeString:isEmptyBoolean:filtersString:createdbyString:updatedbyString:allowDatasource:allowDatasource_boolean:score:count:items:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) BbnativesharedMediaClipListCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedMediaClipList *)doCopyId:(NSString * _Nullable)id title:(NSString * _Nullable)title deeplink:(NSString * _Nullable)deeplink numfound:(BbnativesharedLong * _Nullable)numfound offset:(BbnativesharedLong * _Nullable)offset parentid:(NSString * _Nullable)parentid status:(NSString * _Nullable)status publication:(NSArray<NSString *> * _Nullable)publication parentpublicationid:(NSString * _Nullable)parentpublicationid mediatype:(NSString * _Nullable)mediatype usetype:(NSString * _Nullable)usetype modifieddate:(NSString * _Nullable)modifieddate createddate:(NSString * _Nullable)createddate publishedDate:(NSString * _Nullable)publishedDate listtypeString:(NSString * _Nullable)listtypeString isEmptyBoolean:(BbnativesharedBoolean * _Nullable)isEmptyBoolean filtersString:(NSString * _Nullable)filtersString createdbyString:(NSString * _Nullable)createdbyString updatedbyString:(NSString * _Nullable)updatedbyString allowDatasource:(NSString * _Nullable)allowDatasource allowDatasource_boolean:(BbnativesharedBoolean * _Nullable)allowDatasource_boolean score:(BbnativesharedDouble * _Nullable)score count:(BbnativesharedLong * _Nullable)count items:(NSArray<BbnativesharedContentItem *> * _Nullable)items __attribute__((swift_name("doCopy(id:title:deeplink:numfound:offset:parentid:status:publication:parentpublicationid:mediatype:usetype:modifieddate:createddate:publishedDate:listtypeString:isEmptyBoolean:filtersString:createdbyString:updatedbyString:allowDatasource:allowDatasource_boolean:score:count:items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable allowDatasource __attribute__((swift_name("allowDatasource")));
@property (readonly) BbnativesharedBoolean * _Nullable allowDatasource_boolean __attribute__((swift_name("allowDatasource_boolean")));
@property (readonly) BbnativesharedLong * _Nullable count __attribute__((swift_name("count")));
@property (readonly) NSString * _Nullable createdbyString __attribute__((swift_name("createdbyString")));
@property (readonly) NSString * _Nullable createddate __attribute__((swift_name("createddate")));
@property (readonly) NSString * _Nullable deeplink __attribute__((swift_name("deeplink")));
@property (readonly) NSString * _Nullable filtersString __attribute__((swift_name("filtersString")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) BbnativesharedBoolean * _Nullable isEmptyBoolean __attribute__((swift_name("isEmptyBoolean")));
@property (readonly) NSArray<BbnativesharedContentItem *> * _Nullable items __attribute__((swift_name("items")));
@property (readonly) NSString * _Nullable listtypeString __attribute__((swift_name("listtypeString")));
@property (readonly) NSString * _Nullable mediatype __attribute__((swift_name("mediatype")));
@property (readonly) NSString * _Nullable modifieddate __attribute__((swift_name("modifieddate")));
@property (readonly) BbnativesharedLong * _Nullable numfound __attribute__((swift_name("numfound")));
@property (readonly) BbnativesharedLong * _Nullable offset __attribute__((swift_name("offset")));
@property (readonly) NSString * _Nullable parentid __attribute__((swift_name("parentid")));
@property (readonly) NSString * _Nullable parentpublicationid __attribute__((swift_name("parentpublicationid")));
@property (readonly) NSArray<NSString *> * _Nullable publication __attribute__((swift_name("publication")));
@property (readonly) NSString * _Nullable publishedDate __attribute__((swift_name("publishedDate")));
@property (readonly) BbnativesharedDouble * _Nullable score __attribute__((swift_name("score")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable updatedbyString __attribute__((swift_name("updatedbyString")));
@property (readonly) NSString * _Nullable usetype __attribute__((swift_name("usetype")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaClipList.Companion")))
@interface BbnativesharedMediaClipListCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedMediaClipListCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Parameter")))
@interface BbnativesharedParameter : BbnativesharedBase
- (instancetype)initWithName:(NSString * _Nullable)name value:(NSString * _Nullable)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedParameterCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedParameter *)doCopyName:(NSString * _Nullable)name value:(NSString * _Nullable)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Parameter.Companion")))
@interface BbnativesharedParameterCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedParameterCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Player")))
@interface BbnativesharedPlayer : BbnativesharedBase
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString * _Nullable)name type:(NSString * _Nullable)type src:(NSString * _Nullable)src updateddate:(NSString * _Nullable)updateddate __attribute__((swift_name("init(id:name:type:src:updateddate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedPlayerCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedPlayer *)doCopyId:(NSString * _Nullable)id name:(NSString * _Nullable)name type:(NSString * _Nullable)type src:(NSString * _Nullable)src updateddate:(NSString * _Nullable)updateddate __attribute__((swift_name("doCopy(id:name:type:src:updateddate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable src __attribute__((swift_name("src")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable updateddate __attribute__((swift_name("updateddate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Player.Companion")))
@interface BbnativesharedPlayerCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedPlayerCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerSettings")))
@interface BbnativesharedPlayerSettings : BbnativesharedBase
- (instancetype)initWithPlayout:(NSString *)playout __attribute__((swift_name("init(playout:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPlayout:(NSString *)playout autoPlay:(BOOL)autoPlay __attribute__((swift_name("init(playout:autoPlay:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedPlayerSettingsCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedPlayerSettings *)doCopyPlayout:(NSString *)playout autoPlay:(BOOL)autoPlay __attribute__((swift_name("doCopy(playout:autoPlay:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL autoPlay __attribute__((swift_name("autoPlay")));
@property (readonly) NSString *playout __attribute__((swift_name("playout")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerSettings.Companion")))
@interface BbnativesharedPlayerSettingsCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedPlayerSettingsCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Playout")))
@interface BbnativesharedPlayout : BbnativesharedBase
- (instancetype)initWithId:(NSString * _Nullable)id main:(NSString * _Nullable)main type:(NSString * _Nullable)type name:(NSString * _Nullable)name status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate updateddate:(NSString * _Nullable)updateddate label:(NSString * _Nullable)label publication:(NSString * _Nullable)publication player:(BbnativesharedPlayer * _Nullable)player playerid:(NSString * _Nullable)playerid centerButtonType:(NSString * _Nullable)centerButtonType cornerRadius:(NSString * _Nullable)cornerRadius responsiveSizing:(NSString * _Nullable)responsiveSizing aspectRatio:(NSString * _Nullable)aspectRatio width:(NSString * _Nullable)width height:(NSString * _Nullable)height autoHeight:(NSString * _Nullable)autoHeight alphaControlBar:(NSString * _Nullable)alphaControlBar skin_backgroundColor:(NSString * _Nullable)skin_backgroundColor skin_foregroundColor:(NSString * _Nullable)skin_foregroundColor skin_widgetColor:(NSString * _Nullable)skin_widgetColor bgColor:(NSString * _Nullable)bgColor logoId:(NSString * _Nullable)logoId logoAlign:(NSString * _Nullable)logoAlign logoClickUrl:(NSString * _Nullable)logoClickUrl controlBar:(NSString * _Nullable)controlBar controlBarPlacement:(NSString * _Nullable)controlBarPlacement timeDisplay:(NSString * _Nullable)timeDisplay timeLine:(NSString * _Nullable)timeLine muteButton:(NSString * _Nullable)muteButton volume:(NSString * _Nullable)volume volumeOrientation:(NSString * _Nullable)volumeOrientation languageSelect:(NSString * _Nullable)languageSelect qualitySelector:(NSString * _Nullable)qualitySelector playbackRateSelector:(NSString * _Nullable)playbackRateSelector fullScreen:(NSString * _Nullable)fullScreen showStartControlBar:(NSString * _Nullable)showStartControlBar shareButton:(NSString * _Nullable)shareButton shareButtonPause:(NSString * _Nullable)shareButtonPause shareButtonEnd:(NSString * _Nullable)shareButtonEnd shareButtonEmbedCode:(NSString * _Nullable)shareButtonEmbedCode shareButtonEmail:(NSString * _Nullable)shareButtonEmail shareButtonFacebook:(NSString * _Nullable)shareButtonFacebook shareButtonLinkedIn:(NSString * _Nullable)shareButtonLinkedIn shareButtonPinterest:(NSString * _Nullable)shareButtonPinterest shareButtonTwitter:(NSString * _Nullable)shareButtonTwitter shareButtonWhatsApp:(NSString * _Nullable)shareButtonWhatsApp castButton:(NSString * _Nullable)castButton showBigPlayButton:(NSString * _Nullable)showBigPlayButton showBigReplayButton:(NSString * _Nullable)showBigReplayButton title:(NSString * _Nullable)title date:(NSString * _Nullable)date authorCopyright:(NSString * _Nullable)authorCopyright authorCopyrightAlign:(NSString * _Nullable)authorCopyrightAlign authorCopyrightPrefixText:(NSString * _Nullable)authorCopyrightPrefixText autoPlayNext:(NSString * _Nullable)autoPlayNext relatedItems:(NSString * _Nullable)relatedItems relatedItemsPause:(NSString * _Nullable)relatedItemsPause useDeeplinkForRelatedItems:(NSString * _Nullable)useDeeplinkForRelatedItems useDeeplinkForRelatedItemsPause:(NSString * _Nullable)useDeeplinkForRelatedItemsPause exitscreenItemsListId:(NSString * _Nullable)exitscreenItemsListId randomizeRelatedItems:(NSString * _Nullable)randomizeRelatedItems useDeeplinkForFacebook:(NSString * _Nullable)useDeeplinkForFacebook shareTwitterText:(NSString * _Nullable)shareTwitterText sharePlayout:(NSString * _Nullable)sharePlayout skinBehaviour:(NSString * _Nullable)skinBehaviour skinOnTimeline:(NSString * _Nullable)skinOnTimeline nativeControls:(NSString * _Nullable)nativeControls youTubeHosting:(NSString * _Nullable)youTubeHosting youTubeSkinInMainPhase:(NSString * _Nullable)youTubeSkinInMainPhase forceNativeFullscreen:(NSString * _Nullable)forceNativeFullscreen preferHD:(NSString * _Nullable)preferHD nedStatLoggerUrl:(NSString * _Nullable)nedStatLoggerUrl googleAnalyticsId:(NSString * _Nullable)googleAnalyticsId piwikUrl:(NSString * _Nullable)piwikUrl piwikSiteId:(NSString * _Nullable)piwikSiteId disableCookies:(NSString * _Nullable)disableCookies disableContextMenuNavigate:(NSString * _Nullable)disableContextMenuNavigate playerSignature:(NSString * _Nullable)playerSignature playerSignatureLink:(NSString * _Nullable)playerSignatureLink autoPlay:(NSString * _Nullable)autoPlay autoMute:(NSString * _Nullable)autoMute autoMuteIfNeededForAutoPlay:(NSString * _Nullable)autoMuteIfNeededForAutoPlay autoLoop:(NSString * _Nullable)autoLoop floatPlayer:(NSString * _Nullable)floatPlayer interactivityInView:(NSString * _Nullable)interactivityInView interactivityOutView:(NSString * _Nullable)interactivityOutView inviewMargin:(NSString * _Nullable)inviewMargin textAbovePlayer:(NSString * _Nullable)textAbovePlayer textCommercialSkip:(NSString * _Nullable)textCommercialSkip startCollapsed:(NSString * _Nullable)startCollapsed playInOverlay:(NSString * _Nullable)playInOverlay hidePlayerOnEnd:(NSString * _Nullable)hidePlayerOnEnd waitForApproval:(NSString * _Nullable)waitForApproval interactivityMouseIn:(NSString * _Nullable)interactivityMouseIn interactivityMouseOut:(NSString * _Nullable)interactivityMouseOut interactivityOnClick:(NSString * _Nullable)interactivityOnClick clickURL:(NSString * _Nullable)clickURL nsiNoAutoPlay:(NSString * _Nullable)nsiNoAutoPlay nsiNoPlayer:(NSString * _Nullable)nsiNoPlayer placementOption:(NSString * _Nullable)placementOption placementDOMSelector:(NSString * _Nullable)placementDOMSelector iframeBreakout:(NSString * _Nullable)iframeBreakout clearBothOption:(NSString * _Nullable)clearBothOption forceInview:(NSString * _Nullable)forceInview customCode:(NSString * _Nullable)customCode preferFlashPlayback:(NSString * _Nullable)preferFlashPlayback preloadMainroll:(NSString * _Nullable)preloadMainroll disableHtml5VPAID:(NSString * _Nullable)disableHtml5VPAID enableHtml5VPAID:(NSString * _Nullable)enableHtml5VPAID commercialPauseButton:(NSString * _Nullable)commercialPauseButton commercialMuteButton:(NSString * _Nullable)commercialMuteButton commercialAdIcon:(NSString * _Nullable)commercialAdIcon commercialProgressBar:(NSString * _Nullable)commercialProgressBar commercialProgressBarColor:(NSString * _Nullable)commercialProgressBarColor commercials:(NSString * _Nullable)commercials textCommercialTimeRemaining:(NSString * _Nullable)textCommercialTimeRemaining commercialBehaviour:(NSString * _Nullable)commercialBehaviour minClipDurationPreroll:(NSString * _Nullable)minClipDurationPreroll minClipDurationPostroll:(NSString * _Nullable)minClipDurationPostroll allowBBIma:(NSString * _Nullable)allowBBIma fitmode:(BbnativesharedFitMode * _Nullable)fitmode mobileRotateOnFullScreenMismatch:(NSString * _Nullable)mobileRotateOnFullScreenMismatch noStats:(NSString * _Nullable)noStats forceAndroidNativeVideo:(NSString * _Nullable)forceAndroidNativeVideo forceIOSNativeVideo:(NSString * _Nullable)forceIOSNativeVideo use2018Skin:(NSString * _Nullable)use2018Skin useThumbsFromMetadata:(NSString * _Nullable)useThumbsFromMetadata audioTrackSelect:(NSString * _Nullable)audioTrackSelect shareText:(NSString * _Nullable)shareText shareButtonDirectLink:(NSString * _Nullable)shareButtonDirectLink googleAnalyticsCustomVars:(NSString * _Nullable)googleAnalyticsCustomVars supportIABConsent:(NSString * _Nullable)supportIABConsent restrictionNpaOnly:(NSString * _Nullable)restrictionNpaOnly restrictionNpcOnly:(NSString * _Nullable)restrictionNpcOnly defaultSubtitle:(NSString * _Nullable)defaultSubtitle defaultSubtitleOnlyIfMuted:(NSString * _Nullable)defaultSubtitleOnlyIfMuted defaultAudioTrack:(NSString * _Nullable)defaultAudioTrack forceCanAutoPlay:(NSString * _Nullable)forceCanAutoPlay avoidMutedAutoplay:(NSString * _Nullable)avoidMutedAutoplay stickyMode:(NSString * _Nullable)stickyMode disableKeyboardControls:(NSString * _Nullable)disableKeyboardControls taggingDisabled:(NSString * _Nullable)taggingDisabled skipOffset:(NSString * _Nullable)skipOffset skipCounterText:(NSString * _Nullable)skipCounterText skipButtonText:(NSString * _Nullable)skipButtonText blockInsecureVPAID:(NSString * _Nullable)blockInsecureVPAID shareButtonGooglePlus:(NSString * _Nullable)shareButtonGooglePlus timelineId:(NSString * _Nullable)timelineId templateId:(NSString * _Nullable)templateId adunits:(NSArray<BbnativesharedKotlinx_serialization_jsonJsonElement *> * _Nullable)adunits hasAdunits:(BbnativesharedBoolean * _Nullable)hasAdunits adunitsPreroll:(NSArray<BbnativesharedAdUnit *> * _Nullable)adunitsPreroll ignoreSingleMediaResource:(NSString * _Nullable)ignoreSingleMediaResource ignoreProjectMetadata:(NSString * _Nullable)ignoreProjectMetadata noPosterInExitPhase:(NSString * _Nullable)noPosterInExitPhase logProgressAsQuartiles:(NSString * _Nullable)logProgressAsQuartiles autoPauseAfterPrePhase:(NSString * _Nullable)autoPauseAfterPrePhase autoPlayOnlyWithPrerollAd:(NSString * _Nullable)autoPlayOnlyWithPrerollAd showOnlyWhenPrerollAvailable:(NSString * _Nullable)showOnlyWhenPrerollAvailable showBigPauseButtons:(NSString * _Nullable)showBigPauseButtons titlePause:(NSString * _Nullable)titlePause authorCopyrightPause:(NSString * _Nullable)authorCopyrightPause authorCopyrightAlignPause:(NSString * _Nullable)authorCopyrightAlignPause authorCopyrightPrefixTextPause:(NSString * _Nullable)authorCopyrightPrefixTextPause showStartDuration:(NSString * _Nullable)showStartDuration disableMovingThumbnail:(NSString * _Nullable)disableMovingThumbnail shareButtonHover:(NSString * _Nullable)shareButtonHover showBigHoverButtons:(NSString * _Nullable)showBigHoverButtons titleHover:(NSString * _Nullable)titleHover authorCopyrightHover:(NSString * _Nullable)authorCopyrightHover titleEnd:(NSString * _Nullable)titleEnd authorCopyrightEnd:(NSString * _Nullable)authorCopyrightEnd softEmbargoCustomPosterClipId:(NSString * _Nullable)softEmbargoCustomPosterClipId softEmbargoFontColor:(NSString * _Nullable)softEmbargoFontColor softEmbargoHasCustomPoster:(NSString * _Nullable)softEmbargoHasCustomPoster softEmbargoText:(NSString * _Nullable)softEmbargoText softEmbargoTimerHidden:(NSString * _Nullable)softEmbargoTimerHidden adsystem_buid:(NSString * _Nullable)adsystem_buid adsystem_rdid:(NSString * _Nullable)adsystem_rdid adsystem_idtype:(NSString * _Nullable)adsystem_idtype adsystem_is_lat:(NSString * _Nullable)adsystem_is_lat swipeDirection:(NSString * _Nullable)swipeDirection hideSwipeControls:(NSString * _Nullable)hideSwipeControls descriptionShowHide:(NSString * _Nullable)descriptionShowHide showPlayButton:(NSString * _Nullable)showPlayButton autoLoopClip:(NSString * _Nullable)autoLoopClip shortsId:(NSString * _Nullable)shortsId adunitId:(NSString * _Nullable)adunitId clipAdInterval:(NSString * _Nullable)clipAdInterval firstAdPosition:(NSString * _Nullable)firstAdPosition assetPreloadWindow:(NSString * _Nullable)assetPreloadWindow placeholderText:(NSString * _Nullable)placeholderText placeholderTextColor:(NSString * _Nullable)placeholderTextColor ctaExitScreen:(NSString * _Nullable)ctaExitScreen ctaMidplay:(NSString * _Nullable)ctaMidplay ctaMidplayPosition:(NSString * _Nullable)ctaMidplayPosition ctaText:(NSString * _Nullable)ctaText ctaTextColor:(NSString * _Nullable)ctaTextColor ctaUrlField:(NSString * _Nullable)ctaUrlField ctaButtonText:(NSString * _Nullable)ctaButtonText ctaButtonUseAccentColor:(NSString * _Nullable)ctaButtonUseAccentColor ctaButtonPosition:(NSString * _Nullable)ctaButtonPosition eventHandlers:(NSArray<BbnativesharedEventHandler *> * _Nullable)eventHandlers __attribute__((swift_name("init(id:main:type:name:status:createddate:updateddate:label:publication:player:playerid:centerButtonType:cornerRadius:responsiveSizing:aspectRatio:width:height:autoHeight:alphaControlBar:skin_backgroundColor:skin_foregroundColor:skin_widgetColor:bgColor:logoId:logoAlign:logoClickUrl:controlBar:controlBarPlacement:timeDisplay:timeLine:muteButton:volume:volumeOrientation:languageSelect:qualitySelector:playbackRateSelector:fullScreen:showStartControlBar:shareButton:shareButtonPause:shareButtonEnd:shareButtonEmbedCode:shareButtonEmail:shareButtonFacebook:shareButtonLinkedIn:shareButtonPinterest:shareButtonTwitter:shareButtonWhatsApp:castButton:showBigPlayButton:showBigReplayButton:title:date:authorCopyright:authorCopyrightAlign:authorCopyrightPrefixText:autoPlayNext:relatedItems:relatedItemsPause:useDeeplinkForRelatedItems:useDeeplinkForRelatedItemsPause:exitscreenItemsListId:randomizeRelatedItems:useDeeplinkForFacebook:shareTwitterText:sharePlayout:skinBehaviour:skinOnTimeline:nativeControls:youTubeHosting:youTubeSkinInMainPhase:forceNativeFullscreen:preferHD:nedStatLoggerUrl:googleAnalyticsId:piwikUrl:piwikSiteId:disableCookies:disableContextMenuNavigate:playerSignature:playerSignatureLink:autoPlay:autoMute:autoMuteIfNeededForAutoPlay:autoLoop:floatPlayer:interactivityInView:interactivityOutView:inviewMargin:textAbovePlayer:textCommercialSkip:startCollapsed:playInOverlay:hidePlayerOnEnd:waitForApproval:interactivityMouseIn:interactivityMouseOut:interactivityOnClick:clickURL:nsiNoAutoPlay:nsiNoPlayer:placementOption:placementDOMSelector:iframeBreakout:clearBothOption:forceInview:customCode:preferFlashPlayback:preloadMainroll:disableHtml5VPAID:enableHtml5VPAID:commercialPauseButton:commercialMuteButton:commercialAdIcon:commercialProgressBar:commercialProgressBarColor:commercials:textCommercialTimeRemaining:commercialBehaviour:minClipDurationPreroll:minClipDurationPostroll:allowBBIma:fitmode:mobileRotateOnFullScreenMismatch:noStats:forceAndroidNativeVideo:forceIOSNativeVideo:use2018Skin:useThumbsFromMetadata:audioTrackSelect:shareText:shareButtonDirectLink:googleAnalyticsCustomVars:supportIABConsent:restrictionNpaOnly:restrictionNpcOnly:defaultSubtitle:defaultSubtitleOnlyIfMuted:defaultAudioTrack:forceCanAutoPlay:avoidMutedAutoplay:stickyMode:disableKeyboardControls:taggingDisabled:skipOffset:skipCounterText:skipButtonText:blockInsecureVPAID:shareButtonGooglePlus:timelineId:templateId:adunits:hasAdunits:adunitsPreroll:ignoreSingleMediaResource:ignoreProjectMetadata:noPosterInExitPhase:logProgressAsQuartiles:autoPauseAfterPrePhase:autoPlayOnlyWithPrerollAd:showOnlyWhenPrerollAvailable:showBigPauseButtons:titlePause:authorCopyrightPause:authorCopyrightAlignPause:authorCopyrightPrefixTextPause:showStartDuration:disableMovingThumbnail:shareButtonHover:showBigHoverButtons:titleHover:authorCopyrightHover:titleEnd:authorCopyrightEnd:softEmbargoCustomPosterClipId:softEmbargoFontColor:softEmbargoHasCustomPoster:softEmbargoText:softEmbargoTimerHidden:adsystem_buid:adsystem_rdid:adsystem_idtype:adsystem_is_lat:swipeDirection:hideSwipeControls:descriptionShowHide:showPlayButton:autoLoopClip:shortsId:adunitId:clipAdInterval:firstAdPosition:assetPreloadWindow:placeholderText:placeholderTextColor:ctaExitScreen:ctaMidplay:ctaMidplayPosition:ctaText:ctaTextColor:ctaUrlField:ctaButtonText:ctaButtonUseAccentColor:ctaButtonPosition:eventHandlers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedPlayoutCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedPlayout *)doCopyId:(NSString * _Nullable)id main:(NSString * _Nullable)main type:(NSString * _Nullable)type name:(NSString * _Nullable)name status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate updateddate:(NSString * _Nullable)updateddate label:(NSString * _Nullable)label publication:(NSString * _Nullable)publication player:(BbnativesharedPlayer * _Nullable)player playerid:(NSString * _Nullable)playerid centerButtonType:(NSString * _Nullable)centerButtonType cornerRadius:(NSString * _Nullable)cornerRadius responsiveSizing:(NSString * _Nullable)responsiveSizing aspectRatio:(NSString * _Nullable)aspectRatio width:(NSString * _Nullable)width height:(NSString * _Nullable)height autoHeight:(NSString * _Nullable)autoHeight alphaControlBar:(NSString * _Nullable)alphaControlBar skin_backgroundColor:(NSString * _Nullable)skin_backgroundColor skin_foregroundColor:(NSString * _Nullable)skin_foregroundColor skin_widgetColor:(NSString * _Nullable)skin_widgetColor bgColor:(NSString * _Nullable)bgColor logoId:(NSString * _Nullable)logoId logoAlign:(NSString * _Nullable)logoAlign logoClickUrl:(NSString * _Nullable)logoClickUrl controlBar:(NSString * _Nullable)controlBar controlBarPlacement:(NSString * _Nullable)controlBarPlacement timeDisplay:(NSString * _Nullable)timeDisplay timeLine:(NSString * _Nullable)timeLine muteButton:(NSString * _Nullable)muteButton volume:(NSString * _Nullable)volume volumeOrientation:(NSString * _Nullable)volumeOrientation languageSelect:(NSString * _Nullable)languageSelect qualitySelector:(NSString * _Nullable)qualitySelector playbackRateSelector:(NSString * _Nullable)playbackRateSelector fullScreen:(NSString * _Nullable)fullScreen showStartControlBar:(NSString * _Nullable)showStartControlBar shareButton:(NSString * _Nullable)shareButton shareButtonPause:(NSString * _Nullable)shareButtonPause shareButtonEnd:(NSString * _Nullable)shareButtonEnd shareButtonEmbedCode:(NSString * _Nullable)shareButtonEmbedCode shareButtonEmail:(NSString * _Nullable)shareButtonEmail shareButtonFacebook:(NSString * _Nullable)shareButtonFacebook shareButtonLinkedIn:(NSString * _Nullable)shareButtonLinkedIn shareButtonPinterest:(NSString * _Nullable)shareButtonPinterest shareButtonTwitter:(NSString * _Nullable)shareButtonTwitter shareButtonWhatsApp:(NSString * _Nullable)shareButtonWhatsApp castButton:(NSString * _Nullable)castButton showBigPlayButton:(NSString * _Nullable)showBigPlayButton showBigReplayButton:(NSString * _Nullable)showBigReplayButton title:(NSString * _Nullable)title date:(NSString * _Nullable)date authorCopyright:(NSString * _Nullable)authorCopyright authorCopyrightAlign:(NSString * _Nullable)authorCopyrightAlign authorCopyrightPrefixText:(NSString * _Nullable)authorCopyrightPrefixText autoPlayNext:(NSString * _Nullable)autoPlayNext relatedItems:(NSString * _Nullable)relatedItems relatedItemsPause:(NSString * _Nullable)relatedItemsPause useDeeplinkForRelatedItems:(NSString * _Nullable)useDeeplinkForRelatedItems useDeeplinkForRelatedItemsPause:(NSString * _Nullable)useDeeplinkForRelatedItemsPause exitscreenItemsListId:(NSString * _Nullable)exitscreenItemsListId randomizeRelatedItems:(NSString * _Nullable)randomizeRelatedItems useDeeplinkForFacebook:(NSString * _Nullable)useDeeplinkForFacebook shareTwitterText:(NSString * _Nullable)shareTwitterText sharePlayout:(NSString * _Nullable)sharePlayout skinBehaviour:(NSString * _Nullable)skinBehaviour skinOnTimeline:(NSString * _Nullable)skinOnTimeline nativeControls:(NSString * _Nullable)nativeControls youTubeHosting:(NSString * _Nullable)youTubeHosting youTubeSkinInMainPhase:(NSString * _Nullable)youTubeSkinInMainPhase forceNativeFullscreen:(NSString * _Nullable)forceNativeFullscreen preferHD:(NSString * _Nullable)preferHD nedStatLoggerUrl:(NSString * _Nullable)nedStatLoggerUrl googleAnalyticsId:(NSString * _Nullable)googleAnalyticsId piwikUrl:(NSString * _Nullable)piwikUrl piwikSiteId:(NSString * _Nullable)piwikSiteId disableCookies:(NSString * _Nullable)disableCookies disableContextMenuNavigate:(NSString * _Nullable)disableContextMenuNavigate playerSignature:(NSString * _Nullable)playerSignature playerSignatureLink:(NSString * _Nullable)playerSignatureLink autoPlay:(NSString * _Nullable)autoPlay autoMute:(NSString * _Nullable)autoMute autoMuteIfNeededForAutoPlay:(NSString * _Nullable)autoMuteIfNeededForAutoPlay autoLoop:(NSString * _Nullable)autoLoop floatPlayer:(NSString * _Nullable)floatPlayer interactivityInView:(NSString * _Nullable)interactivityInView interactivityOutView:(NSString * _Nullable)interactivityOutView inviewMargin:(NSString * _Nullable)inviewMargin textAbovePlayer:(NSString * _Nullable)textAbovePlayer textCommercialSkip:(NSString * _Nullable)textCommercialSkip startCollapsed:(NSString * _Nullable)startCollapsed playInOverlay:(NSString * _Nullable)playInOverlay hidePlayerOnEnd:(NSString * _Nullable)hidePlayerOnEnd waitForApproval:(NSString * _Nullable)waitForApproval interactivityMouseIn:(NSString * _Nullable)interactivityMouseIn interactivityMouseOut:(NSString * _Nullable)interactivityMouseOut interactivityOnClick:(NSString * _Nullable)interactivityOnClick clickURL:(NSString * _Nullable)clickURL nsiNoAutoPlay:(NSString * _Nullable)nsiNoAutoPlay nsiNoPlayer:(NSString * _Nullable)nsiNoPlayer placementOption:(NSString * _Nullable)placementOption placementDOMSelector:(NSString * _Nullable)placementDOMSelector iframeBreakout:(NSString * _Nullable)iframeBreakout clearBothOption:(NSString * _Nullable)clearBothOption forceInview:(NSString * _Nullable)forceInview customCode:(NSString * _Nullable)customCode preferFlashPlayback:(NSString * _Nullable)preferFlashPlayback preloadMainroll:(NSString * _Nullable)preloadMainroll disableHtml5VPAID:(NSString * _Nullable)disableHtml5VPAID enableHtml5VPAID:(NSString * _Nullable)enableHtml5VPAID commercialPauseButton:(NSString * _Nullable)commercialPauseButton commercialMuteButton:(NSString * _Nullable)commercialMuteButton commercialAdIcon:(NSString * _Nullable)commercialAdIcon commercialProgressBar:(NSString * _Nullable)commercialProgressBar commercialProgressBarColor:(NSString * _Nullable)commercialProgressBarColor commercials:(NSString * _Nullable)commercials textCommercialTimeRemaining:(NSString * _Nullable)textCommercialTimeRemaining commercialBehaviour:(NSString * _Nullable)commercialBehaviour minClipDurationPreroll:(NSString * _Nullable)minClipDurationPreroll minClipDurationPostroll:(NSString * _Nullable)minClipDurationPostroll allowBBIma:(NSString * _Nullable)allowBBIma fitmode:(BbnativesharedFitMode * _Nullable)fitmode mobileRotateOnFullScreenMismatch:(NSString * _Nullable)mobileRotateOnFullScreenMismatch noStats:(NSString * _Nullable)noStats forceAndroidNativeVideo:(NSString * _Nullable)forceAndroidNativeVideo forceIOSNativeVideo:(NSString * _Nullable)forceIOSNativeVideo use2018Skin:(NSString * _Nullable)use2018Skin useThumbsFromMetadata:(NSString * _Nullable)useThumbsFromMetadata audioTrackSelect:(NSString * _Nullable)audioTrackSelect shareText:(NSString * _Nullable)shareText shareButtonDirectLink:(NSString * _Nullable)shareButtonDirectLink googleAnalyticsCustomVars:(NSString * _Nullable)googleAnalyticsCustomVars supportIABConsent:(NSString * _Nullable)supportIABConsent restrictionNpaOnly:(NSString * _Nullable)restrictionNpaOnly restrictionNpcOnly:(NSString * _Nullable)restrictionNpcOnly defaultSubtitle:(NSString * _Nullable)defaultSubtitle defaultSubtitleOnlyIfMuted:(NSString * _Nullable)defaultSubtitleOnlyIfMuted defaultAudioTrack:(NSString * _Nullable)defaultAudioTrack forceCanAutoPlay:(NSString * _Nullable)forceCanAutoPlay avoidMutedAutoplay:(NSString * _Nullable)avoidMutedAutoplay stickyMode:(NSString * _Nullable)stickyMode disableKeyboardControls:(NSString * _Nullable)disableKeyboardControls taggingDisabled:(NSString * _Nullable)taggingDisabled skipOffset:(NSString * _Nullable)skipOffset skipCounterText:(NSString * _Nullable)skipCounterText skipButtonText:(NSString * _Nullable)skipButtonText blockInsecureVPAID:(NSString * _Nullable)blockInsecureVPAID shareButtonGooglePlus:(NSString * _Nullable)shareButtonGooglePlus timelineId:(NSString * _Nullable)timelineId templateId:(NSString * _Nullable)templateId adunits:(NSArray<BbnativesharedKotlinx_serialization_jsonJsonElement *> * _Nullable)adunits hasAdunits:(BbnativesharedBoolean * _Nullable)hasAdunits adunitsPreroll:(NSArray<BbnativesharedAdUnit *> * _Nullable)adunitsPreroll ignoreSingleMediaResource:(NSString * _Nullable)ignoreSingleMediaResource ignoreProjectMetadata:(NSString * _Nullable)ignoreProjectMetadata noPosterInExitPhase:(NSString * _Nullable)noPosterInExitPhase logProgressAsQuartiles:(NSString * _Nullable)logProgressAsQuartiles autoPauseAfterPrePhase:(NSString * _Nullable)autoPauseAfterPrePhase autoPlayOnlyWithPrerollAd:(NSString * _Nullable)autoPlayOnlyWithPrerollAd showOnlyWhenPrerollAvailable:(NSString * _Nullable)showOnlyWhenPrerollAvailable showBigPauseButtons:(NSString * _Nullable)showBigPauseButtons titlePause:(NSString * _Nullable)titlePause authorCopyrightPause:(NSString * _Nullable)authorCopyrightPause authorCopyrightAlignPause:(NSString * _Nullable)authorCopyrightAlignPause authorCopyrightPrefixTextPause:(NSString * _Nullable)authorCopyrightPrefixTextPause showStartDuration:(NSString * _Nullable)showStartDuration disableMovingThumbnail:(NSString * _Nullable)disableMovingThumbnail shareButtonHover:(NSString * _Nullable)shareButtonHover showBigHoverButtons:(NSString * _Nullable)showBigHoverButtons titleHover:(NSString * _Nullable)titleHover authorCopyrightHover:(NSString * _Nullable)authorCopyrightHover titleEnd:(NSString * _Nullable)titleEnd authorCopyrightEnd:(NSString * _Nullable)authorCopyrightEnd softEmbargoCustomPosterClipId:(NSString * _Nullable)softEmbargoCustomPosterClipId softEmbargoFontColor:(NSString * _Nullable)softEmbargoFontColor softEmbargoHasCustomPoster:(NSString * _Nullable)softEmbargoHasCustomPoster softEmbargoText:(NSString * _Nullable)softEmbargoText softEmbargoTimerHidden:(NSString * _Nullable)softEmbargoTimerHidden adsystem_buid:(NSString * _Nullable)adsystem_buid adsystem_rdid:(NSString * _Nullable)adsystem_rdid adsystem_idtype:(NSString * _Nullable)adsystem_idtype adsystem_is_lat:(NSString * _Nullable)adsystem_is_lat swipeDirection:(NSString * _Nullable)swipeDirection hideSwipeControls:(NSString * _Nullable)hideSwipeControls descriptionShowHide:(NSString * _Nullable)descriptionShowHide showPlayButton:(NSString * _Nullable)showPlayButton autoLoopClip:(NSString * _Nullable)autoLoopClip shortsId:(NSString * _Nullable)shortsId adunitId:(NSString * _Nullable)adunitId clipAdInterval:(NSString * _Nullable)clipAdInterval firstAdPosition:(NSString * _Nullable)firstAdPosition assetPreloadWindow:(NSString * _Nullable)assetPreloadWindow placeholderText:(NSString * _Nullable)placeholderText placeholderTextColor:(NSString * _Nullable)placeholderTextColor ctaExitScreen:(NSString * _Nullable)ctaExitScreen ctaMidplay:(NSString * _Nullable)ctaMidplay ctaMidplayPosition:(NSString * _Nullable)ctaMidplayPosition ctaText:(NSString * _Nullable)ctaText ctaTextColor:(NSString * _Nullable)ctaTextColor ctaUrlField:(NSString * _Nullable)ctaUrlField ctaButtonText:(NSString * _Nullable)ctaButtonText ctaButtonUseAccentColor:(NSString * _Nullable)ctaButtonUseAccentColor ctaButtonPosition:(NSString * _Nullable)ctaButtonPosition eventHandlers:(NSArray<BbnativesharedEventHandler *> * _Nullable)eventHandlers __attribute__((swift_name("doCopy(id:main:type:name:status:createddate:updateddate:label:publication:player:playerid:centerButtonType:cornerRadius:responsiveSizing:aspectRatio:width:height:autoHeight:alphaControlBar:skin_backgroundColor:skin_foregroundColor:skin_widgetColor:bgColor:logoId:logoAlign:logoClickUrl:controlBar:controlBarPlacement:timeDisplay:timeLine:muteButton:volume:volumeOrientation:languageSelect:qualitySelector:playbackRateSelector:fullScreen:showStartControlBar:shareButton:shareButtonPause:shareButtonEnd:shareButtonEmbedCode:shareButtonEmail:shareButtonFacebook:shareButtonLinkedIn:shareButtonPinterest:shareButtonTwitter:shareButtonWhatsApp:castButton:showBigPlayButton:showBigReplayButton:title:date:authorCopyright:authorCopyrightAlign:authorCopyrightPrefixText:autoPlayNext:relatedItems:relatedItemsPause:useDeeplinkForRelatedItems:useDeeplinkForRelatedItemsPause:exitscreenItemsListId:randomizeRelatedItems:useDeeplinkForFacebook:shareTwitterText:sharePlayout:skinBehaviour:skinOnTimeline:nativeControls:youTubeHosting:youTubeSkinInMainPhase:forceNativeFullscreen:preferHD:nedStatLoggerUrl:googleAnalyticsId:piwikUrl:piwikSiteId:disableCookies:disableContextMenuNavigate:playerSignature:playerSignatureLink:autoPlay:autoMute:autoMuteIfNeededForAutoPlay:autoLoop:floatPlayer:interactivityInView:interactivityOutView:inviewMargin:textAbovePlayer:textCommercialSkip:startCollapsed:playInOverlay:hidePlayerOnEnd:waitForApproval:interactivityMouseIn:interactivityMouseOut:interactivityOnClick:clickURL:nsiNoAutoPlay:nsiNoPlayer:placementOption:placementDOMSelector:iframeBreakout:clearBothOption:forceInview:customCode:preferFlashPlayback:preloadMainroll:disableHtml5VPAID:enableHtml5VPAID:commercialPauseButton:commercialMuteButton:commercialAdIcon:commercialProgressBar:commercialProgressBarColor:commercials:textCommercialTimeRemaining:commercialBehaviour:minClipDurationPreroll:minClipDurationPostroll:allowBBIma:fitmode:mobileRotateOnFullScreenMismatch:noStats:forceAndroidNativeVideo:forceIOSNativeVideo:use2018Skin:useThumbsFromMetadata:audioTrackSelect:shareText:shareButtonDirectLink:googleAnalyticsCustomVars:supportIABConsent:restrictionNpaOnly:restrictionNpcOnly:defaultSubtitle:defaultSubtitleOnlyIfMuted:defaultAudioTrack:forceCanAutoPlay:avoidMutedAutoplay:stickyMode:disableKeyboardControls:taggingDisabled:skipOffset:skipCounterText:skipButtonText:blockInsecureVPAID:shareButtonGooglePlus:timelineId:templateId:adunits:hasAdunits:adunitsPreroll:ignoreSingleMediaResource:ignoreProjectMetadata:noPosterInExitPhase:logProgressAsQuartiles:autoPauseAfterPrePhase:autoPlayOnlyWithPrerollAd:showOnlyWhenPrerollAvailable:showBigPauseButtons:titlePause:authorCopyrightPause:authorCopyrightAlignPause:authorCopyrightPrefixTextPause:showStartDuration:disableMovingThumbnail:shareButtonHover:showBigHoverButtons:titleHover:authorCopyrightHover:titleEnd:authorCopyrightEnd:softEmbargoCustomPosterClipId:softEmbargoFontColor:softEmbargoHasCustomPoster:softEmbargoText:softEmbargoTimerHidden:adsystem_buid:adsystem_rdid:adsystem_idtype:adsystem_is_lat:swipeDirection:hideSwipeControls:descriptionShowHide:showPlayButton:autoLoopClip:shortsId:adunitId:clipAdInterval:firstAdPosition:assetPreloadWindow:placeholderText:placeholderTextColor:ctaExitScreen:ctaMidplay:ctaMidplayPosition:ctaText:ctaTextColor:ctaUrlField:ctaButtonText:ctaButtonUseAccentColor:ctaButtonPosition:eventHandlers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable adsystem_buid __attribute__((swift_name("adsystem_buid")));
@property (readonly) NSString * _Nullable adsystem_idtype __attribute__((swift_name("adsystem_idtype")));
@property (readonly) NSString * _Nullable adsystem_is_lat __attribute__((swift_name("adsystem_is_lat")));
@property (readonly) NSString * _Nullable adsystem_rdid __attribute__((swift_name("adsystem_rdid")));
@property (readonly) NSString * _Nullable adunitId __attribute__((swift_name("adunitId")));
@property (readonly) NSArray<BbnativesharedKotlinx_serialization_jsonJsonElement *> * _Nullable adunits __attribute__((swift_name("adunits")));
@property (readonly) NSArray<BbnativesharedAdUnit *> * _Nullable adunitsPreroll __attribute__((swift_name("adunitsPreroll")));
@property (readonly) NSString * _Nullable allowBBIma __attribute__((swift_name("allowBBIma")));
@property (readonly) NSString * _Nullable alphaControlBar __attribute__((swift_name("alphaControlBar")));
@property (readonly) NSString * _Nullable aspectRatio __attribute__((swift_name("aspectRatio")));
@property (readonly) NSString * _Nullable assetPreloadWindow __attribute__((swift_name("assetPreloadWindow")));
@property (readonly) NSString * _Nullable audioTrackSelect __attribute__((swift_name("audioTrackSelect")));
@property (readonly) NSString * _Nullable authorCopyright __attribute__((swift_name("authorCopyright")));
@property (readonly) NSString * _Nullable authorCopyrightAlign __attribute__((swift_name("authorCopyrightAlign")));
@property (readonly) NSString * _Nullable authorCopyrightAlignPause __attribute__((swift_name("authorCopyrightAlignPause")));
@property (readonly) NSString * _Nullable authorCopyrightEnd __attribute__((swift_name("authorCopyrightEnd")));
@property (readonly) NSString * _Nullable authorCopyrightHover __attribute__((swift_name("authorCopyrightHover")));
@property (readonly) NSString * _Nullable authorCopyrightPause __attribute__((swift_name("authorCopyrightPause")));
@property (readonly) NSString * _Nullable authorCopyrightPrefixText __attribute__((swift_name("authorCopyrightPrefixText")));
@property (readonly) NSString * _Nullable authorCopyrightPrefixTextPause __attribute__((swift_name("authorCopyrightPrefixTextPause")));
@property (readonly) NSString * _Nullable autoHeight __attribute__((swift_name("autoHeight")));
@property (readonly) NSString * _Nullable autoLoop __attribute__((swift_name("autoLoop")));
@property (readonly) NSString * _Nullable autoLoopClip __attribute__((swift_name("autoLoopClip")));
@property (readonly) NSString * _Nullable autoMute __attribute__((swift_name("autoMute")));
@property (readonly) NSString * _Nullable autoMuteIfNeededForAutoPlay __attribute__((swift_name("autoMuteIfNeededForAutoPlay")));
@property (readonly) NSString * _Nullable autoPauseAfterPrePhase __attribute__((swift_name("autoPauseAfterPrePhase")));
@property (readonly) NSString * _Nullable autoPlay __attribute__((swift_name("autoPlay")));
@property (readonly) NSString * _Nullable autoPlayNext __attribute__((swift_name("autoPlayNext")));
@property (readonly) NSString * _Nullable autoPlayOnlyWithPrerollAd __attribute__((swift_name("autoPlayOnlyWithPrerollAd")));
@property (readonly) NSString * _Nullable avoidMutedAutoplay __attribute__((swift_name("avoidMutedAutoplay")));
@property (readonly) NSString * _Nullable bgColor __attribute__((swift_name("bgColor")));
@property (readonly) NSString * _Nullable blockInsecureVPAID __attribute__((swift_name("blockInsecureVPAID")));
@property (readonly) NSString * _Nullable castButton __attribute__((swift_name("castButton")));
@property (readonly) NSString * _Nullable centerButtonType __attribute__((swift_name("centerButtonType")));
@property (readonly) NSString * _Nullable clearBothOption __attribute__((swift_name("clearBothOption")));
@property (readonly) NSString * _Nullable clickURL __attribute__((swift_name("clickURL")));
@property (readonly) NSString * _Nullable clipAdInterval __attribute__((swift_name("clipAdInterval")));
@property NSString * _Nullable commercialAdIcon __attribute__((swift_name("commercialAdIcon")));
@property (readonly) NSString * _Nullable commercialBehaviour __attribute__((swift_name("commercialBehaviour")));
@property (readonly) NSString * _Nullable commercialMuteButton __attribute__((swift_name("commercialMuteButton")));
@property (readonly) NSString * _Nullable commercialPauseButton __attribute__((swift_name("commercialPauseButton")));
@property (readonly) NSString * _Nullable commercialProgressBar __attribute__((swift_name("commercialProgressBar")));
@property (readonly) NSString * _Nullable commercialProgressBarColor __attribute__((swift_name("commercialProgressBarColor")));
@property (readonly) NSString * _Nullable commercials __attribute__((swift_name("commercials")));
@property (readonly) NSString * _Nullable controlBar __attribute__((swift_name("controlBar")));
@property (readonly) NSString * _Nullable controlBarPlacement __attribute__((swift_name("controlBarPlacement")));
@property (readonly) NSString * _Nullable cornerRadius __attribute__((swift_name("cornerRadius")));
@property (readonly) NSString * _Nullable createddate __attribute__((swift_name("createddate")));
@property (readonly) NSString * _Nullable ctaButtonPosition __attribute__((swift_name("ctaButtonPosition")));
@property (readonly) NSString * _Nullable ctaButtonText __attribute__((swift_name("ctaButtonText")));
@property (readonly) NSString * _Nullable ctaButtonUseAccentColor __attribute__((swift_name("ctaButtonUseAccentColor")));
@property (readonly) NSString * _Nullable ctaExitScreen __attribute__((swift_name("ctaExitScreen")));
@property (readonly) NSString * _Nullable ctaMidplay __attribute__((swift_name("ctaMidplay")));
@property (readonly) NSString * _Nullable ctaMidplayPosition __attribute__((swift_name("ctaMidplayPosition")));
@property (readonly) NSString * _Nullable ctaText __attribute__((swift_name("ctaText")));
@property (readonly) NSString * _Nullable ctaTextColor __attribute__((swift_name("ctaTextColor")));
@property (readonly) NSString * _Nullable ctaUrlField __attribute__((swift_name("ctaUrlField")));
@property (readonly) NSString * _Nullable customCode __attribute__((swift_name("customCode")));
@property (readonly) NSString * _Nullable date __attribute__((swift_name("date")));
@property (readonly) NSString * _Nullable defaultAudioTrack __attribute__((swift_name("defaultAudioTrack")));
@property (readonly) NSString * _Nullable defaultSubtitle __attribute__((swift_name("defaultSubtitle")));
@property (readonly) NSString * _Nullable defaultSubtitleOnlyIfMuted __attribute__((swift_name("defaultSubtitleOnlyIfMuted")));
@property (readonly) NSString * _Nullable descriptionShowHide __attribute__((swift_name("descriptionShowHide")));
@property (readonly) NSString * _Nullable disableContextMenuNavigate __attribute__((swift_name("disableContextMenuNavigate")));
@property (readonly) NSString * _Nullable disableCookies __attribute__((swift_name("disableCookies")));
@property (readonly) NSString * _Nullable disableHtml5VPAID __attribute__((swift_name("disableHtml5VPAID")));
@property (readonly) NSString * _Nullable disableKeyboardControls __attribute__((swift_name("disableKeyboardControls")));
@property (readonly) NSString * _Nullable disableMovingThumbnail __attribute__((swift_name("disableMovingThumbnail")));
@property (readonly) NSString * _Nullable enableHtml5VPAID __attribute__((swift_name("enableHtml5VPAID")));
@property (readonly) NSArray<BbnativesharedEventHandler *> * _Nullable eventHandlers __attribute__((swift_name("eventHandlers")));
@property (readonly) NSString * _Nullable exitscreenItemsListId __attribute__((swift_name("exitscreenItemsListId")));
@property (readonly) NSString * _Nullable firstAdPosition __attribute__((swift_name("firstAdPosition")));
@property (readonly) BbnativesharedFitMode * _Nullable fitmode __attribute__((swift_name("fitmode")));
@property (readonly) NSString * _Nullable floatPlayer __attribute__((swift_name("floatPlayer")));
@property (readonly) NSString * _Nullable forceAndroidNativeVideo __attribute__((swift_name("forceAndroidNativeVideo")));
@property (readonly) NSString * _Nullable forceCanAutoPlay __attribute__((swift_name("forceCanAutoPlay")));
@property (readonly) NSString * _Nullable forceIOSNativeVideo __attribute__((swift_name("forceIOSNativeVideo")));
@property (readonly) NSString * _Nullable forceInview __attribute__((swift_name("forceInview")));
@property (readonly) NSString * _Nullable forceNativeFullscreen __attribute__((swift_name("forceNativeFullscreen")));
@property (readonly) NSString * _Nullable fullScreen __attribute__((swift_name("fullScreen")));
@property (readonly) NSString * _Nullable googleAnalyticsCustomVars __attribute__((swift_name("googleAnalyticsCustomVars")));
@property (readonly) NSString * _Nullable googleAnalyticsId __attribute__((swift_name("googleAnalyticsId")));
@property (readonly) BbnativesharedBoolean * _Nullable hasAdunits __attribute__((swift_name("hasAdunits")));
@property (readonly) NSString * _Nullable height __attribute__((swift_name("height")));
@property (readonly) NSString * _Nullable hidePlayerOnEnd __attribute__((swift_name("hidePlayerOnEnd")));
@property (readonly) NSString * _Nullable hideSwipeControls __attribute__((swift_name("hideSwipeControls")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable iframeBreakout __attribute__((swift_name("iframeBreakout")));
@property (readonly) NSString * _Nullable ignoreProjectMetadata __attribute__((swift_name("ignoreProjectMetadata")));
@property (readonly) NSString * _Nullable ignoreSingleMediaResource __attribute__((swift_name("ignoreSingleMediaResource")));
@property (readonly) NSString * _Nullable interactivityInView __attribute__((swift_name("interactivityInView")));
@property (readonly) NSString * _Nullable interactivityMouseIn __attribute__((swift_name("interactivityMouseIn")));
@property (readonly) NSString * _Nullable interactivityMouseOut __attribute__((swift_name("interactivityMouseOut")));
@property (readonly) NSString * _Nullable interactivityOnClick __attribute__((swift_name("interactivityOnClick")));
@property (readonly) NSString * _Nullable interactivityOutView __attribute__((swift_name("interactivityOutView")));
@property (readonly) NSString * _Nullable inviewMargin __attribute__((swift_name("inviewMargin")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSString * _Nullable languageSelect __attribute__((swift_name("languageSelect")));
@property (readonly) NSString * _Nullable logProgressAsQuartiles __attribute__((swift_name("logProgressAsQuartiles")));
@property (readonly) NSString * _Nullable logoAlign __attribute__((swift_name("logoAlign")));
@property (readonly) NSString * _Nullable logoClickUrl __attribute__((swift_name("logoClickUrl")));
@property (readonly) NSString * _Nullable logoId __attribute__((swift_name("logoId")));
@property (readonly) NSString * _Nullable main __attribute__((swift_name("main")));
@property (readonly) NSString * _Nullable minClipDurationPostroll __attribute__((swift_name("minClipDurationPostroll")));
@property (readonly) NSString * _Nullable minClipDurationPreroll __attribute__((swift_name("minClipDurationPreroll")));
@property (readonly) NSString * _Nullable mobileRotateOnFullScreenMismatch __attribute__((swift_name("mobileRotateOnFullScreenMismatch")));
@property (readonly) NSString * _Nullable muteButton __attribute__((swift_name("muteButton")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable nativeControls __attribute__((swift_name("nativeControls")));
@property (readonly) NSString * _Nullable nedStatLoggerUrl __attribute__((swift_name("nedStatLoggerUrl")));
@property (readonly) NSString * _Nullable noPosterInExitPhase __attribute__((swift_name("noPosterInExitPhase")));
@property (readonly) NSString * _Nullable noStats __attribute__((swift_name("noStats")));
@property (readonly) NSString * _Nullable nsiNoAutoPlay __attribute__((swift_name("nsiNoAutoPlay")));
@property (readonly) NSString * _Nullable nsiNoPlayer __attribute__((swift_name("nsiNoPlayer")));
@property (readonly) NSString * _Nullable piwikSiteId __attribute__((swift_name("piwikSiteId")));
@property (readonly) NSString * _Nullable piwikUrl __attribute__((swift_name("piwikUrl")));
@property (readonly) NSString * _Nullable placeholderText __attribute__((swift_name("placeholderText")));
@property (readonly) NSString * _Nullable placeholderTextColor __attribute__((swift_name("placeholderTextColor")));
@property (readonly) NSString * _Nullable placementDOMSelector __attribute__((swift_name("placementDOMSelector")));
@property (readonly) NSString * _Nullable placementOption __attribute__((swift_name("placementOption")));
@property (readonly) NSString * _Nullable playInOverlay __attribute__((swift_name("playInOverlay")));
@property (readonly) NSString * _Nullable playbackRateSelector __attribute__((swift_name("playbackRateSelector")));
@property (readonly) BbnativesharedPlayer * _Nullable player __attribute__((swift_name("player")));
@property (readonly) NSString * _Nullable playerSignature __attribute__((swift_name("playerSignature")));
@property (readonly) NSString * _Nullable playerSignatureLink __attribute__((swift_name("playerSignatureLink")));
@property (readonly) NSString * _Nullable playerid __attribute__((swift_name("playerid")));
@property (readonly) NSString * _Nullable preferFlashPlayback __attribute__((swift_name("preferFlashPlayback")));
@property (readonly) NSString * _Nullable preferHD __attribute__((swift_name("preferHD")));
@property (readonly) NSString * _Nullable preloadMainroll __attribute__((swift_name("preloadMainroll")));
@property (readonly) NSString * _Nullable publication __attribute__((swift_name("publication")));
@property (readonly) NSString * _Nullable qualitySelector __attribute__((swift_name("qualitySelector")));
@property (readonly) NSString * _Nullable randomizeRelatedItems __attribute__((swift_name("randomizeRelatedItems")));
@property (readonly) NSString * _Nullable relatedItems __attribute__((swift_name("relatedItems")));
@property (readonly) NSString * _Nullable relatedItemsPause __attribute__((swift_name("relatedItemsPause")));
@property (readonly) NSString * _Nullable responsiveSizing __attribute__((swift_name("responsiveSizing")));
@property (readonly) NSString * _Nullable restrictionNpaOnly __attribute__((swift_name("restrictionNpaOnly")));
@property (readonly) NSString * _Nullable restrictionNpcOnly __attribute__((swift_name("restrictionNpcOnly")));
@property (readonly) NSString * _Nullable shareButton __attribute__((swift_name("shareButton")));
@property (readonly) NSString * _Nullable shareButtonDirectLink __attribute__((swift_name("shareButtonDirectLink")));
@property (readonly) NSString * _Nullable shareButtonEmail __attribute__((swift_name("shareButtonEmail")));
@property (readonly) NSString * _Nullable shareButtonEmbedCode __attribute__((swift_name("shareButtonEmbedCode")));
@property (readonly) NSString * _Nullable shareButtonEnd __attribute__((swift_name("shareButtonEnd")));
@property (readonly) NSString * _Nullable shareButtonFacebook __attribute__((swift_name("shareButtonFacebook")));
@property (readonly) NSString * _Nullable shareButtonGooglePlus __attribute__((swift_name("shareButtonGooglePlus")));
@property (readonly) NSString * _Nullable shareButtonHover __attribute__((swift_name("shareButtonHover")));
@property (readonly) NSString * _Nullable shareButtonLinkedIn __attribute__((swift_name("shareButtonLinkedIn")));
@property (readonly) NSString * _Nullable shareButtonPause __attribute__((swift_name("shareButtonPause")));
@property (readonly) NSString * _Nullable shareButtonPinterest __attribute__((swift_name("shareButtonPinterest")));
@property (readonly) NSString * _Nullable shareButtonTwitter __attribute__((swift_name("shareButtonTwitter")));
@property (readonly) NSString * _Nullable shareButtonWhatsApp __attribute__((swift_name("shareButtonWhatsApp")));
@property (readonly) NSString * _Nullable sharePlayout __attribute__((swift_name("sharePlayout")));
@property (readonly) NSString * _Nullable shareText __attribute__((swift_name("shareText")));
@property (readonly) NSString * _Nullable shareTwitterText __attribute__((swift_name("shareTwitterText")));
@property (readonly) NSString * _Nullable shortsId __attribute__((swift_name("shortsId")));
@property (readonly) NSString * _Nullable showBigHoverButtons __attribute__((swift_name("showBigHoverButtons")));
@property (readonly) NSString * _Nullable showBigPauseButtons __attribute__((swift_name("showBigPauseButtons")));
@property (readonly) NSString * _Nullable showBigPlayButton __attribute__((swift_name("showBigPlayButton")));
@property (readonly) NSString * _Nullable showBigReplayButton __attribute__((swift_name("showBigReplayButton")));
@property (readonly) NSString * _Nullable showOnlyWhenPrerollAvailable __attribute__((swift_name("showOnlyWhenPrerollAvailable")));
@property (readonly) NSString * _Nullable showPlayButton __attribute__((swift_name("showPlayButton")));
@property (readonly) NSString * _Nullable showStartControlBar __attribute__((swift_name("showStartControlBar")));
@property (readonly) NSString * _Nullable showStartDuration __attribute__((swift_name("showStartDuration")));
@property (readonly) NSString * _Nullable skinBehaviour __attribute__((swift_name("skinBehaviour")));
@property (readonly) NSString * _Nullable skinOnTimeline __attribute__((swift_name("skinOnTimeline")));
@property (readonly) NSString * _Nullable skin_backgroundColor __attribute__((swift_name("skin_backgroundColor")));
@property (readonly) NSString * _Nullable skin_foregroundColor __attribute__((swift_name("skin_foregroundColor")));
@property (readonly) NSString * _Nullable skin_widgetColor __attribute__((swift_name("skin_widgetColor")));
@property (readonly) NSString * _Nullable skipButtonText __attribute__((swift_name("skipButtonText")));
@property (readonly) NSString * _Nullable skipCounterText __attribute__((swift_name("skipCounterText")));
@property (readonly) NSString * _Nullable skipOffset __attribute__((swift_name("skipOffset")));
@property (readonly) NSString * _Nullable softEmbargoCustomPosterClipId __attribute__((swift_name("softEmbargoCustomPosterClipId")));
@property (readonly) NSString * _Nullable softEmbargoFontColor __attribute__((swift_name("softEmbargoFontColor")));
@property (readonly) NSString * _Nullable softEmbargoHasCustomPoster __attribute__((swift_name("softEmbargoHasCustomPoster")));
@property (readonly) NSString * _Nullable softEmbargoText __attribute__((swift_name("softEmbargoText")));
@property (readonly) NSString * _Nullable softEmbargoTimerHidden __attribute__((swift_name("softEmbargoTimerHidden")));
@property (readonly) NSString * _Nullable startCollapsed __attribute__((swift_name("startCollapsed")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable stickyMode __attribute__((swift_name("stickyMode")));
@property (readonly) NSString * _Nullable supportIABConsent __attribute__((swift_name("supportIABConsent")));
@property (readonly) NSString * _Nullable swipeDirection __attribute__((swift_name("swipeDirection")));
@property (readonly) NSString * _Nullable taggingDisabled __attribute__((swift_name("taggingDisabled")));
@property (readonly) NSString * _Nullable templateId __attribute__((swift_name("templateId")));
@property (readonly) NSString * _Nullable textAbovePlayer __attribute__((swift_name("textAbovePlayer")));
@property (readonly) NSString * _Nullable textCommercialSkip __attribute__((swift_name("textCommercialSkip")));
@property (readonly) NSString * _Nullable textCommercialTimeRemaining __attribute__((swift_name("textCommercialTimeRemaining")));
@property (readonly) NSString * _Nullable timeDisplay __attribute__((swift_name("timeDisplay")));
@property (readonly) NSString * _Nullable timeLine __attribute__((swift_name("timeLine")));
@property (readonly) NSString * _Nullable timelineId __attribute__((swift_name("timelineId")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable titleEnd __attribute__((swift_name("titleEnd")));
@property (readonly) NSString * _Nullable titleHover __attribute__((swift_name("titleHover")));
@property (readonly) NSString * _Nullable titlePause __attribute__((swift_name("titlePause")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable updateddate __attribute__((swift_name("updateddate")));
@property (readonly) NSString * _Nullable use2018Skin __attribute__((swift_name("use2018Skin")));
@property (readonly) NSString * _Nullable useDeeplinkForFacebook __attribute__((swift_name("useDeeplinkForFacebook")));
@property (readonly) NSString * _Nullable useDeeplinkForRelatedItems __attribute__((swift_name("useDeeplinkForRelatedItems")));
@property (readonly) NSString * _Nullable useDeeplinkForRelatedItemsPause __attribute__((swift_name("useDeeplinkForRelatedItemsPause")));
@property (readonly) NSString * _Nullable useThumbsFromMetadata __attribute__((swift_name("useThumbsFromMetadata")));
@property (readonly) NSString * _Nullable volume __attribute__((swift_name("volume")));
@property (readonly) NSString * _Nullable volumeOrientation __attribute__((swift_name("volumeOrientation")));
@property (readonly) NSString * _Nullable waitForApproval __attribute__((swift_name("waitForApproval")));
@property (readonly) NSString * _Nullable width __attribute__((swift_name("width")));
@property (readonly) NSString * _Nullable youTubeHosting __attribute__((swift_name("youTubeHosting")));
@property (readonly) NSString * _Nullable youTubeSkinInMainPhase __attribute__((swift_name("youTubeSkinInMainPhase")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Playout.Companion")))
@interface BbnativesharedPlayoutCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedPlayoutCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Procedure")))
@interface BbnativesharedProcedure : BbnativesharedBase
- (instancetype)initWithId:(NSString * _Nullable)id condition:(BbnativesharedCondition * _Nullable)condition actions:(NSArray<BbnativesharedAction *> * _Nullable)actions elseActions:(NSArray<BbnativesharedKotlinx_serialization_jsonJsonElement *> * _Nullable)elseActions type:(NSString * _Nullable)type __attribute__((swift_name("init(id:condition:actions:elseActions:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedProcedureCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedProcedure *)doCopyId:(NSString * _Nullable)id condition:(BbnativesharedCondition * _Nullable)condition actions:(NSArray<BbnativesharedAction *> * _Nullable)actions elseActions:(NSArray<BbnativesharedKotlinx_serialization_jsonJsonElement *> * _Nullable)elseActions type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(id:condition:actions:elseActions:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<BbnativesharedAction *> * _Nullable actions __attribute__((swift_name("actions")));
@property (readonly) BbnativesharedCondition * _Nullable condition __attribute__((swift_name("condition")));
@property (readonly) NSArray<BbnativesharedKotlinx_serialization_jsonJsonElement *> * _Nullable elseActions __attribute__((swift_name("elseActions")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Procedure.Companion")))
@interface BbnativesharedProcedureCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedProcedureCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Project")))
@interface BbnativesharedProject : BbnativesharedContentItem <BbnativesharedContentItemInterface>
- (instancetype)initWithId:(NSString *)id title:(NSString * _Nullable)title deeplink:(NSString * _Nullable)deeplink __attribute__((swift_name("init(id:title:deeplink:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString * _Nullable)id title:(NSString * _Nullable)title deeplink:(NSString * _Nullable)deeplink status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate thumbnails:(NSArray<BbnativesharedThumbnail *> * _Nullable)thumbnails name:(NSString * _Nullable)name createdBy:(NSString * _Nullable)createdBy updateddate:(NSString * _Nullable)updateddate updatedBy:(NSString * _Nullable)updatedBy subtype:(NSString * _Nullable)subtype cat:(NSArray<NSString *> * _Nullable)cat clipCount:(BbnativesharedLong * _Nullable)clipCount publisheddate:(NSString * _Nullable)publisheddate useGaplessPlayback:(BbnativesharedBoolean * _Nullable)useGaplessPlayback distribution:(NSString * _Nullable)distribution goal:(NSString * _Nullable)goal useGaplessMetadata:(BbnativesharedBoolean * _Nullable)useGaplessMetadata useThumbsFromMetadata:(NSString * _Nullable)useThumbsFromMetadata noIntroClip:(BbnativesharedBoolean * _Nullable)noIntroClip analysis:(NSString * _Nullable)analysis description:(NSString * _Nullable)description author:(NSString * _Nullable)author copyright:(NSString * _Nullable)copyright transcript:(NSString * _Nullable)transcript label:(NSString * _Nullable)label chapters:(NSArray<BbnativesharedChapter *> * _Nullable)chapters timelineId:(NSString * _Nullable)timelineId timelines:(NSArray<BbnativesharedTimeline *> * _Nullable)timelines mainMediaClipId:(NSString * _Nullable)mainMediaClipId mainMediaClipData:(BbnativesharedMediaClip * _Nullable)mainMediaClipData __attribute__((swift_name("init(id:title:deeplink:status:createddate:thumbnails:name:createdBy:updateddate:updatedBy:subtype:cat:clipCount:publisheddate:useGaplessPlayback:distribution:goal:useGaplessMetadata:useThumbsFromMetadata:noIntroClip:analysis:description:author:copyright:transcript:label:chapters:timelineId:timelines:mainMediaClipId:mainMediaClipData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) BbnativesharedProjectCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedProject *)doCopyId:(NSString * _Nullable)id title:(NSString * _Nullable)title deeplink:(NSString * _Nullable)deeplink status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate thumbnails:(NSArray<BbnativesharedThumbnail *> * _Nullable)thumbnails name:(NSString * _Nullable)name createdBy:(NSString * _Nullable)createdBy updateddate:(NSString * _Nullable)updateddate updatedBy:(NSString * _Nullable)updatedBy subtype:(NSString * _Nullable)subtype cat:(NSArray<NSString *> * _Nullable)cat clipCount:(BbnativesharedLong * _Nullable)clipCount publisheddate:(NSString * _Nullable)publisheddate useGaplessPlayback:(BbnativesharedBoolean * _Nullable)useGaplessPlayback distribution:(NSString * _Nullable)distribution goal:(NSString * _Nullable)goal useGaplessMetadata:(BbnativesharedBoolean * _Nullable)useGaplessMetadata useThumbsFromMetadata:(NSString * _Nullable)useThumbsFromMetadata noIntroClip:(BbnativesharedBoolean * _Nullable)noIntroClip analysis:(NSString * _Nullable)analysis description:(NSString * _Nullable)description author:(NSString * _Nullable)author copyright:(NSString * _Nullable)copyright transcript:(NSString * _Nullable)transcript label:(NSString * _Nullable)label chapters:(NSArray<BbnativesharedChapter *> * _Nullable)chapters timelineId:(NSString * _Nullable)timelineId timelines:(NSArray<BbnativesharedTimeline *> * _Nullable)timelines mainMediaClipId:(NSString * _Nullable)mainMediaClipId mainMediaClipData:(BbnativesharedMediaClip * _Nullable)mainMediaClipData __attribute__((swift_name("doCopy(id:title:deeplink:status:createddate:thumbnails:name:createdBy:updateddate:updatedBy:subtype:cat:clipCount:publisheddate:useGaplessPlayback:distribution:goal:useGaplessMetadata:useThumbsFromMetadata:noIntroClip:analysis:description:author:copyright:transcript:label:chapters:timelineId:timelines:mainMediaClipId:mainMediaClipData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable analysis __attribute__((swift_name("analysis")));
@property (readonly) NSString * _Nullable author __attribute__((swift_name("author")));
@property (readonly) NSArray<NSString *> * _Nullable cat __attribute__((swift_name("cat")));
@property (readonly) NSArray<BbnativesharedChapter *> * _Nullable chapters __attribute__((swift_name("chapters")));
@property (readonly) BbnativesharedLong * _Nullable clipCount __attribute__((swift_name("clipCount")));
@property (readonly) NSString * _Nullable copyright __attribute__((swift_name("copyright")));
@property (readonly) NSString * _Nullable createdBy __attribute__((swift_name("createdBy")));
@property (readonly) NSString * _Nullable createddate __attribute__((swift_name("createddate")));
@property (readonly) NSString * _Nullable deeplink __attribute__((swift_name("deeplink")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable distribution __attribute__((swift_name("distribution")));
@property (readonly) NSString * _Nullable goal __attribute__((swift_name("goal")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property BbnativesharedMediaClip * _Nullable mainMediaClipData __attribute__((swift_name("mainMediaClipData")));
@property (readonly) NSString * _Nullable mainMediaClipId __attribute__((swift_name("mainMediaClipId")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) BbnativesharedBoolean * _Nullable noIntroClip __attribute__((swift_name("noIntroClip")));
@property (readonly) NSString * _Nullable publisheddate __attribute__((swift_name("publisheddate")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable subtype __attribute__((swift_name("subtype")));
@property (readonly) NSArray<BbnativesharedThumbnail *> * _Nullable thumbnails __attribute__((swift_name("thumbnails")));
@property (readonly) NSString * _Nullable timelineId __attribute__((swift_name("timelineId")));
@property (readonly) NSArray<BbnativesharedTimeline *> * _Nullable timelines __attribute__((swift_name("timelines")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable transcript __attribute__((swift_name("transcript")));
@property (readonly) NSString * _Nullable updatedBy __attribute__((swift_name("updatedBy")));
@property (readonly) NSString * _Nullable updateddate __attribute__((swift_name("updateddate")));
@property (readonly) BbnativesharedBoolean * _Nullable useGaplessMetadata __attribute__((swift_name("useGaplessMetadata")));
@property (readonly) BbnativesharedBoolean * _Nullable useGaplessPlayback __attribute__((swift_name("useGaplessPlayback")));
@property (readonly) NSString * _Nullable useThumbsFromMetadata __attribute__((swift_name("useThumbsFromMetadata")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Project.Companion")))
@interface BbnativesharedProjectCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedProjectCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Publication")))
@interface BbnativesharedPublication : BbnativesharedBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name status:(NSString *)status __attribute__((swift_name("init(id:name:status:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString * _Nullable)name status:(NSString * _Nullable)status type:(NSString * _Nullable)type publisherid:(NSString * _Nullable)publisherid label:(NSString * _Nullable)label baseurl:(NSString * _Nullable)baseurl baseuri:(NSString * _Nullable)baseuri sourcepath:(NSString * _Nullable)sourcepath text:(NSString * _Nullable)text bidadapters:(NSString * _Nullable)bidadapters usePreferredPlayMode:(NSString * _Nullable)usePreferredPlayMode useThumbsFromMetadata:(NSString * _Nullable)useThumbsFromMetadata embedAsync:(NSString * _Nullable)embedAsync avoidPreload:(NSString * _Nullable)avoidPreload avoidMediaManager:(NSString * _Nullable)avoidMediaManager avoidAndroidNativeHLS:(NSString * _Nullable)avoidAndroidNativeHLS serverUploadScript:(NSString * _Nullable)serverUploadScript statsserver:(NSString * _Nullable)statsserver statspublication:(NSString * _Nullable)statspublication playoutURL:(NSString * _Nullable)playoutURL defaultMediaAssetPath:(NSString * _Nullable)defaultMediaAssetPath contextMenuLink:(NSString * _Nullable)contextMenuLink streamingMediaAssetPath:(NSString * _Nullable)streamingMediaAssetPath rtmphost:(NSString * _Nullable)rtmphost publicationLabel:(NSString * _Nullable)publicationLabel streamingMediaAssetPathTimeline:(NSString * _Nullable)streamingMediaAssetPathTimeline mobileMediaAssetPath:(NSString * _Nullable)mobileMediaAssetPath providerURL:(NSString * _Nullable)providerURL secureMediaAssetPath:(NSString * _Nullable)secureMediaAssetPath timeZone:(NSString * _Nullable)timeZone liveMediaAssetPath:(NSString * _Nullable)liveMediaAssetPath enableChat:(NSString * _Nullable)enableChat wsChatEndpoint:(NSString * _Nullable)wsChatEndpoint __attribute__((swift_name("init(id:name:status:type:publisherid:label:baseurl:baseuri:sourcepath:text:bidadapters:usePreferredPlayMode:useThumbsFromMetadata:embedAsync:avoidPreload:avoidMediaManager:avoidAndroidNativeHLS:serverUploadScript:statsserver:statspublication:playoutURL:defaultMediaAssetPath:contextMenuLink:streamingMediaAssetPath:rtmphost:publicationLabel:streamingMediaAssetPathTimeline:mobileMediaAssetPath:providerURL:secureMediaAssetPath:timeZone:liveMediaAssetPath:enableChat:wsChatEndpoint:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedPublicationCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedPublication *)doCopyId:(NSString * _Nullable)id name:(NSString * _Nullable)name status:(NSString * _Nullable)status type:(NSString * _Nullable)type publisherid:(NSString * _Nullable)publisherid label:(NSString * _Nullable)label baseurl:(NSString * _Nullable)baseurl baseuri:(NSString * _Nullable)baseuri sourcepath:(NSString * _Nullable)sourcepath text:(NSString * _Nullable)text bidadapters:(NSString * _Nullable)bidadapters usePreferredPlayMode:(NSString * _Nullable)usePreferredPlayMode useThumbsFromMetadata:(NSString * _Nullable)useThumbsFromMetadata embedAsync:(NSString * _Nullable)embedAsync avoidPreload:(NSString * _Nullable)avoidPreload avoidMediaManager:(NSString * _Nullable)avoidMediaManager avoidAndroidNativeHLS:(NSString * _Nullable)avoidAndroidNativeHLS serverUploadScript:(NSString * _Nullable)serverUploadScript statsserver:(NSString * _Nullable)statsserver statspublication:(NSString * _Nullable)statspublication playoutURL:(NSString * _Nullable)playoutURL defaultMediaAssetPath:(NSString * _Nullable)defaultMediaAssetPath contextMenuLink:(NSString * _Nullable)contextMenuLink streamingMediaAssetPath:(NSString * _Nullable)streamingMediaAssetPath rtmphost:(NSString * _Nullable)rtmphost publicationLabel:(NSString * _Nullable)publicationLabel streamingMediaAssetPathTimeline:(NSString * _Nullable)streamingMediaAssetPathTimeline mobileMediaAssetPath:(NSString * _Nullable)mobileMediaAssetPath providerURL:(NSString * _Nullable)providerURL secureMediaAssetPath:(NSString * _Nullable)secureMediaAssetPath timeZone:(NSString * _Nullable)timeZone liveMediaAssetPath:(NSString * _Nullable)liveMediaAssetPath enableChat:(NSString * _Nullable)enableChat wsChatEndpoint:(NSString * _Nullable)wsChatEndpoint __attribute__((swift_name("doCopy(id:name:status:type:publisherid:label:baseurl:baseuri:sourcepath:text:bidadapters:usePreferredPlayMode:useThumbsFromMetadata:embedAsync:avoidPreload:avoidMediaManager:avoidAndroidNativeHLS:serverUploadScript:statsserver:statspublication:playoutURL:defaultMediaAssetPath:contextMenuLink:streamingMediaAssetPath:rtmphost:publicationLabel:streamingMediaAssetPathTimeline:mobileMediaAssetPath:providerURL:secureMediaAssetPath:timeZone:liveMediaAssetPath:enableChat:wsChatEndpoint:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avoidAndroidNativeHLS __attribute__((swift_name("avoidAndroidNativeHLS")));
@property (readonly) NSString * _Nullable avoidMediaManager __attribute__((swift_name("avoidMediaManager")));
@property (readonly) NSString * _Nullable avoidPreload __attribute__((swift_name("avoidPreload")));
@property (readonly) NSString * _Nullable baseuri __attribute__((swift_name("baseuri")));
@property (readonly) NSString * _Nullable baseurl __attribute__((swift_name("baseurl")));
@property (readonly) NSString * _Nullable bidadapters __attribute__((swift_name("bidadapters")));
@property (readonly) NSString * _Nullable contextMenuLink __attribute__((swift_name("contextMenuLink")));
@property (readonly) NSString * _Nullable defaultMediaAssetPath __attribute__((swift_name("defaultMediaAssetPath")));
@property (readonly) NSString * _Nullable embedAsync __attribute__((swift_name("embedAsync")));
@property (readonly) NSString * _Nullable enableChat __attribute__((swift_name("enableChat")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSString * _Nullable liveMediaAssetPath __attribute__((swift_name("liveMediaAssetPath")));
@property (readonly) NSString * _Nullable mobileMediaAssetPath __attribute__((swift_name("mobileMediaAssetPath")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable playoutURL __attribute__((swift_name("playoutURL")));
@property (readonly) NSString * _Nullable providerURL __attribute__((swift_name("providerURL")));
@property (readonly) NSString * _Nullable publicationLabel __attribute__((swift_name("publicationLabel")));
@property (readonly) NSString * _Nullable publisherid __attribute__((swift_name("publisherid")));
@property (readonly) NSString * _Nullable rtmphost __attribute__((swift_name("rtmphost")));
@property (readonly) NSString * _Nullable secureMediaAssetPath __attribute__((swift_name("secureMediaAssetPath")));
@property (readonly) NSString * _Nullable serverUploadScript __attribute__((swift_name("serverUploadScript")));
@property (readonly) NSString * _Nullable sourcepath __attribute__((swift_name("sourcepath")));
@property (readonly) NSString * _Nullable statspublication __attribute__((swift_name("statspublication")));
@property (readonly) NSString * _Nullable statsserver __attribute__((swift_name("statsserver")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable streamingMediaAssetPath __attribute__((swift_name("streamingMediaAssetPath")));
@property (readonly) NSString * _Nullable streamingMediaAssetPathTimeline __attribute__((swift_name("streamingMediaAssetPathTimeline")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) NSString * _Nullable timeZone __attribute__((swift_name("timeZone")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable usePreferredPlayMode __attribute__((swift_name("usePreferredPlayMode")));
@property (readonly) NSString * _Nullable useThumbsFromMetadata __attribute__((swift_name("useThumbsFromMetadata")));
@property (readonly) NSString * _Nullable wsChatEndpoint __attribute__((swift_name("wsChatEndpoint")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Publication.Companion")))
@interface BbnativesharedPublicationCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedPublicationCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Quality")))
@interface BbnativesharedQuality : BbnativesharedBase
- (instancetype)initWithId:(NSString * _Nullable)id index:(BbnativesharedInt * _Nullable)index label:(NSString * _Nullable)label isSelected:(BbnativesharedBoolean * _Nullable)isSelected mimeType:(NSString * _Nullable)mimeType origId:(NSString * _Nullable)origId bitrate:(int32_t)bitrate height:(int32_t)height __attribute__((swift_name("init(id:index:label:isSelected:mimeType:origId:bitrate:height:)"))) __attribute__((objc_designated_initializer));
- (BbnativesharedQuality *)doCopyId:(NSString * _Nullable)id index:(BbnativesharedInt * _Nullable)index label:(NSString * _Nullable)label isSelected:(BbnativesharedBoolean * _Nullable)isSelected mimeType:(NSString * _Nullable)mimeType origId:(NSString * _Nullable)origId bitrate:(int32_t)bitrate height:(int32_t)height __attribute__((swift_name("doCopy(id:index:label:isSelected:mimeType:origId:bitrate:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t bitrate __attribute__((swift_name("bitrate")));
@property int32_t height __attribute__((swift_name("height")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property BbnativesharedInt * _Nullable index __attribute__((swift_name("index")));
@property BbnativesharedBoolean * _Nullable isSelected __attribute__((swift_name("isSelected")));
@property NSString * _Nullable label __attribute__((swift_name("label")));
@property NSString * _Nullable mimeType __attribute__((swift_name("mimeType")));
@property NSString * _Nullable origId __attribute__((swift_name("origId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestParams")))
@interface BbnativesharedRequestParams : BbnativesharedBase
- (instancetype)initWithMode:(NSString * _Nullable)mode playoutlabel:(NSString * _Nullable)playoutlabel contentindicator:(NSString * _Nullable)contentindicator contentid:(NSString * _Nullable)contentid __attribute__((swift_name("init(mode:playoutlabel:contentindicator:contentid:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedRequestParamsCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedRequestParams *)doCopyMode:(NSString * _Nullable)mode playoutlabel:(NSString * _Nullable)playoutlabel contentindicator:(NSString * _Nullable)contentindicator contentid:(NSString * _Nullable)contentid __attribute__((swift_name("doCopy(mode:playoutlabel:contentindicator:contentid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable contentid __attribute__((swift_name("contentid")));
@property (readonly) NSString * _Nullable contentindicator __attribute__((swift_name("contentindicator")));
@property (readonly) NSString * _Nullable mode __attribute__((swift_name("mode")));
@property (readonly) NSString * _Nullable playoutlabel __attribute__((swift_name("playoutlabel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestParams.Companion")))
@interface BbnativesharedRequestParamsCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedRequestParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Step")))
@interface BbnativesharedStep : BbnativesharedBase
- (instancetype)initWithId:(NSString * _Nullable)id mediaClipId:(NSString * _Nullable)mediaClipId isStart:(BbnativesharedBoolean * _Nullable)isStart entityType:(NSString * _Nullable)entityType entityId:(NSString * _Nullable)entityId __attribute__((swift_name("init(id:mediaClipId:isStart:entityType:entityId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedStepCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedStep *)doCopyId:(NSString * _Nullable)id mediaClipId:(NSString * _Nullable)mediaClipId isStart:(BbnativesharedBoolean * _Nullable)isStart entityType:(NSString * _Nullable)entityType entityId:(NSString * _Nullable)entityId __attribute__((swift_name("doCopy(id:mediaClipId:isStart:entityType:entityId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable entityId __attribute__((swift_name("entityId")));
@property NSString * _Nullable entityType __attribute__((swift_name("entityType")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) BbnativesharedBoolean * _Nullable isStart __attribute__((swift_name("isStart")));
@property (readonly) NSString * _Nullable mediaClipId __attribute__((swift_name("mediaClipId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Step.Companion")))
@interface BbnativesharedStepCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedStepCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Subtitle")))
@interface BbnativesharedSubtitle : BbnativesharedBase
- (instancetype)initWithLanguageid:(NSString * _Nullable)languageid languagename:(NSString * _Nullable)languagename id:(NSString * _Nullable)id name:(NSString * _Nullable)name default:(NSString * _Nullable)default_ isocode:(NSString * _Nullable)isocode roleFlags:(BbnativesharedInt * _Nullable)roleFlags status:(NSString * _Nullable)status isSelected:(BbnativesharedBoolean * _Nullable)isSelected __attribute__((swift_name("init(languageid:languagename:id:name:default:isocode:roleFlags:status:isSelected:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedSubtitleCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedSubtitle *)doCopyLanguageid:(NSString * _Nullable)languageid languagename:(NSString * _Nullable)languagename id:(NSString * _Nullable)id name:(NSString * _Nullable)name default:(NSString * _Nullable)default_ isocode:(NSString * _Nullable)isocode roleFlags:(BbnativesharedInt * _Nullable)roleFlags status:(NSString * _Nullable)status isSelected:(BbnativesharedBoolean * _Nullable)isSelected __attribute__((swift_name("doCopy(languageid:languagename:id:name:default:isocode:roleFlags:status:isSelected:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=default) NSString * _Nullable default_ __attribute__((swift_name("default_")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property BbnativesharedBoolean * _Nullable isSelected __attribute__((swift_name("isSelected")));
@property NSString * _Nullable isocode __attribute__((swift_name("isocode")));
@property NSString * _Nullable languageid __attribute__((swift_name("languageid")));
@property NSString * _Nullable languagename __attribute__((swift_name("languagename")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property BbnativesharedInt * _Nullable roleFlags __attribute__((swift_name("roleFlags")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Subtitle.Companion")))
@interface BbnativesharedSubtitleCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedSubtitleCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Thumbnail")))
@interface BbnativesharedThumbnail : BbnativesharedBase
- (instancetype)initWithSrc:(NSString * _Nullable)src width:(NSString * _Nullable)width height:(NSString * _Nullable)height main:(BbnativesharedBoolean * _Nullable)main __attribute__((swift_name("init(src:width:height:main:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedThumbnailCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedThumbnail *)doCopySrc:(NSString * _Nullable)src width:(NSString * _Nullable)width height:(NSString * _Nullable)height main:(BbnativesharedBoolean * _Nullable)main __attribute__((swift_name("doCopy(src:width:height:main:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable height __attribute__((swift_name("height")));
@property (readonly) BbnativesharedBoolean * _Nullable main __attribute__((swift_name("main")));
@property (readonly) NSString * _Nullable src __attribute__((swift_name("src")));
@property (readonly) NSString * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Thumbnail.Companion")))
@interface BbnativesharedThumbnailCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedThumbnailCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Timeline")))
@interface BbnativesharedTimeline : BbnativesharedBase
- (instancetype)initWithId:(NSString * _Nullable)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedTimelineCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedTimeline *)doCopyId:(NSString * _Nullable)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Timeline.Companion")))
@interface BbnativesharedTimelineCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedTimelineCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TypedObject")))
@interface BbnativesharedTypedObject : BbnativesharedBase
- (instancetype)initWithType:(NSString * _Nullable)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedTypedObjectCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedTypedObject *)doCopyType:(NSString * _Nullable)type __attribute__((swift_name("doCopy(type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TypedObject.Companion")))
@interface BbnativesharedTypedObjectCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedTypedObjectCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VersioningData")))
@interface BbnativesharedVersioningData : BbnativesharedBase
- (instancetype)initWithTimelineVersion:(NSString * _Nullable)timelineVersion state:(NSString * _Nullable)state __attribute__((swift_name("init(timelineVersion:state:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedVersioningDataCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedVersioningData *)doCopyTimelineVersion:(NSString * _Nullable)timelineVersion state:(NSString * _Nullable)state __attribute__((swift_name("doCopy(timelineVersion:state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable state __attribute__((swift_name("state")));
@property (readonly) NSString * _Nullable timelineVersion __attribute__((swift_name("timelineVersion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VersioningData.Companion")))
@interface BbnativesharedVersioningDataCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedVersioningDataCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoTrack")))
@interface BbnativesharedVideoTrack : BbnativesharedBase
- (instancetype)initWithId:(NSString * _Nullable)id videoId:(BbnativesharedInt * _Nullable)videoId isocode:(NSString * _Nullable)isocode roleFlags:(BbnativesharedInt * _Nullable)roleFlags label:(NSString * _Nullable)label isSelected:(BbnativesharedBoolean * _Nullable)isSelected mimeType:(NSString * _Nullable)mimeType origId:(NSString * _Nullable)origId __attribute__((swift_name("init(id:videoId:isocode:roleFlags:label:isSelected:mimeType:origId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BbnativesharedVideoTrackCompanion *companion __attribute__((swift_name("companion")));
- (BbnativesharedVideoTrack *)doCopyId:(NSString * _Nullable)id videoId:(BbnativesharedInt * _Nullable)videoId isocode:(NSString * _Nullable)isocode roleFlags:(BbnativesharedInt * _Nullable)roleFlags label:(NSString * _Nullable)label isSelected:(BbnativesharedBoolean * _Nullable)isSelected mimeType:(NSString * _Nullable)mimeType origId:(NSString * _Nullable)origId __attribute__((swift_name("doCopy(id:videoId:isocode:roleFlags:label:isSelected:mimeType:origId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property BbnativesharedBoolean * _Nullable isSelected __attribute__((swift_name("isSelected")));
@property NSString * _Nullable isocode __attribute__((swift_name("isocode")));
@property NSString * _Nullable label __attribute__((swift_name("label")));
@property NSString * _Nullable mimeType __attribute__((swift_name("mimeType")));
@property NSString * _Nullable origId __attribute__((swift_name("origId")));
@property BbnativesharedInt * _Nullable roleFlags __attribute__((swift_name("roleFlags")));
@property BbnativesharedInt * _Nullable videoId __attribute__((swift_name("videoId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoTrack.Companion")))
@interface BbnativesharedVideoTrackCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedVideoTrackCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContentItemKt")))
@interface BbnativesharedContentItemKt : BbnativesharedBase
@property (class, readonly) BbnativesharedKotlinx_serialization_coreSerializersModule *contentItemSerializersModule __attribute__((swift_name("contentItemSerializersModule")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/InstantIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface BbnativesharedKotlinx_datetimeInstant : BbnativesharedBase <BbnativesharedKotlinComparable>
@property (class, readonly, getter=companion) BbnativesharedKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(BbnativesharedKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BbnativesharedKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(BbnativesharedKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (BbnativesharedKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface BbnativesharedKotlinThrowable : BbnativesharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BbnativesharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BbnativesharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (BbnativesharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BbnativesharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface BbnativesharedKotlinException : BbnativesharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BbnativesharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BbnativesharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface BbnativesharedKotlinEnumCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface BbnativesharedKotlinArray<T> : BbnativesharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(BbnativesharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<BbnativesharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol BbnativesharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<BbnativesharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<BbnativesharedKotlinCoroutineContextElement> _Nullable)getKey:(id<BbnativesharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<BbnativesharedKotlinCoroutineContext>)minusKeyKey:(id<BbnativesharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<BbnativesharedKotlinCoroutineContext>)plusContext:(id<BbnativesharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol BbnativesharedKotlinCoroutineContextElement <BbnativesharedKotlinCoroutineContext>
@required
@property (readonly) id<BbnativesharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface BbnativesharedKotlinAbstractCoroutineContextElement : BbnativesharedBase <BbnativesharedKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<BbnativesharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<BbnativesharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol BbnativesharedKotlinContinuationInterceptor <BbnativesharedKotlinCoroutineContextElement>
@required
- (id<BbnativesharedKotlinContinuation>)interceptContinuationContinuation:(id<BbnativesharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<BbnativesharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface BbnativesharedKotlinx_coroutines_coreCoroutineDispatcher : BbnativesharedKotlinAbstractCoroutineContextElement <BbnativesharedKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<BbnativesharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BbnativesharedKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<BbnativesharedKotlinCoroutineContext>)context block:(id<BbnativesharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<BbnativesharedKotlinCoroutineContext>)context block:(id<BbnativesharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<BbnativesharedKotlinContinuation>)interceptContinuationContinuation:(id<BbnativesharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<BbnativesharedKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (BbnativesharedKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (BbnativesharedKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(BbnativesharedKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<BbnativesharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol BbnativesharedKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<BbnativesharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol BbnativesharedKotlinx_coroutines_coreSharedFlow <BbnativesharedKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol BbnativesharedKotlinx_coroutines_coreStateFlow <BbnativesharedKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol BbnativesharedKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol BbnativesharedKotlinx_coroutines_coreMutableSharedFlow <BbnativesharedKotlinx_coroutines_coreSharedFlow, BbnativesharedKotlinx_coroutines_coreFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<BbnativesharedKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol BbnativesharedKotlinx_coroutines_coreMutableStateFlow <BbnativesharedKotlinx_coroutines_coreStateFlow, BbnativesharedKotlinx_coroutines_coreMutableSharedFlow>
@required
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol BbnativesharedKotlinx_coroutines_coreJob <BbnativesharedKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<BbnativesharedKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<BbnativesharedKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(BbnativesharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BbnativesharedKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<BbnativesharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(BbnativesharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<BbnativesharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(BbnativesharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<BbnativesharedKotlinx_coroutines_coreJob>)plusOther_:(id<BbnativesharedKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<BbnativesharedKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<BbnativesharedKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<BbnativesharedKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCompletableJob")))
@protocol BbnativesharedKotlinx_coroutines_coreCompletableJob <BbnativesharedKotlinx_coroutines_coreJob>
@required
- (BOOL)complete __attribute__((swift_name("complete()")));
- (BOOL)completeExceptionallyException:(BbnativesharedKotlinThrowable *)exception __attribute__((swift_name("completeExceptionally(exception:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol BbnativesharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<BbnativesharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<BbnativesharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol BbnativesharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<BbnativesharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<BbnativesharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol BbnativesharedKotlinx_serialization_coreKSerializer <BbnativesharedKotlinx_serialization_coreSerializationStrategy, BbnativesharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface BbnativesharedKotlinx_serialization_jsonJsonElement : BbnativesharedBase
@property (class, readonly, getter=companion) BbnativesharedKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface BbnativesharedKotlinx_serialization_coreSerializersModule : BbnativesharedBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<BbnativesharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BbnativesharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<BbnativesharedKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<BbnativesharedKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BbnativesharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<BbnativesharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BbnativesharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<BbnativesharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface BbnativesharedKotlinx_datetimeInstantCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
- (BbnativesharedKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (BbnativesharedKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (BbnativesharedKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (BbnativesharedKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (BbnativesharedKotlinx_datetimeInstant *)parseIsoString:(NSString *)isoString __attribute__((swift_name("parse(isoString:)")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) BbnativesharedKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) BbnativesharedKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol BbnativesharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol BbnativesharedKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol BbnativesharedKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<BbnativesharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface BbnativesharedKotlinAbstractCoroutineContextKey<B, E> : BbnativesharedBase <BbnativesharedKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<BbnativesharedKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<BbnativesharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface BbnativesharedKotlinx_coroutines_coreCoroutineDispatcherKey : BbnativesharedKotlinAbstractCoroutineContextKey<id<BbnativesharedKotlinContinuationInterceptor>, BbnativesharedKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<BbnativesharedKotlinCoroutineContextKey>)baseKey safeCast:(id<BbnativesharedKotlinCoroutineContextElement> _Nullable (^)(id<BbnativesharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol BbnativesharedKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface BbnativesharedKotlinRuntimeException : BbnativesharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BbnativesharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BbnativesharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface BbnativesharedKotlinIllegalStateException : BbnativesharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BbnativesharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BbnativesharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface BbnativesharedKotlinCancellationException : BbnativesharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BbnativesharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BbnativesharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol BbnativesharedKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol BbnativesharedKotlinx_coroutines_coreChildHandle <BbnativesharedKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(BbnativesharedKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<BbnativesharedKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol BbnativesharedKotlinx_coroutines_coreChildJob <BbnativesharedKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<BbnativesharedKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol BbnativesharedKotlinSequence
@required
- (id<BbnativesharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol BbnativesharedKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) BbnativesharedKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<BbnativesharedKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(BbnativesharedKotlinThrowable *, id _Nullable, id<BbnativesharedKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<BbnativesharedKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol BbnativesharedKotlinx_coroutines_coreSelectClause0 <BbnativesharedKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol BbnativesharedKotlinx_serialization_coreEncoder
@required
- (id<BbnativesharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<BbnativesharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<BbnativesharedKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<BbnativesharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<BbnativesharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) BbnativesharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol BbnativesharedKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<BbnativesharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<BbnativesharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BbnativesharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol BbnativesharedKotlinx_serialization_coreDecoder
@required
- (id<BbnativesharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<BbnativesharedKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BbnativesharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<BbnativesharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<BbnativesharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) BbnativesharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface BbnativesharedKotlinx_serialization_jsonJsonElementCompanion : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol BbnativesharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<BbnativesharedKotlinKClass>)kClass provider:(id<BbnativesharedKotlinx_serialization_coreKSerializer> (^)(NSArray<id<BbnativesharedKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<BbnativesharedKotlinKClass>)kClass serializer:(id<BbnativesharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<BbnativesharedKotlinKClass>)baseClass actualClass:(id<BbnativesharedKotlinKClass>)actualClass actualSerializer:(id<BbnativesharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<BbnativesharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<BbnativesharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<BbnativesharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<BbnativesharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<BbnativesharedKotlinKClass>)baseClass defaultSerializerProvider:(id<BbnativesharedKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol BbnativesharedKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol BbnativesharedKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol BbnativesharedKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol BbnativesharedKotlinKClass <BbnativesharedKotlinKDeclarationContainer, BbnativesharedKotlinKAnnotatedElement, BbnativesharedKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol BbnativesharedKotlinx_coroutines_coreParentJob <BbnativesharedKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BbnativesharedKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface BbnativesharedKotlinUnit : BbnativesharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BbnativesharedKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol BbnativesharedKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<BbnativesharedKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<BbnativesharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol BbnativesharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<BbnativesharedKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<BbnativesharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<BbnativesharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) BbnativesharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol BbnativesharedKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface BbnativesharedKotlinx_serialization_coreSerialKind : BbnativesharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol BbnativesharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<BbnativesharedKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<BbnativesharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<BbnativesharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<BbnativesharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) BbnativesharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface BbnativesharedKotlinNothing : BbnativesharedBase
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
