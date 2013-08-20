//
//  BaseModel.h
//  KeyArchiver
//
//  Created by Mr.Yang on 13-7-17.
//  Copyright (c) 2013年 Hunter. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BaseModel : NSObject <NSCopying, NSCoding>

- (BOOL)isSameWithObject:(id)obj;

@end
