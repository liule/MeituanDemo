//
//  Seller.h
//  Meituan
//
//  Created by 臧其龙 on 15/9/16.
//  Copyright (c) 2015年 臧其龙. All rights reserved.
//

#import "MTLModel.h"
#import "MTLJSONAdapter.h"

@interface Seller : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy, readonly) NSString *mname;
@property (nonatomic, copy, readonly) NSString *title;
@property (nonatomic, copy, readonly) NSString *range;
@property (nonatomic, assign, readonly) NSNumber *price;
@property (nonatomic, assign, readonly) NSNumber *value;
@property (nonatomic, strong, readonly) NSNumber *noBooking;
@property (nonatomic, strong, readonly) NSNumber *solds;
@property (nonatomic, strong, readonly) NSURL *squareimgurl;

@end