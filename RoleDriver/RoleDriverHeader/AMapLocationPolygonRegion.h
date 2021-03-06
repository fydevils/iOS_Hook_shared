//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapLocationRegion.h"

@interface AMapLocationPolygonRegion : AMapLocationRegion
{
    struct CLLocationCoordinate2D *_coordinates;
    long long _count;
    struct CLLocationCoordinate2D _northEast;
    struct CLLocationCoordinate2D _southWest;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)coordinateInCircumscribedRegion:(struct CLLocationCoordinate2D)arg1;
- (_Bool)containsCoordinate:(struct CLLocationCoordinate2D)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D *coordinates;
@property(readonly, nonatomic) long long count;
- (void)buildPolygnRegionWithCount:(long long)arg1 coordinates:(struct CLLocationCoordinate2D *)arg2;
- (void)dealloc;
- (id)initWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(long long)arg2 identifier:(id)arg3;

@end

