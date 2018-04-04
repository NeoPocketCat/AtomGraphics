//
// Created by neo on 2018/4/4.
// Copyright (c) 2018 neo. All rights reserved.
//

#ifndef ATOMCANVASNODE_H
#define ATOMCANVASNODE_H

#include "AtomNode.h"
#include "AtomImageBuffer.h"
#include "AtomCanvasContext.h"

/**
 * CanvasAPI
 * http://www.w3school.com.cn/tags/html_ref_canvas.asp
 */

namespace AtomGraphics {

    class CanvasNode : public Node {

    private:
        CanvasContext *_canvasContext;
    };
}


#endif //ATOMCANVASNODE_H