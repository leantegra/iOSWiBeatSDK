//
//  LSZone.h
//  LeantegraSDK
//
//  Created by Konstantin Efimenko on 12/19/16.
//  Copyright © 2016 Leantegra Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LSLocationObjectProtocol.h"

@interface LSZone : NSObject <LSAccessibleLocationObject>

///Must use initWithDictionary: instead.
- (instancetype)init __attribute__((unavailable("Must use initWithDictionary: instead.")));

+ (LSZone *)zoneForZoneUID:(NSInteger)uid;

@end
