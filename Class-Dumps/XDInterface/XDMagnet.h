//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface XDMagnet : NSObject <NSCoding, NSCopying>
{
    struct CGPoint _location;
    void *_magnetReserved;
}

+ (id)_defaultHighlightedMagnetImage;
+ (id)defaultMagnetImage;
+ (void)initialize;
- (id)_highlightedMagnetImage;
- (id)magnetImage;
- (void)setMagnetImage:(id)arg1;
- (struct CGPoint)location;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithLocation:(struct CGPoint)arg1;

@end
