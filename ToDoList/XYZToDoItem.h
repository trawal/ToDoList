//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Tushar Rawal on 2/17/14.
//  Copyright (c) 2014 Tushar Rawal. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

    @property NSString *itemName;
    @property BOOL completed;
    @property (readonly) NSDate *creationDate;

@end
