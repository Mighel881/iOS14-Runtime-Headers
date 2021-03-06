/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDABClientDatasetMetadata, GEOAdditionalEnabledMarkets, GEOAutomobileOptions, GEOClientCapabilities, GEOCommonOptions, GEOCyclingOptions, NSMutableArray, GEOLocation, GEOWaypointTyped, NSData, GEOOriginalWaypointRoute, GEOWaypoint, NSString, GEOTFTrafficSnapshot, GEOTransitOptions, GEOWalkingOptions;

@interface GEOETARequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTimepoint _timepoint;
	GEOSessionID _sessionID;
	GEOPDABClientDatasetMetadata* _abClientMetadata;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	GEOAutomobileOptions* _automobileOptions;
	GEOClientCapabilities* _clientCapabilities;
	GEOCommonOptions* _commonOptions;
	GEOCyclingOptions* _cyclingOptions;
	NSMutableArray* _destinationWaypointTypeds;
	NSMutableArray* _destinations;
	NSMutableArray* _deviceHistoricalLocations;
	GEOLocation* _lastKnownRoadLocation;
	GEOWaypointTyped* _originWaypointTyped;
	NSData* _originalRouteID;
	NSMutableArray* _originalRouteZilchPoints;
	GEOOriginalWaypointRoute* _originalWaypointRoute;
	GEOWaypoint* _origin;
	NSString* _phoneticLocaleIdentifier;
	NSString* _requestingAppId;
	NSMutableArray* _serviceTags;
	double _sessionRelativeTimestamp;
	NSData* _sessionState;
	NSMutableArray* _trafficApiResponses;
	NSMutableArray* _trafficSnapshotIds;
	GEOTFTrafficSnapshot* _trafficSnapshot;
	GEOTransitOptions* _transitOptions;
	GEOWalkingOptions* _walkingOptions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _transportType;
	unsigned _walkingLimitMeters;
	BOOL _allowPartialResults;
	BOOL _includeDistance;
	BOOL _includeHistoricTravelTime;
	BOOL _includeRouteTrafficDetail;
	BOOL _includeShortTrafficSummary;
	BOOL _isFromAPI;
	BOOL _needServerLatency;
	BOOL _useLiveTrafficAsFallback;
	struct {
		unsigned has_timepoint : 1;
		unsigned has_sessionID : 1;
		unsigned has_sessionRelativeTimestamp : 1;
		unsigned has_transportType : 1;
		unsigned has_walkingLimitMeters : 1;
		unsigned has_allowPartialResults : 1;
		unsigned has_includeDistance : 1;
		unsigned has_includeHistoricTravelTime : 1;
		unsigned has_includeRouteTrafficDetail : 1;
		unsigned has_includeShortTrafficSummary : 1;
		unsigned has_isFromAPI : 1;
		unsigned has_needServerLatency : 1;
		unsigned has_useLiveTrafficAsFallback : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abClientMetadata : 1;
		unsigned read_additionalEnabledMarkets : 1;
		unsigned read_automobileOptions : 1;
		unsigned read_clientCapabilities : 1;
		unsigned read_commonOptions : 1;
		unsigned read_cyclingOptions : 1;
		unsigned read_destinationWaypointTypeds : 1;
		unsigned read_destinations : 1;
		unsigned read_deviceHistoricalLocations : 1;
		unsigned read_lastKnownRoadLocation : 1;
		unsigned read_originWaypointTyped : 1;
		unsigned read_originalRouteID : 1;
		unsigned read_originalRouteZilchPoints : 1;
		unsigned read_originalWaypointRoute : 1;
		unsigned read_origin : 1;
		unsigned read_phoneticLocaleIdentifier : 1;
		unsigned read_requestingAppId : 1;
		unsigned read_serviceTags : 1;
		unsigned read_sessionState : 1;
		unsigned read_trafficApiResponses : 1;
		unsigned read_trafficSnapshotIds : 1;
		unsigned read_trafficSnapshot : 1;
		unsigned read_transitOptions : 1;
		unsigned read_walkingOptions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTrafficSnapshot; 
@property (nonatomic,retain) GEOTFTrafficSnapshot * trafficSnapshot; 
@property (assign,nonatomic) BOOL hasUseLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL useLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL hasNeedServerLatency; 
@property (assign,nonatomic) BOOL needServerLatency; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (assign,nonatomic) BOOL hasTimepoint; 
@property (assign,nonatomic) GEOTimepoint timepoint; 
@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOWaypoint * origin; 
@property (nonatomic,retain) NSMutableArray * destinations; 
@property (assign,nonatomic) BOOL hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) BOOL includeHistoricTravelTime; 
@property (assign,nonatomic) BOOL hasAllowPartialResults; 
@property (assign,nonatomic) BOOL allowPartialResults; 
@property (assign,nonatomic) BOOL hasIncludeDistance; 
@property (assign,nonatomic) BOOL includeDistance; 
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (assign,nonatomic) BOOL hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp; 
@property (assign,nonatomic) BOOL hasWalkingLimitMeters; 
@property (assign,nonatomic) unsigned walkingLimitMeters; 
@property (nonatomic,readonly) BOOL hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets; 
@property (nonatomic,readonly) BOOL hasOriginWaypointTyped; 
@property (nonatomic,retain) GEOWaypointTyped * originWaypointTyped; 
@property (nonatomic,retain) NSMutableArray * destinationWaypointTypeds; 
@property (nonatomic,readonly) BOOL hasAutomobileOptions; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,readonly) BOOL hasCyclingOptions; 
@property (nonatomic,retain) GEOCyclingOptions * cyclingOptions; 
@property (nonatomic,readonly) BOOL hasTransitOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions; 
@property (nonatomic,readonly) BOOL hasWalkingOptions; 
@property (nonatomic,retain) GEOWalkingOptions * walkingOptions; 
@property (assign,nonatomic) BOOL hasIsFromAPI; 
@property (assign,nonatomic) BOOL isFromAPI; 
@property (nonatomic,readonly) BOOL hasCommonOptions; 
@property (nonatomic,retain) GEOCommonOptions * commonOptions; 
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState; 
@property (nonatomic,readonly) BOOL hasOriginalRouteID; 
@property (nonatomic,retain) NSData * originalRouteID; 
@property (nonatomic,retain) NSMutableArray * originalRouteZilchPoints; 
@property (nonatomic,readonly) BOOL hasOriginalWaypointRoute; 
@property (nonatomic,retain) GEOOriginalWaypointRoute * originalWaypointRoute; 
@property (nonatomic,retain) NSMutableArray * deviceHistoricalLocations; 
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities; 
@property (nonatomic,readonly) BOOL hasLastKnownRoadLocation; 
@property (nonatomic,retain) GEOLocation * lastKnownRoadLocation; 
@property (nonatomic,readonly) BOOL hasAbClientMetadata; 
@property (nonatomic,retain) GEOPDABClientDatasetMetadata * abClientMetadata; 
@property (assign,nonatomic) BOOL hasIncludeRouteTrafficDetail; 
@property (assign,nonatomic) BOOL includeRouteTrafficDetail; 
@property (assign,nonatomic) BOOL hasIncludeShortTrafficSummary; 
@property (assign,nonatomic) BOOL includeShortTrafficSummary; 
@property (nonatomic,readonly) BOOL hasPhoneticLocaleIdentifier; 
@property (nonatomic,retain) NSString * phoneticLocaleIdentifier; 
@property (nonatomic,readonly) BOOL hasRequestingAppId; 
@property (nonatomic,retain) NSString * requestingAppId; 
@property (nonatomic,retain) NSMutableArray * serviceTags; 
@property (nonatomic,retain) NSMutableArray * trafficApiResponses; 
@property (nonatomic,retain) NSMutableArray * trafficSnapshotIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)originalRouteZilchPointsType;
+(Class)destinationType;
+(Class)trafficSnapshotIdsType;
+(Class)trafficApiResponsesType;
+(BOOL)isValid:(id)arg1 ;
+(Class)serviceTagType;
+(Class)destinationWaypointTypedType;
+(Class)deviceHistoricalLocationType;
-(GEOClientCapabilities *)clientCapabilities;
-(Class)responseClass;
-(NSMutableArray *)deviceHistoricalLocations;
-(GEOOriginalWaypointRoute *)originalWaypointRoute;
-(void)addDestination:(id)arg1 ;
-(BOOL)isFromAPI;
-(GEOTimepoint)timepoint;
-(void)clearOriginalRouteZilchPoints;
-(void)setHasSessionID:(BOOL)arg1 ;
-(void)addTrafficSnapshotIds:(id)arg1 ;
-(BOOL)hasAbClientMetadata;
-(void)setTrafficSnapshotIds:(NSMutableArray *)arg1 ;
-(void)setHasSessionRelativeTimestamp:(BOOL)arg1 ;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(void)clearDeviceHistoricalLocations;
-(id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1 ;
-(void)setUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(void)clearTrafficSnapshotIds;
-(NSMutableArray *)destinations;
-(void)setTrafficApiResponses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)serviceTags;
-(GEOPDABClientDatasetMetadata *)abClientMetadata;
-(BOOL)hasIncludeHistoricTravelTime;
-(void)setHasUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(GEOCommonOptions *)commonOptions;
-(unsigned long long)originalRouteZilchPointsCount;
-(BOOL)hasOriginalWaypointRoute;
-(void)addServiceTag:(id)arg1 ;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTrafficSnapshot;
-(GEOAutomobileOptions *)automobileOptions;
-(double)sessionRelativeTimestamp;
-(unsigned long long)serviceTagsCount;
-(BOOL)hasOriginalRouteID;
-(BOOL)hasAdditionalEnabledMarkets;
-(BOOL)includeHistoricTravelTime;
-(void)setHasIsFromAPI:(BOOL)arg1 ;
-(void)setOriginalRouteID:(NSData *)arg1 ;
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(void)setTrafficSnapshot:(GEOTFTrafficSnapshot *)arg1 ;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(NSMutableArray *)trafficSnapshotIds;
-(NSMutableArray *)originalRouteZilchPoints;
-(BOOL)hasLastKnownRoadLocation;
-(id)trafficSnapshotIdsAtIndex:(unsigned long long)arg1 ;
-(unsigned)requestTypeCode;
-(BOOL)useLiveTrafficAsFallback;
-(void)clearServiceTags;
-(void)setIncludeHistoricTravelTime:(BOOL)arg1 ;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(NSMutableArray *)trafficApiResponses;
-(void)setHasIncludeHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasClientCapabilities;
-(void)setOriginalWaypointRoute:(GEOOriginalWaypointRoute *)arg1 ;
-(void)setOriginalRouteZilchPoints:(NSMutableArray *)arg1 ;
-(void)clearTrafficApiResponses;
-(void)setDeviceHistoricalLocations:(NSMutableArray *)arg1 ;
-(unsigned long long)deviceHistoricalLocationsCount;
-(void)setOrigin:(GEOWaypoint *)arg1 ;
-(unsigned long long)trafficApiResponsesCount;
-(void)addTrafficApiResponses:(id)arg1 ;
-(void)setAbClientMetadata:(GEOPDABClientDatasetMetadata *)arg1 ;
-(NSMutableArray *)destinationWaypointTypeds;
-(BOOL)hasSessionID;
-(BOOL)hasSessionState;
-(BOOL)hasWalkingOptions;
-(void)setHasNeedServerLatency:(BOOL)arg1 ;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(void)setTimepoint:(GEOTimepoint)arg1 ;
-(unsigned long long)trafficSnapshotIdsCount;
-(BOOL)hasNeedServerLatency;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPhoneticLocaleIdentifier:(NSString *)arg1 ;
-(void)setHasIncludeDistance:(BOOL)arg1 ;
-(void)setDestinations:(NSMutableArray *)arg1 ;
-(void)setDestinationWaypointTypeds:(NSMutableArray *)arg1 ;
-(BOOL)hasCommonOptions;
-(BOOL)hasTransitOptions;
-(BOOL)includeDistance;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasIsFromAPI;
-(BOOL)hasIncludeShortTrafficSummary;
-(id)originalRouteZilchPointsAtIndex:(unsigned long long)arg1 ;
-(GEOTransitOptions *)transitOptions;
-(void)setWalkingOptions:(GEOWalkingOptions *)arg1 ;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setNeedServerLatency:(BOOL)arg1 ;
-(id)initWithQuickETARequest:(id)arg1 ;
-(NSData *)sessionState;
-(void)addDestinationWaypointTyped:(id)arg1 ;
-(BOOL)hasTransportType;
-(NSString *)phoneticLocaleIdentifier;
-(int)transportType;
-(GEOWalkingOptions *)walkingOptions;
-(GEOSessionID)sessionID;
-(NSString *)requestingAppId;
-(id)trafficApiResponsesAtIndex:(unsigned long long)arg1 ;
-(void)setIncludeRouteTrafficDetail:(BOOL)arg1 ;
-(GEOWaypointTyped *)originWaypointTyped;
-(id)jsonRepresentation;
-(BOOL)needServerLatency;
-(BOOL)hasAutomobileOptions;
-(unsigned long long)destinationWaypointTypedsCount;
-(BOOL)hasTimepoint;
-(void)clearSensitiveFields;
-(void)setSessionState:(NSData *)arg1 ;
-(GEOLocation *)lastKnownRoadLocation;
-(void)clearDestinations;
-(void)setTransportType:(int)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(GEOWaypoint *)origin;
-(void)setIncludeShortTrafficSummary:(BOOL)arg1 ;
-(void)addOriginalRouteZilchPoints:(id)arg1 ;
-(id)init;
-(id)transportTypeAsString:(int)arg1 ;
-(BOOL)hasSessionRelativeTimestamp;
-(BOOL)hasOrigin;
-(BOOL)hasCyclingOptions;
-(void)mergeFrom:(id)arg1 ;
-(void)setWalkingLimitMeters:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRequestingAppId:(NSString *)arg1 ;
-(void)setHasIncludeShortTrafficSummary:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setCommonOptions:(GEOCommonOptions *)arg1 ;
-(id)destinationAtIndex:(unsigned long long)arg1 ;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(unsigned)walkingLimitMeters;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasIncludeRouteTrafficDetail;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)includeRouteTrafficDetail;
-(BOOL)hasIncludeDistance;
-(id)destinationWaypointTypedAtIndex:(unsigned long long)arg1 ;
-(void)setCyclingOptions:(GEOCyclingOptions *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setIsFromAPI:(BOOL)arg1 ;
-(BOOL)hasPhoneticLocaleIdentifier;
-(unsigned long long)destinationsCount;
-(BOOL)hasWalkingLimitMeters;
-(BOOL)hasAllowPartialResults;
-(void)setHasWalkingLimitMeters:(BOOL)arg1 ;
-(GEOCyclingOptions *)cyclingOptions;
-(void)setIncludeDistance:(BOOL)arg1 ;
-(void)addDeviceHistoricalLocation:(id)arg1 ;
-(BOOL)allowPartialResults;
-(void)setOriginWaypointTyped:(GEOWaypointTyped *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(NSData *)originalRouteID;
-(void)setHasIncludeRouteTrafficDetail:(BOOL)arg1 ;
-(BOOL)includeShortTrafficSummary;
-(BOOL)hasRequestingAppId;
-(void)setLastKnownRoadLocation:(GEOLocation *)arg1 ;
-(void)setHasAllowPartialResults:(BOOL)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasOriginWaypointTyped;
-(void)setAllowPartialResults:(BOOL)arg1 ;
-(id)description;
-(void)setHasTimepoint:(BOOL)arg1 ;
-(void)clearDestinationWaypointTypeds;
-(id)dictionaryRepresentation;
-(BOOL)hasUseLiveTrafficAsFallback;
@end

